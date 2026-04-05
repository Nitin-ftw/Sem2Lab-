#include<stdio.h>
#include<math.h>

long int fact(int n)
{
    int i;
    long int f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

int main()
{
    double x,term,sum=0;
    int n=1,sign=1;

    printf("Enter x in radians: ");
    scanf("%lf",&x);
    
    while(1)
    {
        term=pow(x,n)/(double)fact(n);
        if (fabs(term)<0.0000001)
            break;
        sum+=sign*term;
        sign=-sign;
        n+=2;
    }

    printf("sin(x) = %lf",sum);

    double term2,sum2=1;
    n=2;
    sign=-1;

    printf("\nEnter x in radians: ");
    scanf("%lf",&x);

    while(1)
    {
        term2=pow(x,n)/(double)fact(n);
        if (fabs(term2)<0.0000001)
            break;
        sum2+=sign*term2;
        sign=-sign;
        n+=2;
    }

    printf("cos(x) = %lf",sum2);
    
    sum=1.0;
    int i;
    printf("\nEnter number of terms: ");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    {
        sum = sum + pow((1.0/i),i);
    }

    printf("Sum = %f",sum);
    return 0;
}
