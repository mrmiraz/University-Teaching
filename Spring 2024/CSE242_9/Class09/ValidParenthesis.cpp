// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#define MAX_STACK_SIZE 100
#define NULL_VALUE '\0'

int top; //Indicate the current size of the array
char stack[MAX_STACK_SIZE];

//Initialization
void initStack(){
    top = 0;
}

//Insert data to the stack
bool push(char data){
    if(top == MAX_STACK_SIZE)return false;
    stack[top] = data;
    top++;
    return true;
}

//Delete the top value of the stack
bool pop(){
    if(top == 0) return false;
    top--;
    return true;
}

//Check the stack is full or not
bool isFull(){
    if(top == MAX_STACK_SIZE) return true;
    return false;
}

//Check the stack is empty or not
bool isEmpty(){
    if(top == 0) return true;
    return false;
}

//Find the top value of the stack
char topValue(){
    if(top == 0)return NULL_VALUE;
    return stack[top-1];
}

//Display the full stack value
void printStack(){
    for(int i =0; i < top; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
}

bool isValid(string s) {
    initStack();
    for (char c : s) {
        if (c == '(') {
            push(c);
        } else {
            if (isEmpty()) {
                return false; // There's no opening parenthesis to match with
            }
            char topParenthesis = topValue();
            pop();
            if ((c == ')' && topParenthesis != '(')) {
                return false; // Mismatched parenthesis
            }
        }
    }
    return isEmpty(); // If stack is empty, all parentheses are matched
}


int main(){
    string str1 = "(())";
    cout << "Is " << str1 << "  valid? " << (isValid(str1) ? "Yes" : "No") << endl;
    return 0;
}
