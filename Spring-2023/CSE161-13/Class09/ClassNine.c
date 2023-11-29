#include<stdio.h>

void fun(){
    printf("Calling function!\n");
    printf("Next Line of function!\n");
}

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int multiply(int num1, int num2){
    int multiValue = num1 * num2;
    return multiValue;
}

float div(int num1, int num2){
    float divValue = (float)num1 / num2;
    return divValue;
}

int main(){
    //fun();
    int a, b;
    scanf("%d %d", &a, &b);
    int c = add(a, b);
    printf("sum: %d\n", c);
    c = multiply(a, b);
    printf("multiplication: %d\n", c);
    float multiValue = div(a, b);
    printf("div: %f\n", multiValue);
    return 0;
}
