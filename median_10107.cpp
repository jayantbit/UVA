#include<iostream>
#include<set>
#include<iterator>
typedef  long long int ull;
using namespace std;

multiset <ull> s;
multiset <ull>::iterator it;
//1 2 3 4 5 6
int main()
{ ull n;
int i=0;

while(cin>>n)
{
s.insert(n);
it=s.begin();
advance(it,i/2);

if(i%2==0 || !i)cout<<*(it);
else cout<<(*(it++) + *(it))/2;
cout<<endl;
i++;
}
return 0;
}
