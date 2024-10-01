/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrome <marcrome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:19:39 by marcrome          #+#    #+#             */
/*   Updated: 2024/09/11 10:33:52 by marcrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>  // Para la función open
#include <unistd.h> // Para la función close
#include "get_next_line.h"  // Asegúrate de que tu función get_next_line esté declarada aquí

int main()
{
    int     fd;
    char    *line;
    int     lines;

    lines = 1;
    fd = open("test.txt", O_RDONLY);
    
    while((line = get_netx_line(fd)))
        printf("%d->%s\n", lines++, line);
}