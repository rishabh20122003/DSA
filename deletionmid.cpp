#include <iostream> 
using namespace std; 
  

struct Node { 
    int data; 
    struct Node* next; 
}; 

int countOfNodes(struct Node* head) 
{ 
    int count = 0; 
    while (head != NULL) { 
        head = head->next; 
        count++; 
    } 
    return count; 
} 
  

struct Node* deleteMid(struct Node* head) 
{ 
    
    if (head == NULL) 
        return NULL; 
    if (head->next == NULL) { 
        delete head; 
        return NULL; 
    } 
    struct Node* copyHead = head; 
     
    int count = countOfNodes(head); 
    
    int mid = count / 2; 

    while (mid-- > 1) 
        head = head->next; 
    
    head->next = head->next->next; 
    return copyHead; 
} 
  

void printList(struct Node* ptr) 
{ 
    while (ptr != NULL) { 
        cout << ptr->data << "->"; 
        ptr = ptr->next; 
    } 
    cout << "NULL\n"; 
} 
  
 
Node* newNode(int data) 
{ 
    struct Node* temp = new Node; 
    temp->data = data; 
    temp->next = NULL; 
    return temp; 
} 
  

int main() 
{ 
    struct Node* head = newNode(1); 
    head->next = newNode(2); 
    head->next->next = newNode(3); 
    head->next->next->next = newNode(4); 
  
    cout << "Given Linked List\n"; 
    printList(head); 
    head = deleteMid(head); 
    cout << "Linked List after deletion of middle\n"; 
    printList(head); 
    return 0; 
} 
