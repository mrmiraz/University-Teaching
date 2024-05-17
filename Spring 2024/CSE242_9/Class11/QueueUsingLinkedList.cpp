
#include <iostream>
using namespace std;

struct Node{
    int data;
  struct Node *next;
};

struct Node *head;
struct Node *tail;


void initQueue(){
    head = 0;
    tail = 0;
}

bool push(int val){
    struct Node *newNode = new Node();
    newNode->data = val;
    newNode->next = 0;
    if(head == 0){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    return true;
}

bool pop(){
    if(head == 0){
        return false;
    }
    head = head->next;
    return true;
}

int peek(){
    if(isEmpty()){
        return -1;
    }
    return head->data;
}

bool isEmpty(){
    if(head == 0)return true;
    return false;
}

void printQueue(){
    struct Node *temp = head;
    while(temp != 0){
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    initQueue();
    push(4);
    push(3);
    printQueue();
    pop();
    printQueue();
    return 0;
}
