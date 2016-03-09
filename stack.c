#include <stdio.h>
#include <stdlib.h>
struct node 
{
int data ; 
struct node *next ; 

}; 
void Top(struct node *top)
{
struct node *p = top ; 
printf("from Top %d",p->data); 

}
int isEmpty(struct node *top)

{
struct node *temp = top ; 
if(temp==NULL)
{
	return 0 ; 
}
else
return 1 ; 

}
struct node *push (struct node *top,int x)
{
struct node *temp = malloc(sizeof(struct node)); 
temp->data = x ; 
temp->next = top; 
top = temp ; 
return top ; 
}
struct node *  pop (struct node *top)
{
struct node *p = top ; 

top = top->next ; 
free(p); 
return top ; 

}
void print (struct node *top)
{
struct node *p = top ; 
while (p!= NULL)
{
	printf("%d,",p->data); 
	p = p->next ; 

}

}
int main ()
{
struct node *top = NULL ;
int y ; 

printf("Enter value to Pusth into the stack 5 times \n\n"); 
scanf("%d:",&y);; 
top= push(top,y);
scanf("%d:",&y);; 
top= push(top,y);
scanf("%d:",&y);;
top= push(top,y); 
scanf("%d:",&y);; 
top= push(top,y);
scanf("%d:",&y);; 
top= push(top,y);
top= pop(top); 
print(top); 
int x  = isEmpty(top);
if (x==0)
{

	printf("List is Empty \n\n"); 
}
else 
{

	printf("List is Not Empty \n\n"); 
}
Top(top); 




}