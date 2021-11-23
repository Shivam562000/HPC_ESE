#include<iostream>
#include<omp.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the number a:\n";
	cin>>a;
	cout<<"Enter the number b:\n";
	cin>>b;
    omp_set_num_threads(4);
    int ans;
    int ans2;
   #pragma omp parallel 
	{
        int thread=omp_get_thread_num();
        int m=a;
        int n=b;
        while ( m != 0)  
		{
         long long old_m = m;
         m = n % m;
         n = old_m;
       }
       ans=n;
       ans2=(a/ans)*b;
	}
   cout<<"GCD = "<<ans<<"\n";
   cout<<"LCM = "<<ans2<<"\n";

   return 0;
    	
}
