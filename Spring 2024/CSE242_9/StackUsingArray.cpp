// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#define MAX_STACK_SIZE 100
#define NULL_VALUE -99999

int top;
int stack[MAX_STACK_SIZE];

void initStack(){
    top = 0;
}

bool push(int data){
    if(top == MAX_STACK_SIZE)return false;
    stack[top] = data;
    top++;
    return true;
}

bool pop(){
    if(top == 0) return false;
    top--;
    return true;
}

bool isFull(){
    if(top == MAX_STACK_SIZE) return true;
    return false;
}

bool isEmpty(){
    if(top == 0) return true;
    return false;
}

int topValue(){
    if(top == 0)return NULL_VALUE;
    return stack[top];
}

void printStack(){
    for(int i =0; i < top; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main(){
    initStack();
    char choice;
    int data;
    bool exit = false;
    cout << "enter e for exit the loop....\n";
        while(exit != true){
        cin >> choice;
        switch(choice){
            case 'a':
                cin >> data;
                push(data);
                break;
            case 'p':
                cout << pop() << endl;
                break;
            case 'P':
                printStack();
                break;
            case 'E':
                cout << isEmpty();
                break;
            case 'F':
                cout << isFull();
                break;
            case 't':
                cout << topValue();
                break;
            case 'e':
                exit = true;
        }
    }
    return 0;
}
