#include <stdio.h>
int main()
{
    long long int r[4][4],i,j,c[7],u,k,t ;
    while(1)
    {
    for(i=1;i<=3;i++)
    {
    for(j=1;j<=3;j++)
    {
              if(scanf("%lld",&r[i][j])==EOF)return 0;
              }
              }
              c[1]=r[2][1]+r[3][1]+r[1][3]+r[3][3]+r[1][2]+r[2][2];
              c[2]=r[2][1]+r[3][1]+r[1][2]+r[3][2]+r[1][3]+r[2][3];
               c[3]=r[2][3]+r[3][3]+r[1][1]+r[3][1]+r[1][2]+r[2][2];
              c[4]=r[2][3]+r[3][3]+r[1][2]+r[3][2]+r[1][1]+r[2][1];
               c[5]=r[2][2]+r[3][2]+r[1][1]+r[3][1]+r[1][3]+r[2][3];
              c[6]=r[2][2]+r[3][2]+r[1][3]+r[3][3]+r[1][1]+r[2][1];
              
              
              
              for(u=1;u<6;u++)
              {
              for(k=u+1;k<7;k++)
              {
                                if(c[u]>c[k])
                                {
                                             t=c[k];
                                             c[k]=c[u];
                                             c[u]=t;
                                             }
                                             }
                                             }
              i=c[1];       
              c[1]=r[2][1]+r[3][1]+r[1][3]+r[3][3]+r[1][2]+r[2][2];
              c[2]=r[2][1]+r[3][1]+r[1][2]+r[3][2]+r[1][3]+r[2][3];
               c[3]=r[2][3]+r[3][3]+r[1][1]+r[3][1]+r[1][2]+r[2][2];
              c[4]=r[2][3]+r[3][3]+r[1][2]+r[3][2]+r[1][1]+r[2][1];
               c[5]=r[2][2]+r[3][2]+r[1][1]+r[3][1]+r[1][3]+r[2][3];
              c[6]=r[2][2]+r[3][2]+r[1][3]+r[3][3]+r[1][1]+r[2][1];
            
                     for(j=1;j<=6;j++)
                     {
                                      if(c[j]==i)
                                      break;
                                      }
                                      switch(j)
                                      {
                                               case 1:
                                                    printf("BCG");
                                                    break;
                                                     case 2:
                                                    printf("BGC");
                                                    break;
                                                     case 3:
                                                    printf("CBG");
                                                    break;
                                                     case 4:
                                                    printf("CGB");
                                                    break;
                                                     case 5:
                                                    printf("GBC");
                                                    break;
                                                     case 6:
                                                    printf("GCB");
                                                    break;
                                                    
                                      }
                                      
                                                             printf(" %lld\n",i);
            }                                            
              return 0;
              }
 
