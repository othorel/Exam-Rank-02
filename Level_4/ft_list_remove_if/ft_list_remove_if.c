/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:34:32 by olthorel          #+#    #+#             */
/*   Updated: 2025/01/11 17:34:32 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;

    current = *begin_list;
    if (!begin_list || !*begin_list)
        return ;
    if (cmp(current->data, data_ref) == 0)
    {
        *begin_list = current->next;
        free(current);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        current = *begin_list;
        ft_list_remove_if(&current->next, data_ref, cmp);
    }
}
