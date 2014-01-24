#include<iostream>
#include<vector>
using namespace std;

vector <int> X;
 
int main()
{
     int Y,i,j,N;
  
  while(cin>>N)
  { for(i=0;i<N;i++)
      {
                 cin>>j;
                 X.push_back(j);
      }             
      cin>>Y;              
   
    int DP[10002]={0};
    DP[0] = 1;
      
      for(i =1; i <= Y; ++i)
      for(j =0; j < N; ++j)
      if( i - X[j] >= 0) DP[i]=(DP[i]+DP[i-X[j]])%1000000007;
      
      cout << DP[Y] << "\n";
      X.clear();
   }
      
      return 0;
 }
