#include <stdio.h>
int main()
{
   int z,w;
   scanf("%d",&w);getchar();
  
  for(z=0;z<w;z++)
  {
    int v=0,h=0,i=0,j=0,d[1000]={0};
    char c[1000]={0};
    for(i=0;i<4;i++)
    {
      for(j=(i*4);j<((i+1)*4);j++)
      {              
    scanf("%c",&c[j]);

      }
      getchar();
    }
    
     for(i=0;i<16;i++)
     {
     d[i]=(c[i]-48);  
     
       
     }
         
         for(i=0;i<16;i++)
         {
    if(i%2==0)
    {
              
    if(((d[i]*2)%10)==(d[i]*2))
    {
   
                  h=h+(d[i]*2);
                  }
                  else
                  {
   
     
                  h=(h+((d[i]*2)%10)+1);
                  }
    }
  }

  for(i=0;i<16;i++)
  {
  if((i%2)!=0)
  {
  v=v+d[i];

  }
  }
  
  v=v+h;
  if((v%10)==0)
    printf("Valid\n");
  else 
  printf("Invalid\n");
}
  getchar();
  return 0;


  }
