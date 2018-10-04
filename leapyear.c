#include <stdio.h>

int main()
{
    int n;

    printf("Enter a year: ");
    scanf("%d",&n);

    if(n%4 == 0)
    {
        if( n%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( n%400 == 0)
                printf("%d is a leap year.", n);
            else
                printf("%d is not a leap year.", n);
        }
        else
            printf("%d is a leap year.", n );
    }
    else
        printf("%d is not a leap year.", n);
    
    return 0;
}
