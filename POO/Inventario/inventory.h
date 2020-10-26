#include <iostream>
#include "product.h"

using namespace std;

class Inventory{
    private:
        Product product[500];
        int x;
        void checkBarcodeForSet(){
            int i,stock;
            string strVar;
            bool next, found;
            next = false;
            do{
                cout<<"Ingrese codigo de barras del producto: ";
                cin>>strVar;
                if (strVar.length() == 13)
                {
                    for (i = 0; i < 500; i++)
                    {
                        if (strVar==product[i].getBarcode())
                        {
                            found = true;
                            cout<<product[i].getName();
                            cout<<product[i].getBarcode();
                            cout<<"Ingrese cantidad de unidades para agregar a stock: ";
                            cin>>stock;
                            product[i].setStock(stock);
                            i = 500;
                        }else{
                            found = false;
                            break;
                        }  
                    }
                }else{
                    cout<<"El codigo de barras debe contener 13 caracteres"<<endl;
                } 
            } while (next);

            if (!found)
                {
                    setProductInfo(strVar);
                }
        }
        int checkBarcode(){
            int i;
            string strVar;
            int intVar;
            bool found,next;
            next = false;
            do{
                cout<<"Ingrese codigo de barras del producto: ";
                cin>>strVar;
                if (strVar.length() == 13)
                {
                    for (i = 0; i < 500; i++)
                    {
                        if (strVar==product[i].getBarcode())
                        {
                            found = true;
                            return i;
                            i=500;
                        }else{
                            found = false;
                        }  
                    }
                    next = true;
                }else{
                    cout<<"El codigo de barras debe contener 13 caracteres"<<endl;
                }      
            } while (!next);
            if (!found)
            {
                cout<<"No se econtro el producto!"<<endl;
            }
            
        }
        void setProductInfo(string code){
            string strVar;
            float floatVar;
            int intVar;
            product[x].setBarcode(code);
            getchar();
            cout<<"Ingrese nombre del producto: "; 
            getline(cin,strVar);
            product[x].setName(strVar);
            cout<<"Ingrese precio del producto: "; 
            cin>>floatVar;
            product[x].setPrize(floatVar);
            cout<<"Ingrese precio del producto al menudeo: "; 
            cin>>floatVar;
            product[x].setRetailPrize(floatVar);
            cout<<"Ingrese peso del producto(Gramos): "; 
            cin>>floatVar;
            product[x].setWeight(floatVar);
            cout<<"Ingrese la cantidad de productos: "; 
            cin>>intVar;
            product[x].setStock(intVar);
            product[x].setDate();
            x++;
        }
    public:
        void setProduct(){
            checkBarcodeForSet();  
        }
        void reduceProductStock(){
            int pos, stock,units;
            bool cont= true;
            pos = checkBarcode();
            stock = product[pos].getStock();
            if (stock >=1)
            {
            cout<<product[pos].getName()<<endl;
            cout<<product[pos].getBarcode()<<endl;
            do
            {
                cout<<"Cuantas unidades desea retirar? ";
                cin>>units;
                if (units>stock)
                {
                    cout<<"No hay suficientes unidades!";
                    cont = false;
                }
            } while (!cont);
            product[pos].setStockReduction(units);
            cout<<"Unidades restantes: "<<product[pos].getStock()<<endl;
            }else{
                cout<<"No hay existencias de este producto!"<<endl;
            }
        }
        void initalizePos(){
            x=0;
        }
        void showProducts(){
            for (int i = 0; i < x; i++)
            {
                cout<<"\t Producto"<<i+1<<endl;
                cout<<"Nombre:"<<product[i].getName()<<endl;
                cout<<"Codigo de barras:"<<product[i].getBarcode()<<endl;;
                cout<<"Precio:"<<product[i].getPrize()<<endl;;
                cout<<"Precio venta:"<<product[i].getRetailPrize()<<endl;;
                cout<<"Peso:"<<product[i].getWeight()<<endl;;
                cout<<"Stock: "<<product[i].getStock()<<endl;;
                cout<<"Fecha de ingreso: "<<product[i].getDate()<<endl<<endl;;
            } 
        }
};