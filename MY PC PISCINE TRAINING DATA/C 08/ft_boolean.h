#ifndef _FT_BOOLEAN_H_
#define _FT_BOOLEAN_H_

#include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN(nbr) (nbr % 2)

typedef	int	t_bool;

#endif // _FT_BOOLEAN_H_
