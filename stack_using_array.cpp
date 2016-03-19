#include <iostream>
#define X 101
int AR[X]; 
int top = -1 ; 
using namespace std; 
void push(int x)
{

	if(top == (X-1))
	{
		cout<<"SORRY : OVERFLOW"<<endl;
		return ;  
	}
	top++; 
	AR[top]= x ; 

}
void pop ()
{
	if (top == -1)
	{
		cout<<"Stack id Empty"<<endl; 
	return ; 
	}
	top--; 
}
void IsEmpty()
{
	if (top == -1)
		cout<<"Stack is Empty"<<endl; 

else 
cout<<"Stack is FULL "<<endl; 
}
int Top()
{
return AR[top] ; 
}
void print ()
{
	if (top == -1)
	{
		cout<<"Stack is Empty"<<endl; 
		return ; 
	}
cout<<"Stack :"; 
for (int i = 0 ; i<=top ; i++)
{
printf("%d ",AR[i]); 
}
cout<<endl; 
	
}
int main ()
{
push(10);
push(2); 
pop();
pop();
pop();
print();
	IsEmpty(); 
		 
return 0 ; 
}