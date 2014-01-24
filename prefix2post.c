#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
#include<ctype.h>
struct node
                  {
                    char a[20];
                    struct node*next;
                  };
void push(struct node**p,char a[20])
 {
  struct node*temp;
  if(*p==NULL)
  {
  (*p)=(struct node*)malloc(sizeof(struct node));
  (*p)->next=NULL;
  strcpy((*p)->a,a);
  }
  else
    {
                temp=(struct node*)malloc(sizeof(struct node));
                strcpy(temp->a,a);
                temp->next=(*p);
                (*p)=temp;
    }
 }
char*pop(struct node**p)
 {
   char *a;
   a=(*p)->a;
   (*p)=(*p)->next;
   return a;
 }
void convert(char*s)
{
 int i=0;
 char a[20],b[20];
 char*x,*y;
 struct node*stack=NULL;
   strrev(s);
   while(s[i]!='
