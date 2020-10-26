#include <iostream>

using namespace std;

void impresionSuma(float a, float b){
    cout << a + b<<endl;
}

int mutliplicacion(float a, float b){
    return a*b;
}

class Persona{
    public:
        Persona(string Name, int dia, int mes, int anio ){
            name = Name;
            diaNacimiento = dia;
            mesNacimiento = mes;
            anioNacimiento = anio;
        }

        void setCode(int code){
            codigo = code;
        }

        void setSalary(float salary){
            salario = salary;
        }

        void getData(){
            cout<<name<<endl;
            cout<<diaNacimiento<<endl;
            cout<<mesNacimiento<<endl;
            cout<<anioNacimiento<<endl;
            cout<<codigo<<endl;
            cout<<salario<<endl;
        }
    private:
        string name;
        int edad,diaNacimiento,mesNacimiento, anioNacimiento, codigo;
        float salario;
};