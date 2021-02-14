//main
#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	// instanciar
	
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar Nit:";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	
	cout<<"Ingresar Nombres:";
	cin>>nombres;
	obj.setNombres(nombres);
	obj.mostrar();
	
	cout<<"Ingresar Apellidos:";
	cin>>apellidos;
	obj.setApellidos(apellidos);
	obj.mostrar();
	
	cout<<"Ingresar Direccion:";
	cin>>direccion;
	obj.setDireccion(direccion);
	obj.mostrar();
	
	cout<<"Ingresar Telefono:";
	cin>>telefono;
	obj.setTelefono(telefono);
	obj.mostrar();
	
}
