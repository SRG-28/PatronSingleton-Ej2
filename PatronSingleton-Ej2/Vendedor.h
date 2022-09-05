#pragma once              //NO tiene nada que ver con Singleton
#include<sstream>
#include<string>
#include"VentasEmpresa.h"
using namespace std;

class Vendedor {
private: 
	string cedula;
	string nombre;
	string apellido;
	float unidadesVendidas;
	double tVentas; //total de ventas del vendedor , NO de la empresa
public:
	Vendedor();
	Vendedor(string, string, string, float, double);
	virtual ~Vendedor();
	void setUVendidas(float);
	void setTVentas(double);
	float getUVendidas();
	double getTVentas();
	string toString() const;
	void realizarVenta(float); //Acceso al Singleton para actualizar la Empresa
};


