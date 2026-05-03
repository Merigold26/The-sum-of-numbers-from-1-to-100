#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j;
    j = 0;

    for (i = 1; i <= 100; i = i + 1)
        j = j + i;

    printf("toplam %d\n", j);

    getchar(); 

    return 0;
}
