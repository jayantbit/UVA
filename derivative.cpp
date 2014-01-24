#include<sstream>
#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;

typedef  long long int  ull;
vector <ull> arr;



ull fn(ull n)
{
ull k=arr.size(),sum=0,p,j,pre=0;
p=k-1;
for( j=0;p>0;j++,p--)
if(!j)sum=pre=(arr[j]*p);
else {sum=(arr[j]*p) + (pre*n);pre=sum;}
return sum;
}



int main()
{
string str;
ull n,p;
while (cin>>n) 
{getchar();
    
    getline(cin, str);
    stringstream in(str);
    while (in>>p)arr.push_back(p);

cout<<fn(n)<<endl;
arr.clear();
}

return 0;
} 


