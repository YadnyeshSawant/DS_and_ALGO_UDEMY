#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node * head=NULL, *nw, *ptr, *temp,*temp1,*temp2;
void create()    // creates a linked list by askiing user for number of nodes
{
    int i,n;
    printf("Enter the no of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        printf("Enter the node data");
        scanf("%d",&nw->data);
        nw->next=NULL;
    
        if(head ==NULL)
        {
            head = ptr=nw;
        }
        else
        {
            ptr-> next = nw;
            ptr= ptr-> next;
        }
    }
}
void display()    // used for displaying the linked list 
{
    ptr= head;
    printf("\n Link list elements are \n");
    while(ptr!= NULL)
    {
        printf("\t %d \t",ptr-> data);
        ptr= ptr->next;
    }
}
void insert()   // used to insert new node 
{
    int pos,count=1;
    ptr = head;
    printf("\nEnter the position \t");
    scanf("%d",&pos);
    nw=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the node data\t");
    scanf("%d",&nw->data);
    nw-> next =NULL;
    if(pos==1)
    {
        nw->next=head;
        head=nw;
    }
    else
    {
        while(count!= pos-1)
        {
            ptr = ptr-> next;
            count++;
        }
        nw-> next = ptr->next ;
        ptr->next=nw;
    }
}
void delete()  // used to delete any node
{
    int pos,count=1;
    ptr=head;
    printf("\nEnter the position\t");
    scanf("%d",&pos);
    if(pos==1)
    {
        temp=head;
        head = head->next;
        free(temp);
    }
    else
    {
        while(count!= pos-1)
        {
            ptr=ptr->next;
            count++;
        }
            temp = ptr-> next;
            ptr->next=temp->next;
            free(temp);
    }
}
void search()  //used to search any element in list
{
    int ele,flag=0;
    ptr= head;
    printf("\nEnter element to be serched\t");
    scanf("%d",&ele);
    while(ptr!=NULL)
    {
        if(ptr-> data == ele)
        {
            flag =1;
            break;
        }
        else
        {
            ptr = ptr->next;
        }
     }
    if(flag==1)
    {
        printf("\nElement Found\n");
    }
    else
    {
        printf("\nElement Not Found\n");
    }
}
void delete_val()  //deletes a node by asking the values
{
    int ele, flag =0;
    ptr=temp=head;
    printf("\nEnter the element\t");
    scanf("%d",&ele);
    while(temp!=NULL)
    {
        if(temp->data==ele)
        {
            flag =1;
            if(temp==head)
            {
                head = head->next;
                free(temp);
            }
            else
            {
                while(ptr->next != temp)
                {
                    ptr= ptr->next;
                }
                ptr->next=temp->next;
                free(temp);
            }
        }
        else
        {
            temp=temp->next;
        }
    }
    if(flag==1)
    {
        printf("\nElement found and deleted\n");
    }
    else
    {
        printf("\nElement not found \n");
    }
}
void reverse()  // used to reverse the list
{
    struct node *p,*q,*r;
    p=q=r=head;
    p=q->next->next;
    q=q->next;
    r->next=NULL;
    q->next=r;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head =q;
    printf("\nLink List element\n");
    display();
}
void insert1()    // takes values one by one without asking for the number of nodes.
{
    ptr = head;
    nw = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node data");
    scanf("%d",&nw->data);
    nw->next=NULL;
    if(head==NULL)
    {
        head=nw;
    }
    else if(head->data >= nw->data)
    {
        nw->next= head;
        head = nw;
    }
    else
    {
        ptr = head;
        while(ptr-> next!= NULL && ptr-> data)
        {
            ptr= ptr-> next;
            nw->next= ptr->next;
            ptr->next=nw;
        }
    }
}
void search1()  //used to search any element in list 
{
    int ele,flag=0;
    ptr= head;
    printf("\nEnter element to be serched\t");
    scanf("%d",&ele);
    while(ptr!=NULL)
    {
        if(ptr-> data == ele)
        {
            flag =1;
            break;
        }
        else if(ptr->data >ele)
        {
            flag =0;
            break;
        }
        else
        {
            ptr = ptr-> next;
        }
     }
    if(flag==1)
    {
        printf("\nElement Found\n");
    }
    else
    {
        printf("\nElement Not Found\n");
    }
}
