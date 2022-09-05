#include"Vendedor.h"


int main() {
	cout << "----------------------- Patron Singleton -----------------------" << endl;
	cout << "--------------------------  Ejemplo 2  -------------------------" << endl;
	cout << "----------------------------------------------------------------" << endl;
	//----------------------------------EMPRESA(VentasEmpresa)---------------------------------------------
	cout << "Creando un VentasEmpresa (Singleton0 vEmpr1..." << endl;
	VentasEmpresa& vEmpr1 = VentasEmpresa::vEmpresa();
	cout << "----------------------------------------------------------------" << endl;
	cout << "La info que tiene la instancia es: " << endl;
	cout << "Cantidad vendida: " << vEmpr1.getCantVendidas() << endl;
	cout <<"Total de ventas: " << vEmpr1.getTotalVentas() << endl;
	cout << "set de 12 a VentasEmpresa (cambiar la cantidad de ventas)... " << endl;
	vEmpr1.setCantVendidas(12);
	cout << "La nueva info que tiene cantidad de ventas: " << vEmpr1.getCantVendidas() << endl;
	cout << endl << endl;
	cout << "set de 12 a VentasEmpresa (cambiar la cantidad de ventas)... " << endl;
	vEmpr1.setCantVendidas(12);
	cout << "La nueva info que tiene cantidad de ventas: " << vEmpr1.getCantVendidas() << endl; //se van sumando la cantidad de cantidad de ventas
	cout << endl << endl; 
	//vEmpr1.setCantVendidas(12);
	vEmpr1.setTotalVentas(8);
	cout << "La nueva info que tiene total de ventas: " << vEmpr1.getTotalVentas() << endl <<endl;
	cout << "************************************************************************" << endl;
	cout << vEmpr1.toString();

	cout << endl << endl;
	//--------------------------------Vendedor---------------------------------------------------
	Vendedor* ven1 = new Vendedor("12123", "Monica", "Torres", 99, 450.00);
	ven1->realizarVenta(2);
	ven1->setUVendidas(20);
	ven1->setTVentas(10);
	cout << "************************************************************************" << endl;
	cout << ven1->toString() <<endl;


	cout << "toString de empresa" << endl;
	cout << vEmpr1.toString();
	system("pause");
	return 0;
}