#include <iostream>
#include <string>
#include  "reconoserPatrimonio.h"
using namespace std;


void reconoserPatrimonio() {
	system("cls");  
 
 
 
    cout << endl;
    cout << endl;
    	

	
	
	system("CLS");
	
	
	int  Pasivo=0,  ntransaciones=0;
    int tActivo=0, tPasivo=0,  tPatrimonio=0;
    int a=0, b=0 , c=0 , d=0, f=0, g=0;
	 int aa=0, bb=0 , cc=0 , dd=0, ff=0, gg=0;
	


float Patrimonio = 0;
	int nreconocimientos;
	
bool reconosermas = true;

	while(reconosermas == true) {
		int opcion;
		
		cout << "Seleccione un No de cuenta para agregar al libro diario" << endl;	
		cout << "---------------------------------------------------------------" << endl;
		            cout << "Cuentas de Activo:" << endl;
		cout << "1 - Capital social.................................." << endl;
		cout << "2 - Reservas Voluntarias............................" << endl;
		cout << "3 - Reservas Obligatorias..........................." << endl;
		cout << "4 - Revalorización del patrimonio..................." << endl;
		cout << "5 - Utilidad o Perdidas del Periodo................." << endl;
		cout << "6 - Utilidades Acumuladas..........................." << endl;
		
		
		cout << "---------------------------------------------------------------" << endl;
		cout << "0 - Salir" << endl;
	cout << "---------------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
	
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu --> ";
		cin >> opcion;
	
	
	
	switch(opcion) {
			case 0: 
				reconosermas = false;				
				break;
			case 1:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> a;
				tPatrimonio = Patrimonio+ a;
				
				cout <<  "Capital social............................\n";
				ntransaciones=aa++;
				nreconocimientos++;
				break;
				case 2:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> b;
			
			
			ntransaciones=bb++;
				tPatrimonio = Patrimonio+ b;
				cout << "Reservas Voluntarias.......................\n";
				nreconocimientos++;
				break;
				case 3:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> c;
			ntransaciones=cc++;
				tPatrimonio = Patrimonio+ c;
				cout <<  "Reservas Obligatorias.....................\n";
				nreconocimientos++;
				break;
				case 4:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> d;
			ntransaciones=dd++;
				tPatrimonio = Patrimonio+ d;
				cout <<  "Revalorización del patrimonio.............\n";
				nreconocimientos++;
				break;	
				case 5:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> f;
			ntransaciones=ff++;
				tPatrimonio = Patrimonio+ f;
				cout <<  "Utilidad o Perdidas del Periodo...........\n";
				nreconocimientos++;
				break;
				case 6:
				cout << "Ingrese el valor de la transaccion.........\n";
			cin >> g;
			ntransaciones=gg++;
				tPatrimonio = Patrimonio+ g;
				cout << "Utilidades Acumuladas......................\n";
				nreconocimientos++;
				break;
							
			default: 
		
			if (opcion >=8)
					nreconocimientos = true;
					cout << "Opcion de menu invalida" << endl;
						system("PAUSE");
						continue;
					
				break;
		}
	
	 system("CLS");
	
	}
	cout << "Total Transacciones del Patrimonio" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
		ntransaciones=aa+ bb + cc + dd+ ff+ gg;
	cout << "Total N# Transaciones " << ntransaciones<< endl;
	tPatrimonio=a+ b + c + d+ f+ g; 
	cout << "Total Patrimonio..: L " << tPatrimonio << endl;	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

