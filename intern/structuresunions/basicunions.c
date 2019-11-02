//unions is another special user defined data type whch is also used to hold datamembers of different datatype
//unions can be defined using keyword union
//here we can declare and access data members as same as structures
//the main difference between structure and union is,
//here data members in union shares the memory space created by the structure variable(object)
//change in one datamember will reflect in another datamember
//datamember can be accessed one at a time
#include<stdio.h>
union sample
{
    int m;
    int n;
};
//union array
int main()
{
    union sample a[10];
    printf("\nenter the values:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i].m);
    }
    //now here we have accessed both datamember at same time
    //values entered during second time will be printed
    //its because datamembers share the memory space due to which values are shared
    //so,only one datamember can be accessed at a time
    printf("\nenter values for n:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i].n);
    }
    printf("\nvalues by m are:");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i].m);
    }
    //elements are stored in m datamember but on printing using n variables we can access same set of elements
    printf("\nvalues by n are:");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i].n);
    }
    return 0;
}