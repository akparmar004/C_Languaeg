#include <stdio.h>
int x = 0;
void main()
{
            const int *ptr = &x;
            printf("%p\n", ptr);
            ptr++;
            printf("%p\n ", ptr);
}

