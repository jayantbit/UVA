#include <stdio.h>
int main()
{
    long long int b,c,ans,q;
    
     for(int tt=0;tt<6;tt++);
    while(scanf("%lld%lld",&b,&c) != EOF)
    {
                    
                    if(b==0||c==0)
                    break;
                     printf("%lld %lld ",b,c);
                    if(b>c)
                    {
                           q=c;
                           c=b;
                           b=q;
                    }
                           
                    long long int j=0,t;
                    long long int i,p=0,y,m,ans=0;
                   
                     do
                     {j=0;
                    
                                 i=b;
                                 p=p+1;   
                                 while(i!=1)
                                 {         
                                           j++;   
                                           if(i%2==0)    
                                           i=i/2;             
                                           else
                                           i=3*i+1;
                                 }
                                 if(i==1)
                                 j++;
                                 b=b+1;
                     ans=(j>ans)? j:ans;
                     }
                     while(b!=c+1);
                    
                     printf("%lld\n",ans);
    }
    return 0;
}    
