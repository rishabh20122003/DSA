// C++ program to demonstrate inserting a node at end 

#include <bits/stdc++.h>
using namespace std;
 
// A linked list node
class Node {
public:
    int data;
    Node* next;
};
 

void push(Node** head_ref, int new_data)
{

    Node* new_node = new Node();
    new_node->data = new_data;
 
    
    new_node->next = (*head_ref);
 
    
    (*head_ref) = new_node;
}
 

void append(Node** head_ref, int new_data)
{
    
    Node* new_node = new Node();
    new_node->data = new_data;
 

    Node* last = *head_ref;
 
    
    
    new_node->next = NULL;
 
    
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
 

    while (last->next != NULL) {
        last = last->next;
    }
 

    
    last->next = new_node;
}
 

void printList(Node* node)
{
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
}
 

int main()
{
    
    Node* head = NULL;
 

    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
 
    cout << "Created Linked list is: ";
    printList(head);
 
    
    append(&head, 1);
 
    cout << "\nAfter inserting 1 at the end: ";
    printList(head);
 
    return 0;
}
