#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;

t_list *ft_create_elem(void *data)
{
    t_list *ret;
    ret = (t_list *)malloc(sizeof(t_list));
    ret->data = data;
    ret->next = NULL;
    return ret;
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_element;
    new_element = ft_create_elem(data);
    new_element->next = *begin_list;
    *begin_list = new_element;
}

int ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    while (begin_list->next != NULL)
    {
        begin_list = begin_list->next;
        i++;
    }
    return i;
}

t_list *ft_list_last(t_list *begin_list)
{

}



int main () {
    int i = 0;

    int data1 = 100;
    int data2 = 20;
    t_list *main_list;
    main_list = ft_create_elem((void *)&data1);
    ft_list_push_front(&main_list, (void *)&data2);
    while (i++ <9)
        ft_list_push_front(&main_list, 42);

    printf("TOTAL NB OF ELEMENTS (LIST SIZE) = %d", ft_list_size(main_list));


return 0;
}
