#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

Node* head;
Node* tail;
int length;

void init(){
    head = nullptr;
    tail = nullptr;
    length = 0;
}

// Function to insert a node at the end of the list
    void insertEnd(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }
    
// Function to insert a node at the beginning of the list
    void insertBegin() {
        Node* newNode = new Node();
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    
    // Function to display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    // Function to delete a node by value
    void deleteNode(int val) {
        if (head == nullptr) {
            std::cout << "List is empty. Deletion failed." << std::endl;
            return;
        }

        Node* current = head;

        // If head node is to be deleted
        if (current->data == val) {
            head = head->next;
            if (head != nullptr)
                head->prev = nullptr;
            delete current;
            return;
        }

        // Traverse the list to find the node to be deleted
        while (current != nullptr && current->data != val) {
            current = current->next;
        }

        // If node with value 'val' is not present in the list
        if (current == nullptr) {
            std::cout << "Node with value " << val << " not found in the list." << std::endl;
            return;
        }

        // Adjust pointers to remove the node
        if (current->next != nullptr)
            current->next->prev = current->prev;
        if (current->prev != nullptr)
            current->prev->next = current->next;
        delete current;
    }
    
    // Function to insert a node at a specified position
    void insertAtPosition(int val, int position) {
        Node* newNode = new Node();
        if (position <= 0) {
            std::cout << "Invalid position. Node cannot be inserted." << std::endl;
            return;
        }
        if (position == 1) {
            newNode->next = head;
            if (head != nullptr)
                head->prev = newNode;
            head = newNode;
            if (tail == nullptr)
                tail = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            std::cout << "Invalid position. Node cannot be inserted." << std::endl;
            return;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr)
            temp->next->prev = newNode;
        temp->next = newNode;
        if (newNode->next == nullptr)
            tail = newNode;
    }
    

int main() {
    init();
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);

    std::cout << "Initial list: ";
    display();
    deleteNode(3);
    std::cout << "List after deleting node with value 3: ";
    display();

    return 0;
}
