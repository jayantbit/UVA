#include<iostream>
using namespace std;

void bin(unsigned long long int n)
{if(n)
{bin(n/2);
cout<<n%2;
}
}
int count(unsigned long long int n){
	int ctr=0;
	while(n){
		n&=n-1;
		ctr++;
    }
   return ctr;
}

int main()
{
   unsigned long long int n;
   while(cin>>n && n)
   {cout<<"The parity of ";
   bin(n);
   cout<<" is "<<count(n)<<" (mod 2)."<<endl;
}
return 0;
} 
 
