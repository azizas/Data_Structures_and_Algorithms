#include <stdio.h>
#include <stdlib.h>
struct stack {
int data ; 
struct stack  * next ;  
};
struct stack * creationOfAnode (int data) {
	struct stack * temp = malloc (sizeof (struct stack));
	temp->data = data ; 
	temp->next =NULL; 

	return temp ; 
}
struct stack * push (int data , struct stack * top) {
	struct stack * temp = creationOfAnode(data);
	if (top == NULL){
		top = temp ; 
	
	} else {
		temp->next = top ; 
		top= temp ; 
	}
	return top ; 
}
struct stack * pop (struct stack * top){
	struct stack * temp = top ; 
	if (top == NULL){
		printf("The stack is empty \n");
	}else {
		top= temp->next ; 
		free(temp); 
	}
	
	return top ;
}
void Isempty (struct stack * top)
{
	if (top==NULL){
		printf("The stack is empty.\n");
	}else {
		printf("The stack has some plates \n");
	}
}
void print(struct stack * top) {
	struct stack * temp = top; 
	while (temp != NULL){
		printf("%d ",temp->data );
		temp = temp->next ; 
	}
	printf("\n");
}
int main () {
struct stack * top = NULL ; 
int choice ; int data ;
do{
	printf("This is a stack data structure \n");
	printf("choose one of these operations \n");
	printf("#1 push \n");
	printf("#2 pop\n");
	printf("#3 print \n");
	printf("#4 Isempty \n\n");
	scanf("%d",&choice);
	switch (choice){
		case 1:
		printf("Enter a number to push it \n");
		scanf("%d",&data);
		top=push(data,top);
		break ;

		case 2:
		top = pop(top);
		break ;

		case 3:
		print(top);
		break ;

		case 4:
		Isempty(top); 
		break ;
	}

}while (choice >=0 && choice <=4);
printf("Thank you \n");
}