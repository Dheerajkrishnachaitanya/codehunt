#include<stdio.h>
#include<stdlib.h>
int total=0;
struct node{
int data;
struct node* left;
struct node* right;
};
struct node* root=NULL;
void totalsum_exceptadjacent(int x);
void create_node();
//void inorder(struct node* g);
int main()
{

int n;
printf("\nEnter the no.of nodes:");
scanf("%d",&n);

for(;n>0;n--)
{
    create_node();

}

int key;
printf("\nEnter the data of key node;");
scanf("%d",&key);

totalsum_exceptadjacent(key);

printf("\n%d",total);

//inorder(root);
return 0;
}


void create_node()
{
   struct node* temp;
   temp=(struct node*)malloc(sizeof(struct node));
    printf("\Enter the node data:");
    scanf("%d",&(temp->data));
    temp->left=NULL;
    temp->right=NULL;
    total+=temp->data;
    if(root==NULL)
    root=temp;
    else{
        struct node *p,*q;
        p=root;
        q=root;
        while(q!=NULL)
        {
            p=q;
            if(temp->data>q->data)
            q=q->right;
            else
                q=q->left;
        }
        if(temp->data>p->data)
        p->right=temp;
        else
        p->left=temp;

    }

}


void totalsum_exceptadjacent(int x)
{
    struct node *r;
    r=root;int z=0;
    while( z!=1 && (r->left!=NULL || r->right!=NULL) )
    {
        if(r->right!=NULL && r->right->data==x)
        {
            total=total-r->data;
            if(r->right->left!=NULL)
               total=total-r->right->left->data;
               if(r->right->right!=NULL)
                total=total-r->right->right->data;
                z=1;
        }

            else if(r->left!=NULL && r->left->data==x){
                    if(r->left->left!=NULL)
                total=total-r->left->left->data;
            if(r->left->right!=NULL)
                total=total-r->left->right->data;


            z=1;
            }

        else if(r->data==x)
        {    if(r->left!=NULL)
            total=total-r->left->data;
            if(r->right!=NULL)
            total=total-r->right->data;
            z=1;
        }
        else
        {
            if(x>r->data)
                r=r->right;
            else r=r->left;

             z=0;
          }
    }
    if(z==0)
    printf("\n%d",-1);
}



//void inorder(struct node* g)
//{
//    if(g!=NULL)
 //   {   inorder(g->left);
  //      printf("%d ",g->data);
   //     inorder(g->right);
  //  }
//return;
//}
