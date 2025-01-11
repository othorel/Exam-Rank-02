/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:10:16 by olthorel          #+#    #+#             */
/*   Updated: 2025/01/11 18:10:16 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int start;
    int end;
    int flag;

    i = 0;
    flag = 0;
    if (ac > 1)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        start = i;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        end = i;

        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        while (av[1][i])
        {
            if (flag == 1)
                write(1, " ", 1);

            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);
                i++;
            }
            flag = 1;

            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
        }

        if (start < end)
        {
            write(1, " ", 1);
            while (start < end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
