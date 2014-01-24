//543

#include<iostream>
#include<cmath>
using namespace std;
int fn(int n) 
{
	if(!(n&1) || !(n%3))return 0;
	
    int i,x=(int)(sqrt(n)+0.5);
    for(i=1; (6*i-1)<=x; i++) 
		if(n%(6*i-1) == 0 || n%(6*i+1)==0) 			return 0;
	return 1;
}

int main()
{
    int n,i,j;
    while(cin>>n && n)
    {j=0;
    for(i=2;2*i<=n;i++)
    if(fn(i) && fn(n-i))j++;
    cout<<j<<endl;
    }
    return 0;
}
