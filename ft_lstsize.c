#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*count;

	i = 0;
	count = lst;
	while (count)
	{
		count = count->next;
		i++;
	}
	return (i);
}
