#include<stdio.h>

int getSumOfDigits(int num){
    int reminder, sum = 0;
    while(num != 0){
        reminder = num % 10;
        sum += reminder;
        num = num / 10;
    }
    return sum;
}

int main(){
    //int n = 5478;
    int n;
    scanf("%d", &n);
    int returnSum = getSumOfDigits(n);
    printf("Sum of digits: %d",returnSum);
    return 0;
}
