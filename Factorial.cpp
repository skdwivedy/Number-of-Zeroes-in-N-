// problem Code #FCTRL
#include<iostream>
using namespace std;
int main()
{
    unsigned long N,t,cont;//The numbers t follow And Number of numbers
    cout<<"How many Entries : ";
    cin>>t;
    for(long i=0;i<t;i++)
    {
        cin>>N;
        while(N<1 || N> 1000000000)
        {
            //cout<<"Wrong Input (Out of Range!!! /n Enter new number";
            cin>>N;
        }
        while(N!=0)
        {
            N=N/5;
            cont=cont+N;
        }
        cout<<cont<<endl;
        cont=0;
    }
}

