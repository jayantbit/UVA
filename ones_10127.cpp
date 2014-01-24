using namespace std;
#include<iostream>

int main()
{
int m,n,c;


while(cin>>m)
{n=1;
c=0;
while(n%m)
{n=((n%m)*(10%m) +1)%m;
c++;
}
cout<<c+1<<endl;
}
return 0;
}
