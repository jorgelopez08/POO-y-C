#include <iostream>
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Menu menu;
    int opc, restart;
    menu.start();
    do{
        cout<<"\t\tInventario"<<endl;
        cout<<"1. Dar de alta producto \n2. Retirar stock\n3. Mostrar productos \n4. Salir \nSeleccione una opcion:";
        cin>>opc;
        cout<<endl;
        restart = menu.runMenu(opc);
    } while (restart);
    
    return 0;
}
