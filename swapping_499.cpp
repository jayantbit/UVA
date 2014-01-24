#include <stdio.h>
int main()
{
    int a,t;
    scanf("%d", &t);
      
 
       while (t-- && scanf("%d", &a) != EOF)
    { int i,j,d[100],h=0,temp;
    
    
    
                          for(i=0;i<a;i++)
                          {
                                      scanf("%d",&d[i]);    
                          }
                                      for(i=0;i<a-1;i++)
                                      {
                                                      for(j=i+1;j<a;j++)
                                                      {
                                                      if(d[i]>d[j])
                                                      {h=h+1; 
                                                       temp=d[i];
                                                       d[i]=d[j];
                                                       d[j]=temp;
                                                       }
                                                      }
                                                      
                                      }               
                                          
     printf("Optimal train swaping takes %d swaps.\n",h);
     }
     
     
     return 0;
}
