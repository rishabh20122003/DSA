
#include <iostream>
 
using namespace std;
 

struct Node {
    int data;
    Node* next;
};
 

Node* getNode(int data)
{
    
    Node* newNode = (Node*)malloc(sizeof(Node));
 

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
 


void insertAtMid(Node** head_ref, int x)
{
    
    if (*head_ref == NULL)
        *head_ref = getNode(x);
    else {
 
        
        Node* newNode = getNode(x);
 
        Node* ptr = *head_ref;
        int len = 0;
 
        
        while (ptr != NULL) {
            len++;
            ptr = ptr->next;
        }
 
        
        int count = ((len % 2) == 0) ? (len / 2) :
                                    (len + 1) / 2;
        ptr = *head_ref;
 
        
        while (count-- > 1)
            ptr = ptr->next;
 
        
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
}
 
// function to display the linked list
void display(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
 
// Driver program to test above
int main()
{
    // Creating the list 1->2->4->5
    Node* head = NULL;
    head = getNode(1);
    head->next = getNode(2);
    head->next->next = getNode(4);
    head->next->next->next = getNode(5);
 
    cout << "Linked list before insertion: ";
    display(head);
 
    int x = 3;
    insertAtMid(&head, x);
 
    cout << "Linked list after insertion: ";
    display(head);
 
    return 0;
}
