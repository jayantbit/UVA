#include <stdio.h>
#include <string.h>
 
void dft(int );
int visited[100];
int c[30][30],n,i,s;
int main()
{
                      
char m,c1[2],t;    
scanf("%d",&t);getchar();getchar();
while(t--)
{
int j,v=0;    
i=0;
for(i=0;i<30;i++)
{
for(j=0;j<30;j++)
{
c[i][j]=0;                 
}
}
                 
scanf("%c",&m);getchar();
n=m-65+1;
 
                
while(gets(c1) && strlen(c1)!=0)
{                                                   
c[c1[0]-65][c1[1]-65]=1;
c[c1[1]-65][c1[0]-65]=1;
//printf("%s \n",c1);
}
 
for(i=0;i<n;i++)
{
visited[i]=0;                
}
 
 
                
 
 
j=0;
label:
dft(j);
v++;
 
for(i=0;i<n;i++)
{
if(visited[i]==0)
{
j=i;                 
goto label;
}
}
 
printf("%d\n",v);
}
return 0;
 
}
 
 
void dft(int j)
{    
visited[j]=1;
for(i=0;i<n;i++)
{
if(c[j][i]==1)
{
if(visited[i]==0)
{
                 
                 
                 
dft(i);                   
}                
}                           
}
}
