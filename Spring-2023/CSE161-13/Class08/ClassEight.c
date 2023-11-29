#include<stdio.h>

int main(){
    int i;
    printf("For loop: ");
    for(i = 1; i <= 10; i++){
        printf("%d ", i);
    }
    printf("\nFor while: ");
    int j = 1;
    while(j <= 10){
       printf("%d ", j);
       j++;
    }

    printf("\nFor do while: ");
    int k = 1;
    do{
        printf("%d ", k);
        k++;
    }
    while(k <= 10);
    return 0;
}
