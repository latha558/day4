# include<iostream>
//# include<bits/std++.h>
# include<math.h>
using namespace std;

void  power(long long int arr[],int n){
    int p=pow(2,n);
    int a[3];
    for(int i = 0; i < p; i++) 
    { int k=0;
    for(int j = 0; j < n; j++) 
    { 
        
        if(i & (1 << j)) 
        {   
           a[k]= arr[j]; k++;
          }
    } 
    cout<<"\t";
    for(int s=0;s<k;s++)
     if (a[s+1]-a[s] >1) s=k+1;
     else
     cout<<a[s];
    }}

int main()
{ 
    int t;
  cin>>t;
  while(t--)
{  long long int arr[3];
    for(int i=0;i<3;i++)
    { cin>>arr[i]; }
   power(arr,3);
}
    return 0;
}
