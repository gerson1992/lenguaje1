#include <iostream>

using namespace std;
int main ()
 
{
    cout << "\n\n Calculo del total de una factura con descuento e impuesto :\n";
	cout << "-----------------------------------------------------------\n";
	
	float subtotal;
	int descuento;
	float impuesto;
	float calculoDescuento;
	float calculoImpuesto;
	float total;
	char exento;
	
	cout << "subtotal:  " ;
	cin >> subtotal;
	cout << "Descuento:  ";
	cin >> descuento;
	cout << "Es factura excenta? s/n:  ";
	cin >> exento;
	if (exento=='s') {
		impuesto = 0;
	}
	else {
		if (exento=='n'){
	    	impuesto = 0.15;
		}
	}
	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto =  (subtotal - calculoDescuento) * impuesto;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	cout << "El total a pagar es "<< total;
	
	return 0;
}