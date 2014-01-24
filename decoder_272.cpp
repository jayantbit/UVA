  #include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,i=0,j;
    char ch[100],c;
    do
    {
         c=getchar();
         ch[i]=c;
         i=i+1;
     }
    while(c!='\n');
for(j=0;j<i-1;j++)
{
     c=ch[j];            
    putchar(c-7);
} 
    getch(); 
}                 
