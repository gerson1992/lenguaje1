#include <iostream>
#include "menu.h"
#include "reconoserActivo.h"
#include "reconoserPasivo.h"
#include "reconoserPatrimonio.h"
#include "estSituacionFinanciero.h"

using namespace std;

void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
		cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Activo" << endl;
		cout << "2 - Pasivo" << endl;
		cout << "3 - Patrimonio" << endl;
		cout << "4 - Est. Situacion Financiero" << endl;
		cout << "5 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				reconoserPasivo();
				break;	
			case 2:
				reconoserActivo();
				break;
			case 3:
				reconoserPatrimonio();
			break;
			case 4:
			estSituacionFinanciero();
			break;
			case 5:
				salir = true;	
			default: 		
				break;
		}
		
		 system("CLS");		
	}
}
