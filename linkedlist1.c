//Linked list creation and traversal.
#include<stdio.h>
#include<stdlib.h>
struct Node
{ 
    int data;
    struct Node *next; //pointer
};
void linkedlistTraversal(struct Node *ptr) //ptr is the pointer which is pointing to head node.
{
    while(ptr!=NULL)
    {
    printf("Element :%d\n" , ptr->data);
   ptr=ptr->next;
}
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    //Allocate memory for nodes in the linked list
    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
   //link first and second node
   head->data=7;
   head->next =second;
   //link second and third node
   second->data=11;
   second->next =third;
   //terminate the list at the third node
   third->data =66;
   third->next =NULL;
   linkedlistTraversal(head); //head ek pointer hai struct node*type ka.
    return 0;
}




