#include <iostream>
using namespace std;

#define STACK_MAX_SIZE 100
#define NULL_VALUE -99999

//Structure of a node of the stack
struct Node{
  int data;
  struct Node *next;
};

int top;// it will indicate size of currecnt stack
struct Node *head;
struct Node *tail;

//Initialization
void initStack(){
    top = 0;    
    head = 0;
    tail = 0;
}

//Insert data to the tail
bool push(int x){
    if(top == STACK_MAX_SIZE) return false;
    struct Node *newNode = new Node();
    newNode->data = x;
    newNode->next = 0;
    if(top == 0){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    top++;
    return true;
}

//Delete top value
bool pop(){
    if(top == 0)return false;
    if(top == 1){
        head = tail = 0;
    }
    else{
        struct Node *temp = head;
        while(temp->next != 0){
            if(temp->next->next == 0){
                temp->next = 0;
                tail = temp;
                break;
            }
            temp = temp->next;
        }
    }
    top--;
    return true;
}

//Return top value of the stack
int topValue(){
    if(top == 0)return NULL_VALUE;
    return tail->data;
}

//Check the stack is full or not
bool isFull(){
    if(top == STACK_MAX_SIZE)return true;
    return false;
}

//Check the stack is empty or not
bool isEmpty(){
    if(top == 0) return true;
    return false;
}

//Display the full stack
void printStack(){
    struct Node *temp = head;
    while(temp != 0){
        cout << temp->data << " ";
        temp = temp->next;
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
