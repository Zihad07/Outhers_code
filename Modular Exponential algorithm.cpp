
/******************************************************************
* * *
* zihadnayem8@gmail.com * *
* * *
* Dept: CSTE in NSTU,bd
* * *
* * * *
* * *
*******************************************************************/

/*Determine p^q%m
we know
 (a*b)%m=(a%m * b%m)%m
 example:
  suppose a=3,b=5,m=4;
  now (a*b)%m=(3*5)%4 = 15%4=3;

   then (a%m *b%m)%m = (3%4 * 5%4)%4=(3*1)%4=3%4=1
  so LS=RS (proved)
  so now
p^q%m={ p^(q/2)%m * p^(q/2)%m}%m     if n is even

     ={ p%m * p^(q-1)%m}%m           if  n is odd
     =  1                            if n=0

*/
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


#define ll long long


ll mod(ll p,ll q,ll m)
{
   if(q==0)
   return 1;
   else if(q%2==0)
   {
      ll y=mod(p,q/2,m);
      return (y*y)%m;
   }
   else
   return ((p%m)*mod(p,q-1,m))%m;
}
 int main()
 {
  ll p,q,m;

  while(scanf("%lld %lld %lld",&p,&q,&m)!=EOF)
  {
     cout<<mod(p,q,m)<<endl;
  }

 return 0;

 }
