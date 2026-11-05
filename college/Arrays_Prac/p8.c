#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {5, 5, 2, 8, 2, 5, 8, 9, 2, 9};
    int visited[10] = {0};
    int i, j, count;

    for(i = 0; i < 10; i++)
    {
        if(visited[i] == 0)
        {
            count = 0;

            for(j = 0; j < 10; j++)
            {
                if(a[i] == a[j] && visited[j] == 0)
                {
                    count++;
                    visited[j] = 1;
                }
            }

            printf("%d occurs %d times\n", a[i], count);
        }
    }

    return 0;
}