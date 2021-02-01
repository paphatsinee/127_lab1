#include<stdio.h>

int main()
{
    int N,i,n;
    int max;

    scanf("%d", &N);
     for(i = 0; i < N; i++)
    {
        scanf("%d", &n);

        if(i==0 || n > max)
        {
            max = n;
        }
    }
     printf("%d", max);

    return 0;
}
