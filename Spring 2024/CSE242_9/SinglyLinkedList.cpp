#include<iostream>
#include<stdlib.h>

using namespace std;

#define ERROR_CODE -99999
#define SUCCESS_CODE 99999


struct listNode
{
    int item ; //will be used to store value
    struct listNode *next ; //will keep address of next node
};

struct listNode * list ;
int length;

void initializeList()
{
    list = NULL; //set to NULL
    length=0;
}

int insertItemBegin(int item)
{
    struct listNode * newNode ;
    newNode = (struct listNode*) malloc (sizeof(struct listNode)) ;
    newNode->item = item ;
    newNode->next = list ;
    list = newNode ;
    length++;
    return SUCCESS_CODE;
}

struct listNode* searchItem(int item)
{
    struct listNode *temp ;
    temp = list ; //start at the beginning
    while (temp != NULL)
    {
        if (temp->item == item) return temp ;
        temp = temp->next ; //move to next node
    }
    return NULL;
}

int GetItem(int position)
{
    if(position < 0 || position >= length) return ERROR_CODE;
    struct listNode *temp;
    int count = 0;
    temp = list;
    while(count < position)
    {
        temp = temp->next;
        count++;
    }
    return temp->item;
}

void PrintALL()
{
    struct listNode *temp;
    temp = list ; //start at the beginning
    while (temp != NULL)
    {
        cout << temp->item << " ";
        temp = temp->next ; //move to next node
    }
    cout << endl;
}


int deleteFirstOccurrence(int item)
{
    struct listNode *temp, *prev ;
    temp = list ; //start at the beginning
    while (temp != NULL)
    {
        if (temp->item == item) break ;
        prev = temp;
        temp = temp->next ; //move to next node
    }
    if (temp == NULL) return ERROR_CODE ; //item not found to delete
    if (temp == list) //delete first node
    {
        list = list->next ;
        free(temp) ;
    }
    else
    {
        prev->next = temp->next ;
        free(temp);
    }
    length--;
    return SUCCESS_CODE ;
}

//Assignment
int insertItemLast(int item);// Insert item at the last position of the list
int insertItemAT(int position, int item);// Insert item at the given position of the list
int NumOfItems(int item);// return the number of the occurrence of the given item
int deleteALLOccurrence(int item);// Delete all the occurrence of the given item in the list with preserving order
int deleteFirstItem(); // delete the first item of the list
int deletelastItem();// delete the last item of the list

int main()
{
    cout << "Enter I --> Insert item begin\n";
    cout << "Enter G --> Getting item\n";
    cout << "Enter S --> Search item\n";
    cout << "Enter D --> Delete first occurrence\n";
    cout << "Enter P --> Print list\n";
    cout << "Enter L --> Print length of the list\n";

    char inp1, chk;
    int inp2, s;
    initializeList();
    while(true){
        cin >> inp1;

        switch(inp1)
        {
        case 'I':
            cin >> inp2;
            s = insertItemBegin(inp2);
            break;
        case 'G':
            cin >> inp2;
            s = GetItem(inp2);
            cout << s;
            break;
        case 'S':
            cin >> inp2;
            cout << "Address: " << searchItem(inp2) << endl;
            break;
        case 'D'://delete the item of first occurrence
            cin >> inp2;
            s = deleteFirstOccurrence(inp2);
            break;
        case 'P':
            PrintALL();
            break;
        case 'L':
            cout << "Length: \n" << length << endl;
            break;
        }
        if(s == false) break;
    }

}
