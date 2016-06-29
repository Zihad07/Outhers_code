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

vector<int>DivisorStore;
int countDivisor(int n)
{

    int divisor=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
           {
                divisor+=1;
                DivisorStore.push_back(i);
           }
        else if(n%i==0)
        {
            DivisorStore.push_back(i);
            DivisorStore.push_back(n/i);
            divisor+=2;
        }

    }
    sort(DivisorStore.begin(),DivisorStore.end());
    return divisor;
}
int main()
{
    cout<<"hi\n";
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<"The numbers of divisors : "<<countDivisor(n)<<endl;
  cout<<"The divisors are : ";
    for(int i=0;i<DivisorStore.size();i++)
    {
        if(i==DivisorStore.size()-1)
            cout<<DivisorStore[i]<<endl;
        else
            cout<<DivisorStore[i]<<" ";
    }

    if(countDivisor(n)==2)
        cout<<"it is prime"<<endl;
    else
        cout<<"Not prime"<<endl;

    return 0;
}
