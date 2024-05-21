


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
    if(head == 0){
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findTheWinner(int n, int k) {
    initQueue();
    int i=1;
    while(i<=n){
        push(i);
        i++;
    }

    printQueue();
    // loop until there is only one player left in the queue
    while(head->next != 0){

        // move the first k-1 players from front to back of the
      //queue in circular manner
        int j=1;
        while(j<k){
            int temp = peek();
            push(temp);
            pop();
            j++;
        }

        // remove the kth player from the front of the queue and eliminate them
        pop();
    }

    // return the last remaining player as the winner of the game
    return peek();
}


int main() {

    int n=5, k=2;

    int ans = findTheWinner(n,k);

    cout << "The winner is player " << ans << endl;
    return 0;
}
