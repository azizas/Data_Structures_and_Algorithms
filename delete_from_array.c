#include <stdio.h>
void  size(char *a)
{
int size = sizeof(a)/sizeof(a[0]);
for (int i = 0; i < size; ++i)
{
printf("%c\n",a[i] );
}
}
int main ()
{


int a[] = {1,2,3,4,5,6}; 
char A [] = {'a','b','c','d','f'}; 
// this program is to delete 
int number ; 

 int size= sizeof(a)/sizeof(a[0]);
//size(A); 
int k ; 
printf(" Enter number to delete from the list  \n" );
scanf("%d",&number); 
{
for (int i = 0; i < size; ++i)
	if(number==a[i])
k=i ; 
 }
//printf("%d\n",k );
for (int i = k+1; i < size; ++i)
{
	a[i-1]= a[i] ; 
}
for (int i = 0; i < size-1; ++i)
{
	printf("%d\n",a[i] );
}
}
