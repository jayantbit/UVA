#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  string s;
  unsigned int x;
  
 
 while(cin>>s && s[0]!='-' )
 {
  stringstream s2(s);
  if(s[0]=='0')
  {
   s2>>hex>>x;
   cout<<dec<<x <<endl;
  }
  else
  {
  s2>>dec>>x;
  cout<<"0x"<<hex<<uppercase<<x <<endl;
  }
 }
 return 0;
}
