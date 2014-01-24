  #include <stdio.h>
#include <conio.h>
#include<iostream.h>
int main()
{
    int a,b,i=0,j;
    char ch[100],c;
    while(cin.get(c))
    {
         
         ch[i]=c;
         i=i+1;
     }
   
for(j=0;j<i-1;j++)
{
     c=ch[j];            
    putchar(c-7);
} 
    getch(); 
}                 
