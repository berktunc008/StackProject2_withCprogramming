#include <bits/stdc++.h> 
using namespace std; 
  

struct Node { 
    int data; 
    struct Node* next; 
}; 
  

void push(struct Node** head_ref, int new_data)
{ 
    struct Node* new_node = new Node;   
  
    new_node->data = new_data;       
    new_node->next = (*head_ref);   
    (*head_ref) = new_node;  
} 
  
           
Node *terslisteislemi(Node* head)       
{ 
     
    stack<Node *> yigin;                 
  
    
    Node* ptr = head;                   
    while (ptr->next != NULL) {         
        yigin.push(ptr);                 
        ptr = ptr->next; 
    } 
  
    
     
    head = ptr;                     
    while (!yigin.empty()) {           
        ptr->next = yigin.top();       
        ptr = ptr->next;            
        yigin.pop();                  
    } 
      
    ptr->next = NULL;     
      
    return head;         
} 
  

void printList(Node* head)     
{ 
    while (head) {                     
        cout << head->data << " ";      
        head = head->next; 
    } 
} 
  

int main()          
{ 
    
    struct Node* head = NULL;    
  
        push(&head, 50);
		push(&head, 20);
		push(&head, 15);
		push(&head, 40);
		push(&head, 75);
		push(&head, 25);
		push(&head, 42);
		push(&head, 34);
		push(&head, 88);
		push(&head, 990);
    
  
       head = terslisteislemi(head); 
  
       printList(head); 
  system("pause");
    return 0; 
    
} 
