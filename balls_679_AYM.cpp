#include<iostream>
#include<cstdlib>
#include<cstring>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#include<cstdio>
typedef  unsigned long long int ull;
using namespace std;
 
int  ans[21][1048577]={{0}};
int t[1048577]={0};
 
int main()
{
     int test,d,ball,total,i,k;
     
     for(d=2;d<=20;d++)
     {
         
           for(i=0;i<1048577;i++)t[i]=0;
        total=(1<<d) -1;
                 ball=1<<(d-1); 
         for(i=1;i<=ball;i++)
          {
                k=1;
                do
                {
                                if(!t[k])
                                {
                                     t[k]=1;
                                                 k=2*k;
                                }
                                else
                                {
                                     t[k]=0;
                                     k=(2*k)+1;
                                }
                if(k>total){
                            ans[d][i]=k/2;
                            break;
                            
                            }
                }while(true);
                //cout<<ans[d][i]<<endl;
               }
      
 
}
    //for(i=1;i<=5;i++)cout<<ans[4][i]<<endl;
     
     
     read(test);
         
         while(test--)
     {
     read(d);
     read(ball);
     write(ans[d][ball]);
     }
     read(test);
    
return 0;
}
