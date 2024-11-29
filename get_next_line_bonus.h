/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:56:11 by imiqor            #+#    #+#             */
/*   Updated: 2024/11/29 20:56:20 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 13847748
#endif

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char *save, char *buff);
char *ft_strdup(char *s);
int ft_strlen(char *s);
char *ft_strchr(char *str, int c);
#endif