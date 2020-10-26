#include <iostream>
#include "util.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Persona persona1("Jorge",8,2,2001);
    int menu, repetir=1;
    float var1, var2;
    do
    {
        cout <<"1, 2 0 3:";
        cin>> menu;
        switch (menu)
        {
        case 1:
            cout<<"inserta valor para v1 y v2:";
            cin>> var1;
            cin>> var2;
            cout<<mutliplicacion(var1, var2)<<endl;
            break;
        case 2:
            cout<<"inserta valor para v1 y v2:";
            cin>> var1;
            cin>> var2;
            impresionSuma(var1, var2);
            break;
        case 3:
            persona1.setCode(214);
            persona1.setSalary(10000);
            persona1.getData();
            break;
        default:
            cout<<"gei"<<endl;
            break;
        }
    } while (repetir);
    
    return 0;
}
