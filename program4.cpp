#include <iostream>
using namespace std;
long long int factorial (long long int n)
{
     long long int M = 1000000007;
 
    unsigned long long int f = 1;
    for (int i = 1; i <= n; i++)
        f = (f*i) % M;  
           
     return f;
}	

int main()
{
int q;
cin>>q;
 long long int n;
 while(q--)
 { cin>>n;
 	cout<< factorial(n);
 }
return 0;
}

