#pragma once                   //objeto unico
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class VentasEmpresa {
private:
	float cantUniVendidas;
	double totalVentas;
	string nombreEmpresa;
	string cedJur;

	VentasEmpresa();     //constructores privados
	VentasEmpresa(string,string, double,float);
	static VentasEmpresa* ventasEmpresa; //Declaracion de la instancia unica (flecha)   //INICIALIZAR EN .cpp
	static void destruirVentaEmpresa(); //para destruir el Singleton(VentasEmpresa)
	VentasEmpresa& operator=(VentasEmpresa&); //operador de asignacion
	VentasEmpresa(const VentasEmpresa&); //constructorCopia

public:
	static VentasEmpresa& vEmpresa(); //Para acceder a la instsancia (getInstance)
	float getCantVendidas();
	double getTotalVentas();
	void setCantVendidas(float);
	void setTotalVentas(double);
	string toString() const;
	virtual ~VentasEmpresa();
};