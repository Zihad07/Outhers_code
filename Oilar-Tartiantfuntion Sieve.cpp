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

#define M 1000006
int phi[M];
int calculatePhi(){
    for(int i=1;i<M;i++)
    {
        phi[i]=i;    ///here we intialize array index equal to i
    }

    for(int i=2;i<M;i++)
    {
        if(phi[i]==i) /// it works when i is prime
            {
               for(int j=i;j<M;j+=i)
               {
                   phi[j]=phi[j]-(phi[j]/i);     /// formula φ(n)=n∏p|n(1−1/p)
               }

            }
    }

}


int main()
{

    calculatePhi(); /// calling sieve phi.
    int n;
    cout<<"enter your number : ";
    cin>>n;
    cout<<"The numbers of co-prime is : "<<phi[n]<<endl;  ///calling phi function.


    return 0;
}



