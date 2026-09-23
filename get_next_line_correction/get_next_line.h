/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-28 08:55:10 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-28 08:55:10 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_strlen(char *s);
char	*ft_strndup(char *s, int n);
char	*ft_strdup(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);

char	*load_fullline(int fd, char *full_content);
char	*extract_leftover(char *full_content);
char	*extract_line(char *full_content);
char	*get_next_line(int fd);

#endif
