#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void adbk();
void dibk();
void boau();
void cobk();

struct lib
{
 int ano;
 char bkttl[20];
 char auth[20];
 int cost;
}b[100];

int cnt;
main()
{
 int ch;
 while(1)
 {
  printf("1:Enter the book info\n");
  printf("2:display book info\n");
  printf("3:book author\n");
  printf("4:count book\n");
  printf("5:exit\n");
  printf("enter the choice \n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
    adbk();
    getch();
    break;
   case 2:
    dibk();
    getch();
    break;
   case 3:
    boau();
    getch();
    break;
   case 4:
    cobk();
    getch();
    break;
   case 5:
    exit(0);
  }
 }
}

void adbk()
{
 if(cnt==9)
 {
  printf("no more space\n");
  return;
 }
 printf("enter the detail of book\n");
 printf("enter accession number of book =");
 scanf("%d",&b[cnt].ano);
 fflush(stdin);
 printf("enter the book title=");
 gets(b[cnt].bkttl);
 fflush(stdin);
 printf("enter the name of author=");
 gets(b[cnt].auth);
 fflush(stdin);
 printf("enter the cost of book=");
 scanf("%d",&b[cnt].cost);
 cnt++;
}

void dibk()
{
 int i;
 printf("detail of %d books in library",cnt);
 for(i=0;i<cnt;i++)
 {
  printf("%d\n%s by %s\n%d",b[i].ano,b[i].bkttl,b[i].auth,b[i].cost);
 }
}

void boau()
{
 int i,cnt=0;
 char name[20];
 printf("enter the name of author=");
 gets(name);
 for(i=0;i<cnt;i++)
 {
  if(strcmp(name,b[i].auth)==0)
  {
   cnt++;
   printf("%d\n%s\n%s\n%d",b[i].ano,b[i].bkttl,b[i].auth,b[i].cost);
  }
 }
 if(cnt==0)
  printf("no such book \n");
}

void cobk()
{
 printf("total no of books in library =%d",cnt);
}

