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

int main () {

    int data = 100;
    t_list *list;
    list = ft_create_elem(&data);
    printf("list->next is %d\n", list->next);
    printf("list->data is %d\n", ( (int *)(list->data)) );




return 0;
}
