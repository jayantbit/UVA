#include<iostream>
#include<string>
using namespace std;
#define max 200



class num
{int *a;
public:
int l;
void set(string n)
{int i,x=n.length()-1;
 

a=new int[max];
for(i=0;i<max;i++)a[i]=0;
i=0;
while(x>=0){a[i++]=n[x]-48;x--;}
l=i;
}

num(string n)
{set(n);
}

static num add(num temp,num ob)
{
       
int i,s=0;


for(i=0;i<ob.l;i++)
{temp.a[i]+=ob.a[i]+s;
s=temp.a[i]/10;
temp.a[i]%=10;
}

while(s)
{temp.a[i]+=s;
s=temp.a[i]/10;
temp.a[i]%=10;
i++;
}


temp.l=i;
return temp;
}

void show()
{ int i;
for(i=l-1;i>=0;i--)cout<<a[i];
cout<<endl;
}
};







int main()
{
  string a,b;
  cin>>a;
  num x(a),y(a);  
   while(cin>>b && b[0]-48)
   {y.set(b);
   if(x.l<=y.l)x=num::add(x,y); else x=num::add(y,x);
   }
   x.show();
    
    return 0;
}
    
    
