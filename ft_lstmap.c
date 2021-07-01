#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*beg;
	t_list	*add;

	if (lst)
	{
		new = lst;
		beg = ft_lstnew(f(lst->content));
		if (beg == NULL)
			return (NULL);
		new = new->next;
		while (new)
		{
			add = ft_lstnew(f(new->content));
			if (add == NULL)
			{
				ft_lstclear(&beg, del);
				return (NULL);
			}
			ft_lstadd_back(&beg, add);
			new = new->next;
		}
		return (beg);
	}
	return (NULL);
}
