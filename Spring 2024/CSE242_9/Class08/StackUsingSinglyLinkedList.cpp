#include<iostream>
using namespace std;

#define STACK_MAX_SIZE 100
#define NULL_VALUE -99999

struct Node{
    int data;
    struct Node *next;
};

int top; // it will indicate size of currecnt stack
struct Node *head;

void initStack(){
    top = 0; // initaial stack size is zero
    head =  0;
}

bool push(int x){
    if(top == STACK_MAX_SIZE) return false;
    struct Node *newNode = new Node(); // memory allocation for new node
    newNode->data = x; // set data for new node
    newNode->next = 0;  // new node point null
    if(top == 0) // stack is empty
        head = newNode;
    else{
        struct Node *pointer = head;
        while(pointer->next != 0){
            pointer = pointer->next;
        }
        pointer->next = newNode; // add add new node with the last node
    }
    top++;
    return true;
}

int pop(){
    if(top == 0) return NULL_VALUE; // nothing to delete
    struct Node *pointer = head, *prevNode = 0;
    if(top == 1)
        head = 0; // deleting node
    else{
        while(pointer->next != 0){
        prevNode = pointer;
        pointer = pointer->next;
        }
        prevNode->next = 0; // disjointing/deleting last node
    }
    top--;
    return pointer->data; // returning deleting node value
}

bool isEmpty(){
    if(top == 0)
        return true;
    return false;
}

bool isFull(){
    if(top == STACK_MAX_SIZE)
        return true;
    return false;
}

void printStack(){
    struct Node *pointer = head;

    while(pointer != 0){
        cout << pointer->data << " ";
        pointer = pointer->next;
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
                pop();
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
            case 'e':
                exit = true;
        }
    }
    return 0;
}
