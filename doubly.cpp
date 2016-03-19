#include <iostream>

using namespace std ; 
struct node 
{

int data ; 
node *next ; 
node * prev ; 


};
node * deletion (node *head , int position )//this one does  bot work when deleting the last node in a list
{
node * temp = head ; 
node * n = temp->next ; 
if (position == 1)
	{	

   head = temp->next ; 
  
n->prev= NULL ; 
  
	free(temp); 
	}
	else 
	{


		for (int i = 0; i<position-2 ;i++)
			temp = temp->next ; // moves the node like using ++ in a loop
	node *t2 ; 
	t2=n->next; 
	temp->next=n->next ;
	t2->prev = temp ; 
	free(n);  
	}

return head; 
}
void printRev(node *head)
{
node *temp = head ; 
while (temp->next != NULL)
temp = temp->next ; 
while (temp != NULL)
{
cout<<temp->data<<" "; 
temp = temp->prev ; 

}
cout<<endl; 

}
void print (node *head)
{
node * temp = head; 
while (temp != NULL)
{
	cout<<temp->data<<" "; 
temp = temp->next ;
}
cout<<endl; 

}
node *InsertAtnTH(node *head , int data , int pos)

{
node *temp = new node () ; 
temp->data = data ; 
temp->next = NULL ; 
temp->prev = NULL; 

if (pos==1)
{
head->prev = temp ; 
temp->next = head ; 
head = temp ;  

}
else 
{
	node *temp1 = head ; 
	for (int i =0 ; i<pos-2; i++)
	{
		temp1= temp1->next ; 
	}
temp->prev = temp1 ; 
temp->next  = temp1->next  ; 
node *n  = temp->next ; // trick is here 
n->prev= temp ; 



temp1->next = temp ;

     

}
return head ; 
}
node *InsertAtTail(node * head, int data )
{
node *temp = new node (); 
temp->data= data ; 
temp->next= NULL; 
temp->prev= NULL ; 
if (head == NULL)
{
	head= temp ; 
}
else {
node * temp1 = head ; 
while (temp1->next!= NULL)
temp1 = temp1->next ; 
temp1->next= temp ; 
temp->prev = temp1 ; 



  }
return head; 
}
node *InsertAthead(node * head, int data )
{
node *temp = new node (); 
temp->data= data ; 
temp->next= NULL; 
temp->prev= NULL ; 
if (head == NULL)
{
	head= temp ; 
}
else {
	head->prev = temp;
	temp->next = head; 
	head= temp ; 


} 
return head ;
}
int main ()
{
	int choose; 
node *head= NULL; 
do{
cout<<" Choose one of the follwoing "<<endl; 
cout<<"#1 Insert a node in the beginning of the List"<<endl; 
cout<<"#2 Insert a node in the Tail of the list "<<endl; 
cout<<"#3 Insert a node at nth posiotn "<<endl; 
cout<<"#4 Delete a node at any positon "<<endl; 
cout<<"#5 print a list forwardly "<<endl; 
cout<<"#6 Print a list backwords "<<endl; 

cin>>choose;
	cout<<"---------------------------------------------\n"; 
switch (choose)
{

case 1: 
int x  ; 
cout<<"Enter a variable to insert in the list "<<endl;
cin>>x ; 
head = InsertAthead(head,x); 
break ; 
case 2:
int y ; 
cout<<"Enter a variable to insert in the list "<<endl;
cin>>y ;
head = InsertAtTail(head, y); 

break ; 
case 3:
int pos , h ; 
cout<<"Enter a number in a list "<<endl; 
cin>>h; 
cout<<"Enter a position to store it in "<<endl; 
cin>>pos; 
head= InsertAtnTH(head,h,pos);
break; 
case 4:
int positon ; 
// Deleting a list in a list
cout<<" Enter the number You Want to Delete "<<endl; 
cin>>positon; 
head = deletion (head, positon);   

break; 
case 5: 
print(head); 
break ; 
case 6: 
printRev(head); 
break ;  


}
cout<<"------------------------------------------------\n"; 

}while (choose>=1 && choose<=6);

}