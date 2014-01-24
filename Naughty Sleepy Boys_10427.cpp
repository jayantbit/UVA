//jayant mukherji
#include<stdio.h>

char str[100000001]="a";



int main()
{

int k=0,i=0,l;
char *s=str;
while(k<100000000)
{
                  l=sprintf(s,"%d",++i);
                  k+=l;
                  s+=l;
}
printf("%d\n",i);

while(scanf("%d",&i)!=EOF)
printf("%c\n",str[i-1]); 
//printf("%d",k);
 //freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
getchar();
return 0;
}
