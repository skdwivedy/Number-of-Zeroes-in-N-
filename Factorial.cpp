// problem Code #FCTRL
#include<iostream>
using namespace std;
int main()
{
    unsigned long N,t,cont;//The numbers to follow And Number of numbers and Number of Zeroes
    cout<<"How many Entries : ";//The number of number in which we are going to find the zeroes
    cin>>t;
    for(long i=0;i<t;i++)
    {
        cin>>N;
        while(N!=0)
        {
            N=N/5;
            cont=cont+N;
        }
        cout<<cont<<endl;
        cont=0;
    }
}

