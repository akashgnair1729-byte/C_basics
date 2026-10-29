#include <stdio.h>
int main()
{
    int num;
    int i;
    int isprime=1;
    printf("enter number");
    scanf("%d",&num);
    if (num<2)
    {
       isprime=0; 
    }
    else
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
            isprime=0;
            break;
            }
        }
    }

    if (isprime)
     printf("%d is prime",num);
    else
     printf("%d is not prime",num);
    return 0;
}
