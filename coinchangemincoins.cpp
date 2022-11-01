#include<bits/stdc++.h>
using namespace std;



int main(){

int a[3]={1,2,5};//bhai dekh element same hongey toh value jyaada yegi kyuki vo usko alg consider karega
int sum=11;

int t[4][12];
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 12; j++)
    {

if(i==0||j==0)
{
if(i==0&&j==0)
{
t[i][j]=0;
}

else if(j==0&&i!=0)
{
t[i][j]=0;
}

else if(i==0&&j!=0)
{
    t[i][j]=INT32_MAX-1;//overflow ho jayega isliye minus kia 
}
}
 else if(a[i-1]<=j)
{
        t[i][j]=min((t[i][j-a[i-1]])+1,t[i-1][j]);
}
     
    else
{
    t[i][j]=t[i-1][j];
}
    
    }
    
}


cout<<t[3][11];

return 0;
}