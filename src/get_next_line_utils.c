/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtohmeh <mtohmeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:54:29 by mtohmeh           #+#    #+#             */
/*   Updated: 2024/08/02 15:23:57 by mtohmeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/LIBFT.h"

void	lstadd_back(char_list **lst, char_list *new)
{
	char_list	*temp;

	if (!lst || !new)
		return ;
	temp = *lst;
	if (temp == NULL)
	{
		*lst = new;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

char_list	*lstnew(char content)
{
	char_list	*new;

	new = malloc(sizeof(char_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	lstsize(char_list *lst)
{
	char_list	*temp;
	int		count;

	count = 0;
	temp = lst;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

int	exists(char_list *head)
{
	while (head)
	{
		if ((head->content) == '\n')
			return (1);
		head = head->next;
	}
	return (0);
}
