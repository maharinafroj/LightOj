#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x1,x2,y1,y2,x,y,i,j,m,t;
   cin>>t;

   for(i=0;i<t;i++)
   {
        cout<<"Case " <<i+1<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;

    cin>>m;
       for(j=0;j<m;j++)
       {
           cin>>x>>y;

       if(x==0&&y==0)
       {
           cout<<"No"<<endl;
       }
       else if((x1<x)&&(x<x2)&&(y1<y)&&(y<y2))
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }

       }

   }
   return 0;
}
