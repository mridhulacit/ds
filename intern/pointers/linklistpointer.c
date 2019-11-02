#include<stdio.h>
#include<stdlib.h>
struct linkedlist
{
    int data;
    //pointer to access linkedlist nodes
    //each node of linknode will be handled by this pointer to insert data and to mark its nextnode
    //traversal can be made using this pointer
    struct linkedlist *nextnode;
};
int main()
{
struct linkedlist *headnode = NULL;
struct linkedlist *secondnode;
struct linkedlist *thirdnode;
struct linkedlist *fourthnode;
struct linkedlist *fifthnode;
//creating memory space for each node using its pointer as much as structures memory
//(that holds data and pointer to next node)
//now memory space is created for each node
headnode = malloc(sizeof(struct linkedlist));

struct linkedlist *currnode = null;
for(int i=0; i<5;i++)
{
  if(currnode ==null)
  {
      currnode = malloc(sizeof(struct linkedlist));
      continue;
  }
  struct linkedlist *node = malloc(sizeof(struct linkedlist))
  node->data=i;
  currnode->nextnode = node;
  currnode=curnode->nextnode;

}


//inserting values using pointers
//headnode is a pointer that can access firstnode
//using headnode pointer data to headnode is given and where should point next is given
//headnode points to nextnode pointer which points to secondnode pointer
headnode->data=12;
headnode->nextnode=secondnode;
//similarly seconnode pointer will handle secondnodes data and where it has to point or traverse next
//seconnode pointer points to nextnode pointer which points to thirdnode pointer
secondnode->data=11;
secondnode->nextnode=thirdnode;
//thirdnodes pointer will be pointed to fourthnodes pointer
thirdnode->data=13;
thirdnode->nextnode=fourthnode;
//fourth node pointer points to fifth nodes pointer
fourthnode->data=15;
fourthnode->nextnode=fifthnode;
//if fithnode is final node then its nextnode pointer will point to null indicating its last node
fifthnode->data=17;
fifthnode->nextnode=NULL;
//to print list
//lets start from printing headnode i.e,the whole list

while(headnode!=0)
{
    printf("%d\n",headnode->data);
    headnode=headnode->nextnode;
    //++headnode;
}
return 0;
}
