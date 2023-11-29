#include<stdio.h>

int main(){
    /*
    int i, n;
    scanf("%d", &n);
    for(i = 1;i <= n; i++){
        printf("%d ", i);
    }
    */

    int n, mulValue = 1;
    scanf("%d ", &n);
    for(int i = n; i >= 1; i--){
        mulValue = mulValue * i;
    }

    printf("Factorial of %d is %d", n, mulValue);
    return 0;
}
