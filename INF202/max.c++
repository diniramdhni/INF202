#include <iostream>
using namespace std;
int main()
{
    int data[]=
    {6,14,8,5,10,2,12,7,13,1};
    int i, terbesar;

    terbesar=data[0];
    for (i=0;i<10;i++)
        if (data[i]>terbesar)
            terbesar=data[i];
    
    cout<<"terbesar= "<<terbesar<<"\n";
    return 0;
}