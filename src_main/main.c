/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:13:50 by akretov           #+#    #+#             */
/*   Updated: 2024/04/28 16:40:18 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

char	*find_path(char **envp)
{
	while (ft_strncmp("PATH", *envp, 4))
		envp++;
	return (*envp + 5);
}

void	struct_init(t_pipex *pipex, int ac, char **av, char *envp[])
{
	pipex->fd_in = open(av[1], O_RDONLY);
	if (pipex->fd_in < 0)
		msg_error(ERR_INFILE, pipex);
	pipex->fd_out = open (av[ac -1], O_TRUNC | O_CREAT | O_RDWR, 0000644);
	if (pipex->fd_out < 0)
		msg_error(ERR_OUTFILE, pipex);
	if (pipe(pipex->fd_pipe) < 0)
		msg_error(ERR_PIPE, pipex);
	pipex->paths = find_path(envp);
	pipex->cmd_paths = ft_split(pipex->paths, ':');
	pipex->pid1 = fork();
}

int	main(int ac, char **av, char *envp[])
{
	t_pipex	*pipex;

	if (ac != 5)
		return (msg(ERR_INPUT));
	pipex = (t_pipex *)malloc(sizeof(t_pipex));
	if (pipex == NULL)
		return (msg(ERR_MEMORY));
	struct_init(pipex, ac, av, envp);
	if (pipex->pid1 == 0)
		first_child(pipex, av, envp);
	pipex->pid2 = fork();
	if (pipex->pid2 == 0)
		second_child(pipex, av, envp);
	close_pipes(pipex);
	waitpid(pipex->pid1, NULL, 0);
	waitpid(pipex->pid2, NULL, 0);
	child_free(pipex);
	parent_free(pipex);
	free(pipex);
	return (0);
}
