#include <stdio.h>
#include <stdlib.h>
struct node 
{
int data ; 
struct node *next ; 
}; 
void print_rec(struct node *head)
{
struct node *h = head ;

while (h != NULL )
{
printf("%d",h->data); 
	h = h->next ; 


}

}
struct node * pri_rec (struct node *head)
{
struct node *temp = head ; 

if (temp->next== NULL)
{
head = temp ; 


}
else 
{
pri_rec(temp->next); //moves to the next node 
struct node *q  = temp->next ; 
q->next = temp ; 
temp->next = NULL ; 
}
return head ; 

}
struct  node * insert (struct node *head ,int data )
{
struct node *temp ; 
temp = malloc(sizeof(struct node)); 
temp->data = data ; 
temp->next = NULL ; 
printf("%d",temp->data);

if (head == NULL)
{
	head = temp ; 

}
else 
{

	struct node *temp2  = head ; 
	while(temp2->next != NULL)
		temp2 = temp2->next ; 
	temp2->next = temp ; 
}
return head ; 
}
void print(struct node *head)

{
struct node *temp1 = head ; 
while (temp1!= NULL)
{
	printf("%d, ",temp1->data);
temp1= temp1->next ; 
}
printf("\n");

}
int main ()
{
//first insert at the end   ; 
	struct node *head = NULL; 
  int choose  ; 

  do {
  printf(" Enter one of the  following \n"); 
  
   printf("#1 Insert an Element in the list \n"); 
   printf("#2 Print the List \n"); 
   printf("#3 preverse the List \n");
   printf("#4 print_recuresivly  elements in the list \n\n: "); 
  scanf("%d",&choose); 
   switch (choose)
   {

case 1: 
printf (" Enter an Element \n"); 
int data  ; 
scanf("%d",&data); 
head = insert(head , data); 
break ; 
case 2: 
print(head); 
break; 
case 3: 
 head=pri_rec(head); 
break ; 
case 4: 
 print_rec(head); 
break ; 


   }

  }while  (choose>=1 && choose <=4); 
  printf (" Beyond Boundries  \n"); 

}