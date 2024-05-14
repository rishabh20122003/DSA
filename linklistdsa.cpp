#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    
};
void insertFront (struct Node **head, int data)
{
  
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));

  newNode->data = data;
  
  newNode->next = *head;
  
  *head = newNode;
}
void deleteFront (struct Node *&head)
{
  struct Node *temp = head;
  if (head == NULL)
  {
      cout << "Linked List Empty, nothing to delete";
      return;
  }
  
  cout << "Value deleted: " << temp->data << endl;
  
   head = head->next;
   delete temp;
}
void display (struct Node *node)
{
  cout << "\n\n";
  
  while (node != NULL)
  {
      cout << node->data << " "; node = node->next;
  }
  cout << "\n" << endl;
}
int main ()
{
  struct Node *head = NULL;
  
  insertFront (&head, 6);
  insertFront (&head, 12);
  insertFront (&head, 18);
  insertFront (&head, 24);
  insertFront (&head, 30);
  
  display (head);
  deleteFront (head);
  deleteFront (head);
  display (head);
  return 0;
}
