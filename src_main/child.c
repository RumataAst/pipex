/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:37:26 by akretov           #+#    #+#             */
/*   Updated: 2024/04/28 16:36:38 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

static char	*get_cmd(char **paths, char *cmd)
{
	char	*tmp;
	char	*command;

	while (*paths)
	{
		tmp = ft_strjoin(*paths, "/");
		command = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(command, 0) == 0)
			return (command);
		free(command);
		paths++;
	}
	return (NULL);
}

void	first_child(t_pipex *pipex, char *av[], char *envp[])
{
	dup2(pipex->fd_pipe[1], 1);
	close(pipex->fd_pipe[0]);
	dup2(pipex->fd_in, 0);
	close(pipex->fd_in);
	pipex->cmd_args = ft_split(av[2], ' ');
	pipex->cmd = get_cmd(pipex->cmd_paths, pipex->cmd_args[0]);
	if (!pipex->cmd)
	{
		child_free(pipex);
		msg(ERR_CMD);
		exit(1);
	}
	if (execve(pipex->cmd, pipex->cmd_args, envp) < 0)
	{
		child_free(pipex);
		msg(ERR_EXEC);
		exit(1);
	}
}

void	second_child(t_pipex *pipex, char *av[], char *envp[])
{
	dup2(pipex->fd_pipe[0], 0);
	close(pipex->fd_pipe[1]);
	dup2(pipex->fd_out, 1);
	close(pipex->fd_out);
	pipex->cmd_args = ft_split(av[3], ' ');
	pipex->cmd = get_cmd(pipex->cmd_paths, pipex->cmd_args[0]);
	if (!pipex->cmd)
	{
		child_free(pipex);
		msg(ERR_CMD);
		exit(1);
	}
	if (!execve(pipex->cmd, pipex->cmd_args, envp))
	{
		child_free(pipex);
		msg(ERR_EXEC);
		exit(1);
	}
}
