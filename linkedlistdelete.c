#include<stdio.h>
#include<stdlib.h>
void display();
int delete(int);
struct node
{
        int data;
        struct node *next;
}*head;
int main()
{
    int n,i,a;
    typedef struct node Node;
    head=(Node*)malloc(sizeof(Node));
    Node *tem;
    Node *new;
    printf("enter no of nodes:");
    scanf("%d",&n);
    if(n>0)                         //gets the first node of the linked list
    {
        printf("enter the values:");
        scanf("%d",&a);
        head->data=a; 
        head->next=NULL;
        tem=head;
    }
    for(i=1;i<n;i++)               //get the remaining nodes of the linked list
    {
        new=(Node*)malloc(sizeof(Node));
        scanf("%d",&a);
        new->data=a;
        new->next=NULL;
        tem->next=new;
        tem=tem->next;
    }
    if(n>0)
    {
        printf("enter the element to delete:");
        scanf("%d",&a);
        printf("List before deletion:");
        display();               //display function can display the node in list
        i=delete(a);            
        if(i==1)
        {
            printf("List after deletion:");
            display();           //display after deletion
        }
    }
    free(head);                  //free memory which is allocated
    free(new);
}
void display()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)             //when list has no nodes
        printf("list is empty");
    else
    {
        while(temp!=NULL)      //print all the nodes
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }printf("\n");
    }
}
int delete(int a)
{
    struct node *temp,*prev;
    temp=head;
    if(temp->data==a)      //deleting element is found at head
    {
        temp=temp->next;
        head=temp;
        return 1;
    }
    if(head!=NULL)
    {
        while(temp!=NULL&&temp->data!=a) //gets previous node and next of deleting element
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)                  //deleting element not found
        {
            printf("Deleting element was not found in the list");
            return 0;
        }
        prev->next=temp->next;         //changes the next of previous
        return 1;
    }
    printf("list is empty");
    return 0;
}
