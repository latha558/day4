#include <bits/stdc++.h>
using namespace std;
 
  void bin()
  {
    int i,j,k;
    int s[7][4];
    for(int j=1;j<=7;j++)
    { k=0;
    for (i = 1 <<3; i > 0; i = i / 2)
    {
      if((j & i) != 0)
      {
        s[j-1][k]=1;k++;
       // cout << "1";
      }
      else
      {
          s[j-1][k]=0; k++;
        //cout << "0";
      }
    }
    cout<<"\n";
    }
    
    
    int r[3]={10,20,30};
    
   for(i=0;i<7;i++)
   {
       int s1=0,s2=0,k=0;
   for(j=0;j<4;j++,k++)
   {
    if (s[i][j]==0) {s1+=r[k];}
    else 
    s2+=r[k];
   }
   cout<<
   if(s1>s2){
     if (s1-s2==0) cout<<"yes";
     else
     cout<<"no";
   }
   else
   {
    if(s2-s1==0) cout<<"yes";
    else
    cout<<"no";
   }
   cout<<"\n";}
   
  }
 
// Driver Code
int main(void)
{    
    
    bin();
    
return 0;
}
 
