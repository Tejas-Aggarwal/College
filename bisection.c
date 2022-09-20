// C program for bisection method
#include<stdio.h>
#include<math.h>

#define F(x) ((x)*(x)*(x)-9*(x)+1)

int main(void)
{
    double guess_1, guess_2, avg;
    
    printf("Enter values of 1st guess and 2nd guess : ");  //assumes the initial 2 values from user
    scanf("%lf%lf",&guess_1,&guess_2);
    // TODO: Check if result == 2

    avg=(guess_1+guess_2)/2;
    while (fabs(F(avg)) > 0.001)
    {
        avg=(guess_1+guess_2)/2;
        if (F(guess_1)*F(avg)<0)
        {
            guess_2=avg;
        }else
        {
            guess_1=avg;
        }
    }
    
    printf("approximate root is : %lf",avg);
    return 0;
}