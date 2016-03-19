#include <iostream>
#include <cstdlib>
using namespace std ; 
struct stack
{
int data ; 
stack *next ; 

};
int top (stack *head)
{
stack *temp = head ; 
while(temp->next != NULL)
temp = temp->next ; 

	return temp->data ; 
}

void print (stack *head)
{
stack *temp = head; 
if (head==NULL)
{
	cout<<"Stack is Empty" <<endl; 
	return ; 
}
else 
{
while (temp != NULL)
{
	cout<<temp->data<<" "; 
	temp = temp->next ; 
  
}
cout<<endl ;
}
}
stack *push(stack *head , int x)
{
stack *temp  ; 
temp = new stack (); 
temp->data = x ; 
temp->next = NULL; 
if (head == NULL)
	head = temp ; 
else
{
	temp->next = head ; 
	head = temp  ; 
}
return head ; 
}
void pop (stack **head)
{
	stack *temp = *head; 
if (head == NULL)
	return ; 
else 
{
	*head= temp->next ; 
	free (temp); 
}

}
void isempty (stack *head)
{

	if (head== NULL)
		cout<<"List is empty"<<endl; 
	else
		cout<<"Lis has elements "<<endl;
}

int main ()
{
	stack *head= NULL ; 
   head = push(head,12);
   head = push(head,111);
      head = push(head,10); 
         head = push(head,14); 
            head = push(head,15);  
            isempty(head);
            int y= top(head); 
            cout<<"TOP"<<y<<endl; 
   pop(&head); 
   print(head);


}