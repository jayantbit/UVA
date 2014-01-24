#include <iostream>
#include <fstream>
using namespace std;

int main () {
  char c1,c2;
  ifstream is,is2;
int f=1;
  

  is.open ("in.txt");        
  is2.open("in2.txt");
  while (is.good() && is2.good())    
  {
    c1=is.get();       
   c2=is2.get();
  if(c1!=c2){f=0;break;}
  }

  if(is.good() ||  is2.good())f=0;
is.close();
is2.close();
if(f)cout<<"YES"; else cout<<"NO";
cout<<endl;
system("pause");
  return 0;
}
