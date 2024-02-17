/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:03:31 by hbettal           #+#    #+#             */
/*   Updated: 2024/02/17 03:00:52 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "get_next_line.h"

char	**ft_split(char *s, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	free_handler(char **str);
void	fds_closer(int end[]);
char	*where_path(char **env);
int		ft_strcmp(char *s1, char *s2);
void	ft_here_doc(int end[], int ac, char **av);

typedef struct s_pipex
{
	int	i;
	int	end[2];
	int	input;
}	t_pipex;

#endif