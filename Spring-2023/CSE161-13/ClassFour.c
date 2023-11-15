#include<stdio.h>
int b = 10; // global

void printB(){
    int c = 6;
    printf("%d", b);
}

int main(){
    //int a; //Define , local
    //a = 4; // initialization
    //printf("%d", b);
    /*
     post-increment a++, value will be assigned in next line
     pre-increment ++a, value will be assigned in line
     post-decrement a--, value will be assigned in next line
     pre-decrement --a, value will be assigned in line
    */
    /*
    int a = 21;
    int c;
    c = a++; // a = 21, c = 21
    printf("Value of c is %d\n", c); //a = 22, c = 21
    c = a--; // a = 22, c = 22
    printf("Value of c is %d\n", c);// a = 21, c = 22
    */
    /*
    int a; //Define , local
    a = 4; // initialization

    //printf("%d", b);
    printB();
    */

    int a;
    float b;
    printf("Enter the value of a : \n");
    scanf("%d", &a);
    printf("Enter the value of b : \n");
    scanf("%f", &b);
    float c = a * b;
    printf("Multiplication %f", c);
    //printB();
}
