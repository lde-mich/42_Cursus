/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:08:35 by lde-mich          #+#    #+#             */
/*   Updated: 2023/02/15 15:31:24 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

char		*get_next_line(int fd);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strlen(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strdup(char *s1);
char		*ft_strchr(const char *str, int c);
char		*ft_backup(char *line);
char		*ft_temp_line(int fd, char *buffer, char *backup);

#endif
