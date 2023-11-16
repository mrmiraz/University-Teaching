#include<stdio.h>

void myFunction(){

}

int main(){
    /*
    const int myFavouriteNumber = 7;
    //printf("My favorite number is : %d\n", myFavouriteNumber);
    const float pi = 3.1416;
    printf("My favorite number is : %d\nPI value is : %f\n", myFavouriteNumber, pi);
    *//*
    char myGrade = 'A';
    printf("My grade is : %c\n",myGrade);
    //char myString[] = "Hello";
    char myString[] = {'H', 'e', 'l', 'l', 'o','\0'};
    printf("My String is : %s", myString);
    */

    //Operators
    //Unary [ ++, --]

    /*
    a++ => post increment : Value will be assigned in next line
    ++a => pre increment : Value will be assigned in line
    */
    /*
    int a = 5;
    int c;
    //a = a + 1;
    c = a++; //a = 5, c = 5
    printf("Value of a is %d\n", a);//a = 6
    printf("Value of c is %d\n", c);// c = 5

    int b = 5;
    //b = b - 1;
    --b;
    printf("Value of b is %d", b);
    */

    //Arithmetic operators
    /*
    int a = 5;
    int b = 4;
    float c = (float)a / b;
    printf("Arithmetic operation of %d and %d is %.2f", a, b, c);
    */

    int a = 5;
    int b = 4;
    int c = 1;
    //printf("%d", (a > b && c > b));
    printf("Logical operation of %d and %d is %d", (a > b), (c > b), (a > b || c > b));


    return 0;
}
