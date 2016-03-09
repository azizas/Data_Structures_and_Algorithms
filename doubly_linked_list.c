#include <stdio.h>// using Doubly Linked List 
#include <stdlib.h>

struct node 
{
int data ; 
struct node *next ; 
struct node *pre ; 

}; 
void print_test (struct node *head)
{
struct node * n = head ; 
while (n->next!= NULL)
{
	n = n->next ; 
}
printf("Last node Value = %d\n",n->data); 

}
struct node * insertAt_Beginning (struct node *head , int data )
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
struct node * delete (struct node * head , int del)
{
struct node *temp ; 
temp = head ; 
if(del==1)
{
head = temp->next  ;
temp->pre =NULL; 
free (temp); 
}
else
{


	for (int i = 0 ; i<del-2; i++)
	temp = temp->next; 

	struct node *temp2 ; 
	temp2= temp->next; 
	temp->next = temp2->next ; 
	temp2->pre = temp;
	free(temp2); 
}



return head; 

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
while (temp->next != NULL )// differece between temp->next , temp = NULL
temp = temp->next ;  
while (temp != NULL)
{
	printf("%d,",temp->data); 
 temp = temp->pre ; 

 }  
 printf("\n");    
}
struct node * insertAt_tail (struct node *head , int data )
{
struct node *temp = malloc(sizeof(struct node));
struct node *str2 ; 
str2 = head ;  
temp->data = data ; 
temp->pre= NULL ;
 temp->next = NULL ; 
 while (str2->next != NULL)
 	str2 = str2->next ; 
 str2->next = temp  ; 
 temp->pre= str2 ; 

  return head ; 

}


int main ()
{
 int ch ;int i ; 
struct node *head= NULL ; 
	int add ,dele;



do {



printf (" Add in the beginning = 1  Add in the Tail = 2  Delete = 3  print = 4  Run Test = 5 Print_reversly = 6\n\n"); 
scanf("%d",&ch);
switch (ch)
{




case 1: 



	printf(" Enter a value \n"); 
	scanf("%d",&add); 

	head= insertAt_Beginning(head,add); 
 
break ;
case 2: 

printf(" Enter a value \n"); 
	scanf("%d",&i); 
	head = insertAt_tail(head,i); 
break ; 
	case 3: 

printf(" Enter Node To delete \n");

scanf("%d",&dele); 
head= delete(head, dele);
break ; 

case 4: 

print(head); 

break ;

case 5: 
print_test(head); 
break ; 
case 6: 
print_reveersely(head); 
break ; 
}
}
while (ch>=1 && ch<=6);
printf(" Beyond Boundries \n"); 

}
