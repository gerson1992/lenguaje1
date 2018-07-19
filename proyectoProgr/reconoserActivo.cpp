#include <iostream>
#include <string>
#include  "reconoserActivo.h"
using namespace std;


void reconoserActivo() {
	system("cls");
			
    cout << endl;
    cout << endl;
    	

	
	
	system("CLS");
	
	
	int  Pasivo=0,  Patrimonio=0,ntransaciones=0;
    int tActivo=0, tPasivo=0,  tPatrimonio=0;
    int a=0, b=0 , c=0 , d=0, f=0, g=0;
	 int aa=0, bb=0 , cc=0 , dd=0, ff=0, gg=0;
	


float Activo = 0;
	int nreconocimientos;
	
bool reconosermas = true;

	while(reconosermas == true) {
		int opcion;
		
		cout << "Seleccione un No de cuenta para agregar al libro diario" << endl;	
		cout << "---------------------------------------------------------------" << endl;
		            cout << "Cuentas de Activo:" << endl;
		cout << "1 - Efectivo-y-equivalentes-al-efectivo ......." << endl;
		cout << "2 - Bancos....................................." << endl;
		cout << "3 - Mercancías................................." << endl;
		cout << "4 - Clientes..................................." << endl;
		cout << "5 - Documentos por cobrar......................" << endl;
		cout << "6 - Deudores diversos.........................." << endl;
		
		
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
				tActivo = Activo+ a;
				
				cout <<  "Efectivo y equivalentes al efectivo.......\n";
				ntransaciones=aa++;
				nreconocimientos++;
				break;
				case 2:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> b;
			
			
			ntransaciones=bb++;
				tActivo = Activo+ b;
				cout << "Mercancías.................................\n";
				nreconocimientos++;
				break;
				case 3:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> c;
			ntransaciones=cc++;
				tActivo = Activo+ c;
				cout <<  "Mercancías................................\n";
				nreconocimientos++;
				break;
				case 4:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> d;
			ntransaciones=dd++;
				tActivo = Activo+ d;
				cout <<  "Clientes..................................\n";
				nreconocimientos++;
				break;	
				case 5:
				cout << "Ingrese el valor de la transaccion...........";
			cin >> f;
			ntransaciones=ff++;
				tActivo = Activo+ f;
				cout <<  "Documentos por cobrar.....................\n";
				nreconocimientos++;
				break;
				case 6:
				cout << "Ingrese el valor de la transaccion.........\n";
			cin >> g;
			ntransaciones=gg++;
				tActivo = Activo+ g;
				cout << "Deudores diversos..........................\n";
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
	cout << "Total Transacciones del Activo" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
		ntransaciones=aa+ bb + cc + dd+ ff+ gg;
	cout << "Total N# Transaciones " << ntransaciones<< endl;
	tActivo=a+ b + c + d+ f+ g; 
	cout << "Total Activo..: L " << tActivo << endl;	
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

