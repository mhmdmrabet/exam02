/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:06:33 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/09 08:06:33 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LEVEL1_H
# define LEVEL1_H

# include <unistd.h>

char	*ft_strcpy(char *dest, const char *src);
void	ft_swap(int *a, int *b);
void	first_word(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif