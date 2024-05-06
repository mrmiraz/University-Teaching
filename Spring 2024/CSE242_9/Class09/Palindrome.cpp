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


bool isPalindrome(string str) {
    initStack();
    // Push each character of the first half of the string onto the stack
    int length = str.length();
    int mid = length / 2;
    for (int i = 0; i < mid; i++) {
        push(str[i]);
    }
    
    // Compare each character of the second half of the string with characters popped from the stack
    int start = (length % 2 == 0) ? mid : mid + 1; // Adjust start index for even/odd length strings
    for (int i = start; i < length; i++) {
        if (str[i] != topValue()) {
            return false; // Characters don't match, not a palindrome
        }
        pop();
    }
    
    return true; // All characters matched, it's a palindrome
}


int main(){
    string str1 = "abaa";
    cout << "Is " << str1 << " a palindrome? " << (isPalindrome(str1) ? "Yes" : "No") << endl;
    return 0;
}
