// print 1 to 100 and also print sum

#include<iostream>
using namespace std;
int main()
{
    // BY ALI
    int sum=0;
    for(int i=1;i<=100;i++)
    {
    cout<<i<<endl;
    sum =sum +i;
    }
    cout<<"\nThe sum = "<<sum;
    return 0;
}