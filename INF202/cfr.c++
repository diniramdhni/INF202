#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    char kata1[6];
    char kata2[15];

    cout<<"masukkan suatu kata = ";
    cin>>kata1;
    cout<<kata1;
    getchar();

    strncpy(kata2, kata1, 4);
    cout<<"\n"<<kata2<<endl;
    cout<<strncmp(kata2, kata1, 4) <<endl;
    cout<<"panjang kata adalah = "<<strlen(kata1);

    getchar();
    return 0;
}