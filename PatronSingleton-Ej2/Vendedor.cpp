#include"Vendedor.h"


Vendedor::Vendedor() {
	this->cedula = "sin definir";
	this->nombre = "sin definir";
	this->apellido = "sin definir";
	this->unidadesVendidas = 0;
	this->tVentas = 0;
}

Vendedor::Vendedor(string ced, string nom, string ape, float uv, double tv){
	this->cedula = ced;
	this->nombre = nom;
	this->apellido = ape;
	this->unidadesVendidas = uv;
	this->tVentas = tv;
}

Vendedor::~Vendedor() {

}

void Vendedor::setUVendidas(float c) {
	unidadesVendidas += c;   //acumulador de unidades vendidas
}

void Vendedor::setTVentas(double tv) {
	tVentas += tv;   //acumulador de total de ventas
	//VentasEmpresa& VE = VentasEmpresa::vEmpresa();
	//VE.setTotalVentas(tv);
}

float Vendedor::getUVendidas() {
	return this->unidadesVendidas;
}

double Vendedor::getTVentas() {
	return this->tVentas;
}

string Vendedor::toString() const {
	stringstream s;
	s << "Datos del vendedor" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Apellido: " << apellido << endl
		<< "Unidades vendidas: " << unidadesVendidas << endl
		<< "Total de ventas: " << tVentas << endl;
	return s.str();
}

void Vendedor::realizarVenta(float c) {
	VentasEmpresa& VE = VentasEmpresa::vEmpresa();
	double ventas = (c * 300.00); // ventas totales del vendedor = cantidad de ventas * costo por articulo...
	setUVendidas(c);   //del vendedor
	setTVentas(ventas); //del vendedor
	VE.setCantVendidas(c); //del Singleton (VentasEmpresa)
	VE.setTotalVentas(ventas); //del Singleton
}