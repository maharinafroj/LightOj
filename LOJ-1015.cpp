#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a;
cin>>t;
for(j=0;j<t;j++)
{
    cin>>n;
    int ar[n];
   

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
 int sum=0;
  for(i=0;i<n;i++)
  {
    if(ar[i]<0)
    {
    ar[i]=0;
    }
    sum+=ar[i];
  }
    cout<<"Case "<<j+1<<": "<<sum<<endl;

}
return 0;
}
