#include<iostream>
#include<string>
using namespace std;

int main()
{ string s;
int d,i,j,l;

while(cin>>s && !(s[0]=='0' && s.length()==1))
{ for(i=0,d=0,j=-1,l=s.length();i<l;i++,j*=-1)d+=j*(s[i]-'0');
cout<<s<<" is ";
if(d%11)cout<<"not ";
cout<<"a multiple of 11."<<endl;
}

return 0;
}
