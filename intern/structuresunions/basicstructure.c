//structures are user defined data type which acts as a container to hold items of different data type.
//structure can be defined using keyword struct followed by structure name
//here we can declare several variables of different data types.
//once declared we have to declare a structure variable either at the end of struct brackets
//or in main function.this can be declared using,//struct structure_name structure_variable//
//this structure variable once declared it can access the data members in the structure using (.)dot operator
//once structure is created its memory will be higher than or equal to the sum of the datatype's memory
//that it holds
//array of structures is possible and structure pointers are possible(refer pointers folder)
#include<stdio.h>
struct sample
{
   int x;
};//its here where we can also declare a structure variable
int main()
{
   struct sample a[10];
   printf("\nenter the samples:");
   for(int i=0;i<10;i++)
   {
      scanf("%d",&a[i].x);
   }
   printf("\nthe samples are:");
   for(int i=0;i<10;i++)
   {
      printf("%d\n",a[i].x);
   }
   return 0;
}