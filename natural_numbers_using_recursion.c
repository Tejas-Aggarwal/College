#include<stdio.h>

int natural(int n){
    if (n!=0)
    {
        return n+natural(n-1);
    }
    else
    {
        return n;
    }
    
    
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number of natural numbers to calculate the sum : ");
    scanf("%d", &num);
    
    printf("%d ", natural(num));

    
    return 0;
}
