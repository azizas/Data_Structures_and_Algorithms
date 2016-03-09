#include <stdio.h>// using Doubly Linked List 
#include <stdlib.h>

struct node 
{
int data ; 
struct node *next ; 
struct node *pre ; 

}; 
struct node * insertAt_Beg`inning (struct node *head , int data )
{
struct node *temp = malloc (sizeof (struct node)); 
temp->data = data ; 
temp->pre = NULL ; 
temp->next= NULL ; 
if (head == NULL)
{

	head = temp ; 
}
else 
{

	head->pre = temp ; 
	temp->next = head ; 
	head = temp ; 
}
return head ; 
}
void print(struct node *head)
{
struct node *temp = head ; 
while (temp != NULL )
{
printf("%d,",temp->data); 
temp = temp->next ; 

}
printf("\n"); 
}
void print_reveersely(struct node *head)
{
	printf("Print reversly \n\n"); 
struct node *temp =head; 
while (temp->next != NULL )
temp = temp->next ;  
while (temp != NULL)
{
	printf("%d,",temp->data); 
 temp = temp->pre ; 

 }  
 printf("\n");    
}
void delete ()
{


}
void insertAt_Tail ()
{



}
int main ()
{
 
struct node *head= NULL ; 

//cin>>value; 
head = insertAt_Beginning(head, 11); 
head = insertAt_Beginning(head, 12); 
head = insertAt_Beginning(head, 13); 
head = insertAt_Beginning(head, 14); 

print(head); 
print_reveersely(head); 





}