#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int     main(int argc, char *argv[])
{
        if (argc > 1)
        {
                char    arg1[] = "Hello mami sin manos";
                char    arg2[] = "Bye";
                char    arg3[] = "Yo bitch!";
                char    arg4[] = "The danger";
                size_t  size = (size_t)atoi(argv[1]);

                printf("Arg 1: %s\n", arg1);
                printf("Size of Arg 1: %lu\n", sizeof(arg2));
                printf("Arg 2: %s\n", arg2);
                printf("Size: %lu\n", size);
                ft_memmove(arg2, arg1, size);
                printf("Result ft_memmove: %s\n", arg2);
		char 	*temp = memmove(arg3, arg4, size);
                printf("Result memmove: %s\n", temp);
                printf("Result memmove arg4: %s\n", arg4);
        }
        else
                printf("No arguments passed.");
        return (0);
}
