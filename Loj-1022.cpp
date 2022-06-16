#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
double r,a,b;
int i,t;
cin>>t;
for(i=0;i<t;i++)
{
    cin>>r;
    a=r+r;
    a=a*a;
    r=pi*r*r;
    cout<<"Case "<<i+1<<": "<<fixed<<setprecision(2)<<a-r<<endl;

}
return 0;
}
