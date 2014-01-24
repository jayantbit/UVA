#include <stdio.h>
int main()
{
    int a,b,i=0,j;
    char c;
    while(c=getchar())
    {if(c==EOF)return 0;
         if(c=='\n') putchar(c);
        else putchar(c-7);
     }
   
return 0;
    
}                 
