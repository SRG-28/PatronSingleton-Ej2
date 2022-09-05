#include"VentasEmpresa.h"

//Inicializar la variable static...
VentasEmpresa* VentasEmpresa::ventasEmpresa = NULL;

VentasEmpresa::VentasEmpresa() {   //atributos privados
	this->cantUniVendidas = 0;     
	this->totalVentas = 0; 
	this->nombreEmpresa = "UNA-SiNGLETON"; //NOMBRE DE LA EMPRESA...
	this->cedJur = "234-24356-7899";
}

VentasEmpresa::VentasEmpresa(string nom, string ced, double ventas, float cant) {
	nombreEmpresa = nom;
	cedJur = ced;
	totalVentas = ventas;
	cantUniVendidas = cant;
} 

void VentasEmpresa::destruirVentaEmpresa() {
	if (ventasEmpresa != NULL) //sin ventas de empresas exite
		delete ventasEmpresa;
}

/*VentasEmpresa& VentasEmpresa::operator=(VentasEmpresa&) {

}

VentasEmpresa::VentasEmpresa(const VentasEmpresa&) {

}
*/

VentasEmpresa& VentasEmpresa::vEmpresa() { //getInstance...
	if(ventasEmpresa == NULL){  //si ventas de empresas no exisate
		ventasEmpresa = new VentasEmpresa();
		//atexit(destruirVentasEmpresa)
	}//fin if...
	return *ventasEmpresa;
}

float VentasEmpresa::getCantVendidas() {
	return cantUniVendidas;
}

double VentasEmpresa::getTotalVentas() {
	return totalVentas;
}

void VentasEmpresa::setCantVendidas(float cant) {
	cantUniVendidas += cant;   //acumulador de cantidad de ventas, ventas se van sumando
}

void VentasEmpresa::setTotalVentas(double ventas) {
	this->totalVentas += ventas;
}
	
string VentasEmpresa::toString() const {
	stringstream s;
	s << "Datos de la empresa" << endl
		<< "Nombre de la empresa: " << this->nombreEmpresa << endl
		<< "Cedula juridica: " << this->cedJur << endl
		<< "Cantidad de unidades vendidas: " << this->cantUniVendidas << endl
		<< "Total de ventas: " << this->totalVentas << endl;
	return s.str();
}

VentasEmpresa::~VentasEmpresa() {
	 }