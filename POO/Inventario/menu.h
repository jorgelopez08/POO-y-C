#include <iostream>
#include "inventory.h"

using namespace std;

class Menu{
    private:
        Inventory inventory;
    public:
        void start(){
            inventory.initalizePos();
        }
        int runMenu(int option){
            int restart=1;
            switch (option){
            case 1:
                inventory.setProduct();
                break;
            case 2:
                inventory.reduceProductStock();
                break;
            case 3:
                inventory.showProducts();
                break;
            case 4:
                restart = 0;
                break;
            default:
                cout<<"Opcion no valida!\nIntente de nuevo!"<<endl;
                break;
            }
            return restart;
        }

};