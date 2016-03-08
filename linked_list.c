#include <stdio.h>
#include <stdlib.h>
struct node 
{
int data ; 
struct node *next ; 

}; 
struct node * insert (struct node *head , int data , int position )
{
struct node *temp = malloc (sizeof(struct node )); 
temp->data = data ; 
temp->next= NULL ; // if position == 1
if (position == 1)
{
	temp->next = head ; 
head = temp ;  // if position == 1
}
else 
{
	struct node * temp2 ; 
	temp2 = head ; 
	for (int i = 0 ; i<position-2 ; i++)
  temp2 = temp2->next ; 
  temp->next = temp2->next ; 
  temp2->next = temp ; 
 

}
 return head ; 
}
void print (struct node *head)
{
	struct node *temp = head ; 
	while (temp != NULL )
	{
		printf("%d,", temp->data); 
		temp = temp->next ; 
	}
printf("\n"); 

}
struct node * delete (struct node * head, int del)
{
struct node *temp = head ; 
if (del == 1)
{
	head = temp->next ; 
	free(temp); 
}
else 
{
for (int i = 0; i <del-2  ;i++)
	temp = temp->next ; 
struct node *temp2 = temp->next ; 
temp->next = temp2->next  ;
free(temp2); 

}
return head ; 

}
struct node * reverse (struct node *head)
{
struct node *temp , *prev , *next  ; 
temp = head ; 
prev = NULL ; 
while (temp != NULL)
{

	next = temp->next ; 
	temp->next = prev ; 
	prev = temp ; 
	temp = next ; 
}
head = prev ; 
return head ; 
}
void  reverse_recuresevly (struct node * head)
{
if (head == NULL)
{

	return ; 
}
reverse_recuresevly(head->next); 
printf("%d,",head->data); 

}
int main ()

{
	bool cck = true ; 
	int choose  , data , position;	int dele;  
	struct node *head = NULL ; 
	

  do {
  	printf("---------------------------------\n");
	printf ("Enter one of the following \n");
	printf("---------------------------------\n");
	printf("#1 insert the to the List \n");
	printf("#2 Print The List \n"); 
	
	printf("#3 Delete an Element from The List \n"); 
	printf("#4 Reverse order of List \n");
	printf("#5  reverse_recuresevly order of List \n\n:"); 
	scanf("%d",&choose); 
  	switch (choose)
  	{
  		case 1: 
  		printf("Enter Data to Store in the List \n"); 
  		scanf("%d", &data); 
  		printf("Enter a postion \n"); 
  		scanf("%d",&position); 
    head  =insert(head,data, position); 
  		break ; 
  		case 2: 
  		print(head);
  		break ; 
  		case 3:
  		printf("Enter a positoin to delete \n"); 
  		scanf("%d",&dele); 
  		head = delete (head , dele); 
  		break ; 
  		case 4: 
  		head = reverse(head); 
  		break; 
  		case 5 : 
  		reverse_recuresevly(head); 
  	}

  }while (choose >=1 && choose <=5); 
printf ("Sorry, Beyond Boundries \n "); 
}