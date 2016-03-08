#include <stdio.h>
#include <stdlib.h>
struct node 
{
int data  ; 
struct node *next ; 


}; 
struct node *insert(struct node *head,int data , int pos)
{
	struct node *temp ; 

	temp = malloc (sizeof(struct node )); 
	 temp->data= data   ; 
	 temp->next= NULL ; 
	 if (pos==1)
	 {
	 	temp->next= head ; 
	 
    head = temp ; 
	 }
	 else 
	 {
struct node *temp2 = head  ; ; 
    for (int i = 0 ; i<pos-2  ;i++)
    	temp2 = temp2->next; 
        temp->next = temp2->next ; 
        temp2->next = temp ; 
	 }
	return head ; 
}
void print(struct node *head)
{
struct node *temp = head ; 
while (temp != NULL)
{
	
printf("%d,",temp->data);

temp = temp->next ; 

}
printf("\n"); 

}
void delete (struct node **head, int pos)
{
struct node *temp = *head ; 
if (pos==1)
{
*head = temp->next ; 

free(temp); 
}
else 
{
for (int i = 0 ; i<pos-2 ; i++)
	temp = temp->next ; 
  struct node *temp2 ;  
  temp2 = temp->next  ; 
  temp->next = temp2->next  ; 
  free(temp2);
}

}
int main ()
{
	struct node *head = NULL ; 
int choose  ,ele, pos, pos_dele; 
do 
{
printf("----------------------------------\n");
printf(" Choose Any of the following \n"); 

printf("----------------------------------\n"); 
printf("#1 insert the to the List \n");
printf("#2 Print The List \n"); 
printf("#3 Delete an Element from The List \n\n:"); 
scanf("%d",&choose); 
switch (choose)
{
case 1: 
printf(" Enter an element to the list \n"); 
scanf("%d",&ele);
printf("Enter position \n"); 
scanf("%d",&pos); 
head = insert(head, ele, pos); 
break ; 

case 2: 
print (head); 
break ; 

case 3 : 
printf("Enter a postion to delete \n"); 
scanf("%d",&pos_dele); 
delete(&head,pos_dele);
break ; 

}

}while (choose >=1 && choose <=3);
printf(" Sorry, Beyond Boundries \n"); 
}
