#include <iostream>
using namespace std;

#define STACK_MAX_SIZE 100
#define NULL_VALUE -99999
int data[STACK_MAX_SIZE];
int top;

void initStack()
{
    top = 0 ;
}

bool push(int item)
{
    if(top == STACK_MAX_SIZE) return false;
    data[top] = item;
    top++ ;
    return true;
}

int pop()
{
    if(top == 0) return NULL_VALUE;
    top-- ;
    return data[top] ;
}


bool isEmpty()
{
    if(top == 0) return true ;
    else return false;
}

bool isFull()
{
    if(top == STACK_MAX_SIZE) return true;
    else return false;
}

void printStack()
{
    int i;
    for(i=0;i<top;i++)
    {
        cout << data[i] << " ";
        }
    cout << endl;
}

int main()
{
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
