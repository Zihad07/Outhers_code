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



#define M 10000
bool prime[M+1];
vector<int>primestroe;

void sieve()
{
    prime[0]=true;
    prime[1]=true;

    for(int i= 2;i*i<=M;i++)
    {
        if(!prime[i])
        {
            for(int j=2;i*j<=M;j++)
            {
                prime[i*j]=true;
            }
        }
    }
}
void call()
{
    for(int i=2;i<=M;i++)
    {
        if(prime[i]==false)
            primestroe.push_back(i);
    }
}
void showprime()
{
    for(int i=0;i<primestroe.size();i++)
        cout<<primestroe[i]<<" ";
}


int main()
{
    sieve();  ///prime sive
    call(); /// prime number store in vector.
   //showprime();  ///prime number show.


   int Number;
   cout<<"Enter the number : ";
   cin>>Number;
   int divisors=1;
   ///int len=Number;
   for(int i=0;i<primestroe.size();i++)  /// you can use it ...for(int i=0;i*i<=len;i++).. for decrease Time complexity.
   {
       int count=0;

       if(Number%primestroe[i]==0)
       {
           while(Number%primestroe[i]==0)
           {
               count++;
               Number=Number/primestroe[i];
           }
           divisors*=(count+1);
       }
   }

   cout<<"The divisors is :"<<divisors<<endl;




    return 0;
}

