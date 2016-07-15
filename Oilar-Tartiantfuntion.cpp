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

vector<int>primestore;
#define M 1000000
bool prime[M+1];

void sieve()
{

    prime[0]=true;
    prime[1]=true;

    for(int i=2;i*i<=M;i++)
    {
        if(!prime[i])
        {
            for(int j=2;i*j<=M;j++)
            {
                prime[i*j]=true;
            }
        }
    }

    for(int i=2;i<=M;i++)
    {
        if(!prime[i])
        {
            primestore.push_back(i);
        }
    }

}

int phi(int n){

    int ret=n;
    for(int i=0;i<primestore.size();i++)
    {
        if(primestore[i]>n)
            return ret;

        if(n%primestore[i]==0)
        {
            ret=ret-(ret/primestore[i]);
        }
    }


}


int main()
{
    sieve();
    int n;
    cout<<"enter your number : ";
    cin>>n;
    cout<<"The number of co-prime is : "<<phi(n)<<endl;


    return 0;
}

