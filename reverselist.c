#include<stdio.h>
#include<stdlib.h>
 struct node{
 int data;
 struct node* link;
 };
 struct node* root=NULL;
 void add();
 void print();
 void reverse(struct node* head);
 int main()
 {
 int i,n;
 printf("Enter the elements in linked list");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
             add();
 }
 printf("\nLinked list before reversing");
 print();
 printf("\nLinked list after reversing");
 reverse(root);
print();



 return 0;
 }

 void add(){

 struct node* temp,*p;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the node data");
 scanf("%d",&temp->data);
 temp->link=NULL;
 if(root==NULL)
 {root=temp;}
else{
 p=root;
 while(p->link!=NULL)
 {
     p=p->link;
 }
 p->link=temp;
}
 }
 void print()
 {
     struct node* q;
     q=root;
     while(q!=NULL)
     {
         printf("%d->",q->data);
         q=q->link;
     }
     printf("NULL");
 }
 void reverse(struct node* head)
 {
 struct node* prev,*curr,*next;
 prev=NULL;
 next=NULL;
 curr=head;
 while(curr!=NULL)
 {
 next=curr->link;
 curr->link=prev;
 prev=curr;
 curr=next;
 }
root=prev;
 }

