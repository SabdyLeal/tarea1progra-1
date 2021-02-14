#include "Empleado.cpp"
#include <iostream>
using namespace std;
main (){
    string nombres,apellidos,direccion, codpuesto, puesto;
    int telefono,sueldo;
    
    cout<<"________________________________________EMPLEADO_________________________________"<<endl;
    cout<<"Ingrese Codigo de puesto: ";
    cin>>codpuesto;
    cout<<"Ingrese Nombres: ";
    cin>>nombres;
    cout<<"Ingrese Apellidos: ";
    cin>> apellidos;
    cout<<"Ingrese Puesto: ";
    cin>> puesto;
    cout<<"Ingrese Sueldo: ";
    cin>> sueldo;
    cout<<"Ingrese Direccion: ";
    cin>>direccion;
    cout<<"Ingrese Telefono: ";
    cin>>telefono;

    //instanciar objeto empleado
    Empleado obj= Empleado(nombres,apellidos,direccion,telefono,codpuesto,puesto,sueldo);
    obj.muestra();



}
