#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmneb, size_t size);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		size_t	numelements = (size_t)atoi(argv[1]);
		int	*arr = ft_calloc(numelements, sizeof(int));
		int	*arr2 = calloc(numelements, sizeof(int));
		printf("arr: %s\n", arr); 
		printf("arr2: %s\n", arr2); 
		printf("Size of arr: %lu\n", sizeof(arr)); 
		printf("Size of arr2: %lu\n", sizeof(arr2)); 
		printf("Lentgh of arr: %lu\n", sizeof(arr) / sizeof(arr[0])); 
		printf("Lentgh of arr2: %lu\n", sizeof(arr2) / sizeof(arr2[0])); 
	}
	else
		printf("No arguments passed.");
}
