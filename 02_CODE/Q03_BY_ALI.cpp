// NUMBER IS PRIME OR NOT PRIME 
#include<iostream>
using namespace std;
int main()
{
    // BY ALI
    int num,cntr=0;
    cout<<"Please enter the Number:  ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cntr++;
        }
    }
    if(cntr==2)
    cout<<"Prime Number\n";
    else
    cout<<"Not a Prime Number\n";
    return 0;
}