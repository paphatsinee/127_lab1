#include<stdio.h>
#include<math.h>
int main()
{

    long int n,m,sum;
    scanf("%ld",&n);
    if(n>=0&&n<pow(10,1000000))
    {
            sum=(n%3);
            m=(n%11);
            printf("%ld %ld",sum,m);
    }
    return 0;
}
