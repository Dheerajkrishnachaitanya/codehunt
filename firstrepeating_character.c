#include<stdio.h>
#include<stdlib.h>


void createnode();
void printlist();
struct node{
char data;
struct node* link;

};
struct node* root=NULL;


int main()
{
    int tc;
    printf("\nEnter the no.of test cases");
    scanf("%d",&tc);
    for(;tc>0;tc--)
    {
          int n,i;
    printf("\nEnter the no.of nodes:");
    scanf("%d",&n);
    root=NULL;
    for(i=1;i<=n;i++)
    createnode();

    struct node* r;
    r=root->link;
     char y;int z=0;
     y=root->data;
printf("%c ",y);
   while(r!=NULL)
   {
      if(r->data!=y)
   {
       if(z==1)
       {
       printf("%c ",r->data);
       y=r->data;
       z=0;
       }
       else
        printf("%c ",y);
    }
else{
        z=1;
     printf("%d ",-1);

    }
      r=r->link;
   }

    }
    return 0;
}

void createnode()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data:");
    fflush(stdin);
    scanf("%c",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node* p;
        p=root;

        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;

    }
temp->link=NULL;
}

void printlist()
{
    struct node* q;
    q=root;
    while( q!=NULL)
    {
       printf("%c ",q->data);
       q=q->link;
    }



}
