#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i, array[5];

     for (i = 0; i < 5; i++)
        array[i] = i * 11;

    printf("%p\n", array);
    printf("%d\n", *(array + 2));

    return 0;
}