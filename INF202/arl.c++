#include <iostream>
using namespace std;
int main()
{
    double data[10];
    int i, jumdata;
    char jawaban;
    jumdata=0;
    for (i=0;i<10;i++){
        cout<<"masukkan sembarang bilangan : ";
        cin>>data[i];
        cout<<"memasukkan bilangan lagi (Y/T)?? ";
        cin>>jawaban;
            if(jawaban == 'T') {jumdata = i+1; break;}
    }
    for (i=0;i<jumdata;i++)
        cout<<data[i]<<"\n";
    return 0;
        
}