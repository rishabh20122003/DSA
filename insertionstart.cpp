#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void insertFront(Node** head, int data){

    Node* new_node = new Node();

    
    new_node->data = data;
    
    
    new_node->next = *head;

*head = new_node;
    
    cout << "Inserted Item: " << new_node->data << endl;
}

void printList(Node* node){
    
    cout << "\nLinked List : " ;
    
    
    while(node!=NULL){
        cout << node->data << " "; node = node->next;
    }
    cout << endl;
}

int main(){

    Node* head = NULL;

    insertFront(&head,4);
    insertFront(&head,5);
    insertFront(&head,6);
    insertFront(&head,7);
    insertFront(&head,8);
    insertFront(&head,9);

    printList(head); 
    
    return 0;  
}
