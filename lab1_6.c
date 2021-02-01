#include<stdio.h>

int main()
{
    int n,m,t,i,j,k;
    char a,g;
    scanf("%d %d %d",&n,&m,&t);
    fflush(stdin);
    scanf("%c",&a);
    if( a=='L')
    {
        for(i=0;i<t;i++)
        {
            for(j=1;j<=n;j++)
            {
                g='L';
            }
            for(k=1;k<=m;k++)
            {
                g='R';
            }

        }
    }
    else if( a=='R')
    {
        for(i=0;i<t;i++)
        {
            for(k=1;k<=m;k++)
            {
                g='R';
            }
            for(j=1;k<=n;j++)
            {
                g='L';
            }

        }
    }
     printf("%c",g);

    return 0;
}
