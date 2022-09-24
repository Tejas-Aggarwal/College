#include <stdio.h>

int fibonacci(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    
}

int main(int argc, char const *argv[])
{
    int num, i;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    

    return 0;
}
