/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:13:58 by akretov           #+#    #+#             */
/*   Updated: 2024/04/28 15:59:49 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <string.h>
# include <stdio.h>
# include "../libft/libft.h"

# define ERR_INFILE "No such file or directory"
# define ERR_OUTFILE "No such file or directory"
# define ERR_INPUT "Invalid number of arguments.\n"
# define ERR_PIPE "Pipe"
# define ERR_CMD "Command not found\n"
# define ERR_MEMORY "Not enough memory for struct"
# define ERR_EXEC "Execution didn't work"

typedef struct s_pipex
{
	pid_t	pid1;
	pid_t	pid2;
	int		fd_pipe[2];
	int		fd_in;
	int		fd_out;
	char	*paths;
	char	**cmd_paths;
	char	**cmd_args;
	char	*cmd;
}	t_pipex;

//Utils
void	close_pipes(t_pipex *pipex);
int		msg(char *err);
void	msg_error(char *err, t_pipex *pipex);
void	parent_free(t_pipex *pipex);
void	child_free(t_pipex *pipex);

//Child
void	first_child(t_pipex *pipex, char *av[], char *envp[]);
void	second_child(t_pipex *pipex, char *av[], char *envp[]);

#endif