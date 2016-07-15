/******************************************************************
*                                      *                                                                                            *
* zihadnayem8@gmail.com             *     *
*                                      *                                                                                            *
* Dept: CSTE in NSTU,bd
*                                      *                                                                                            *
*                                   *     *                                                                                         *
*                                      *                                                                                             *
*******************************************************************/


#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
int phi(int n){

   int ret=n;
   for(int i=2;i*i<=n;i++)
   {
       if(n%i==0)
       {
           while(n%i==0)
           {
               n/=i;
           }
            ret=ret-(ret/i);   /// formula φ(n)=n∏p|n(1−1/p)
       }


   }

   if(n>1)  /// it works when n is prime.
    ret=ret-(ret/n);

   return ret;

}


int main()
{
    int n;
    cout<<"enter your number : ";
    cin>>n;
    cout<<"The number of co-prime is : "<<phi(n)<<endl;  ///calling phi function.


    return 0;
}


