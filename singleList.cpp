#include <iostream>
#include <cstdlib>
using namespace std ; 
struct node {
	// The design of this prigram is not very good it has a lot of redendency 
int data  ; 
node *next ; 


};

node *reverse (node * head)
{
node *pre  = NULL ; 
node *temp = head ; 
node * after ; 
while (temp != NULL)
{
after = temp->next ; 
temp->next=pre ; 
pre = temp ;
temp = after;

}
head = pre ; 
return head ; 

}
node *dele (node * head , int pos)
{

node *temp = head ; 
if (pos ==1)
{

	head = temp->next ; //No head->next ; 
	free(temp); 

}
else 
{
for (int i = 0 ; i<pos-2 ; i++)
temp= temp->next  ;
node *temp2 = temp->next ; 
temp->next= temp2->next ; 
free(temp2);
}
return head ; 

}

node *position(node * head , int dat , int pos )
{
node *temp = new node (); 
temp->data = dat ; 
temp->next = NULL;
if (pos ==1)
{

temp->next = head ; 
head= temp ; 

}
else 
{
node *temp2 = head ;  
for (int i = 0 ; i <pos-2 ; i++)
{
temp2= temp2->next  ;

}
temp->next = temp2->next ; 
temp2->next= temp ;
} 
return head ; 

}
node *beg(node * head , int dat )
{
node * temp = new node () ; 
temp->data = dat ; 
temp->next = NULL; 
if (head == NULL)
head = temp ; 

else 
	temp->next = head ; 
head = temp ;

return head ; 
}
node * insertatEnd (node *head , int data)
{
node *temp = new node (); 
temp->data = data; 
 temp->next = NULL ; 
if (head== NULL)
{
	head = temp ; 
}
else {
node *temp2 ; 
temp2= head ; 
while (temp2->next != NULL)
temp2 = temp2->next ; 
temp2->next =temp ; //temp2 = temp ;
}
return head ; 
}
void print (node *head )
{

node *temp = head ; 
while (temp != NULL )
{ 
cout<<temp->data<<" "; 
temp = temp->next ; 
}
cout<<endl; 
}
int main ()
{
	int choice  ; 
node * head = NULL ;

  do {
cout<<" Ennter Any Og the Following "<<endl; 

cout<<"#1 Insert At the End  "<<endl; 
cout<<"#2 Insert At the Begnning  "<<endl; 
cout<<"#3 Insert At ANY POSITION "<<endl; 
cout<<"#4 delete At the beginning "<<endl;
cout<<"#5 Reverse List "<<endl;
cout<<"#6 Print The List At ANY POSITION"<<endl;  cin>>choice;

switch (choice)
{
case 1: 
cout<<" Enter a number to add in the List "<<endl; 
int x ; 
cin>>x; 
head = insertatEnd(head,x); 
break ; 
case 2: 
int z ; 
cout<<"Enter a value "<<endl; 
cin>>z ; 
head = beg(head, z);

break ; 
case 3:
int r ,m;  
cout<<" Enter a number to Save in a list "<<endl; 
cin>>r;
cout<<"Enter position wanted to store "<<endl; 
cin>>m;
head= position(head, r,m);
break ; 
case 4 : 
//delete 
cout<<"Enter a position to delete "<<endl;
int u, po ; 
cin>>u ; 
head = dele (head, u); 
break ; 
case 5: 
head= reverse(head); 
brea; 
case 6:
print(head); 
break ;  




  }

}while (choice >=0 && choice <=8 ); 
cout<<" Beoynd the number of number of choices "<<endl; 


}