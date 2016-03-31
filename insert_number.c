#include <stdio.h>
int main ()
{

int a [] = {1,2,3,4,5,6}; 
int size = sizeof(a)/sizeof(a[0]); 

int k = size+1 ; 
int new_array  [k]; 
int pos; 
int number_to_insert ; 
for (int i = 0; i < size; ++i)
 {
 	new_array[i] = a[i] ; 
 	printf("%d\n",new_array[i]);
 } 
printf("Entr number position starting from o and less than size - 1 \n"); 

scanf("%d",&pos); 

printf("Entr number You want \n"); 

scanf("%d",&number_to_insert);

for (int i = size ; i >=pos; --i)
{

	new_array[i+1]=new_array[i];						

}
new_array[pos]= number_to_insert;
//printf("position number:%d , has the value : %d , the value next to it is %d \n",pos,new_array[pos], new_array[pos+2]) ;
for (int i = 0; i <k; ++i)
{
	printf("%d \n ",new_array[i]); 
}
}