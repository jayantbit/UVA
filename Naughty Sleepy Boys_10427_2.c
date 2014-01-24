#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
char *buff = ( char *) calloc(100000000, sizeof( char));
long long int i=1,a,k=0;
for(;k<=10000001;)
{
                      //printf("%d\n",i);
                      k+=sprintf(buff+k,"%lld",i);
}
//printf("%s\n",buff);
printf("%d",strlen(buff));
getch();
}
