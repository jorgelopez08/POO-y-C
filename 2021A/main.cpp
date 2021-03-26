#include <iostream>
#define MAX_REGISTROS 10
using namespace std;
int lista[10]={0,1,2,3,43,5,6,7,8,9};

void eliminar(int pos);
int main(int argc, char const *argv[])
{
    for (int i = 0; i < MAX_REGISTROS; i++)
    {
        cout<<lista[i]<<endl;
    }
    cout<<endl;
    eliminar(4);
    for (int i = 0; i < MAX_REGISTROS; i++)
    {
        cout<<lista[i]<<endl;
    }
    
    return 0;
}

void eliminar(int pos){
    int i;
    for (i = pos-1; i < MAX_REGISTROS; i++)
    {
        lista[i] = lista[i+1];
    }
    /* lista[utimo] = 0; */
}
