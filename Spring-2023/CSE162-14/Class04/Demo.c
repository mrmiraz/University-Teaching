#include<stdio.h>

int main(){
    int n = 5467, sum = 0;
    sum = sum + n%10; // 7 add
    n = n/10; // n = 546
    sum = sum + n%10; // 6 add
    n = n/10; // n = 54
    sum = sum + n%10; // 4 add
    n = n/10; // n = 5
    sum = sum + n%10; // 5 add
    n = n/10; // n = 0

    printf("Sum of the digits of %d is %d", n, sum);

}
