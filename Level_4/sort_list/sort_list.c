/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:29:38 by olthorel          #+#    #+#             */
/*   Updated: 2025/01/11 18:29:38 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     swap;
    t_list  *start;

    start = lst;
    while (lst && lst->next)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}
