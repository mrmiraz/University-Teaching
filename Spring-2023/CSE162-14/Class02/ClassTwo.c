#include<stdio.h>

void printMyName(){
    printf("Juboraj\n");
}

int main(){
    //Token
    /*
    const int myNumber = 7;
    const float pi = 3.1416;
    printf("%d\n", myNumber);
    printf("Value of PI: %.4f\n", pi);
    */

    //String
    /*
    char myCharacter = 'A';
    printf("This is my character: %c\n", myCharacter);
    char myString[] = "Hello";
    printf("This is my string: %s\n", myString);

    //printf("character: %c\nString: %s", myCharacter, myString);

    char myString2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("My string 2: %s\n", myString2);
    */

    //Operator

    //Unary [ ++, -- ]
    /*
    int a = 4;
    int c, d;
    c = ++a; // a = a + 1
    d = a;
    printf("Value of a is %d\n", a);
    printf("Value of c is %d\n", c);
    printf("Value of d is %d\n", d);
    int b = 6;
    b--; //b = b - 1;
    printf("Value of b is %d\n", b);
    */

    //Binary Operator
    //Arithmetic [ +, -, *, /, % ]
    /*
    int a = 5;
    int b = 4;
    int c = a % b;
    printf("Arithmetic operation of a and b is: %d", c);
    */
    //Calculate the area of a circle.
    /*
    const float pi = 3.1416;
    int radius = 5;
    float areaOfCircle = pi * radius * radius;
    printf("Area of the circle is %f ", areaOfCircle);
    */

    //Relational  [ ==, > , <, != , >=, <= ]
    /*
    int a = 10;
    int b = 4;
    int c = a >= b;
    printf("%d", c);
    */

    //Logical operators
    /*
    int boy = 20;
    int girl = 18;
    printf("%d", (boy >= 21 && girl >= 18));
    */
    return 0;
}
