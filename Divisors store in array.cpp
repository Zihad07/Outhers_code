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
#define M 100000
vector< int >divisors[1000006];

/// O(nlogn).
void Divisors()                  /// Divisors Sieve
{
    for(int i=1;i<=M;i++)
    {
        for(int j=i;j<=M;j=i+j)
        {
            divisors[j].push_back(i);
        }
    }
}


int main()
{
    Divisors();

    int test;
    cout<<"Enter ur test case : ";
    cin>>test;

    int c=0;
    while(test--)
    {
        int n;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"Case "<<++c<<": \n";
    cout<<"The Number "<<n<<" divisosrs :";
   
   
    int len=divisors[n].size();   /// nth array lenth is the number of divisors of n.
    for(int i=0;i<len;i++)
        cout<<divisors[n][i]<<" ";

    cout<<endl;

     cout<<"The "<<len<<" divisors.\n";
    }




    return 0;
}
