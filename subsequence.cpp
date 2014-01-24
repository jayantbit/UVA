#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string a,b;
int fn(int i,int j)
{ if((i && !j)||(!i && j))return 0;
if(a[i]==b[j])return 1+fn(i-1,j-1);
else return max(fn(i-1,j),fn(i,j-1));
}

int main()
{ while(cin>>a>>b)
cout<<fn(a.length(),b.length())<<endl;
return 0;

}
