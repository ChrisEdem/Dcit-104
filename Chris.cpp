#include <stdio.h>
int main()
{
    int i, j, start, end;
    int Num, sum=0;

    
    printf("Enter Your First Number: ");
    scanf("%d", &start);
    printf("Enter Your Last Number: ");
    scanf("%d", &end);

    
    for(i=start; i<=end; i++)
    {       
         Num = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                
            Num = 0;
            break;
            }
        }

       
        if(Num==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between %d to %d = %d", start, end, sum);

    return 0;
}