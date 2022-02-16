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

int main () {

    int data1 = 100;
    int data2 = 20;
    t_list *main_list;
    main_list = ft_create_elem((void *)&data1);
    ft_list_push_front(&main_list, (void *)&data2);

    printf("main list->next is %d\n", main_list->next);
    printf("main list->data is %d\n", *( (int *)(main_list->data)) );

    printf("new main list->next is %d\n", main_list->next->next);
    printf("new main list->data is %d\n", *( (int *)(main_list->next->data)) );




return 0;
}
