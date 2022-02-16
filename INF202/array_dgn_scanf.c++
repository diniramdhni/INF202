#include <iostream>
int main()
{
    int i;
    int nilai[5];
    printf("inputan data:\n");
    //pengisian elemen array
    for (i=0;i<5;i++)
        scanf("%d",&nilai[i]);
    //menammpilkan data ke layar
    printf("\noutput data\n");
    for (i=0;i<5;i++)
        printf ("%d\n", nilai[i]);
}