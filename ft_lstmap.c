#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*element;

	res = NULL:
	i (!f)
		return (NULL);
	while (lst)
	{
		if (!(element = ft_lstnew((*f)(lst->content))))
		{
			if (!del)
				return (NULL);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, element);
		lst = lst->next;
	}
	return (res);
}