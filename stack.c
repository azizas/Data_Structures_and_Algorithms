#include <stdio.h>
int i = -1 ; 
void pop()
{
	if (i==-1)
	{
		return ; 
	}

--i; 

}
void fill (int *A,int *val)
{
	++i ; 
A[i] = *val ; 
return ; 
}
void print(int *A, int i)
{
printf("\n----------------\n");
for (int x = 0 ; x<i ; x++)
{

printf("Array has %d \n",A[x]);
}

}
int main ()
{
	int xx ; 
	int *p = &xx; 

int A[100] ; 

int x ; 



do 
{


scanf("%d",&xx); 

fill(A,&xx);



}while (i<5); 

pop();
pop();
pop();
 *p= 10 ; 
 fill(A,p); 
print(A,i);

}
