#include<stdio.h>


void extractDigits(int n){
    int rem, sum = 0, multiValue = 1;
    while(n != 0)
    {
        rem = n % 10;
        //sum = sum + rem;
        multiValue *= rem;
        n = n / 10;
    }

    //printf("Sumation of digits: %d", sum);
    printf("Multiplication of digits: %d", multiValue);
}

int main()
{
    int num, rem;
    scanf("%d",&num);
    extractDigits(num);
    return 0;
}
