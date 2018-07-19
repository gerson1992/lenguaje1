#include <iostream>
#include <string>
#include  "reconoserPasivo.h"
using namespace std;


void reconoserPasivo() {
	system("cls");  


    cout << endl;
    cout << endl;
    	


	
	
	system("CLS");
	
	
	int    Patrimonio=0,ntransaciones=0;
    int tActivo=0, tPasivo=0,  tPatrimonio=0;
    int a=0, b=0 , c=0 , d=0, f=0, g=0;
	 int aa=0, bb=0 , cc=0 , dd=0, ff=0, gg=0;
	


float Pasivo = 0;
	int nreconocimientos;
	
bool reconosermas = true;

	while(reconosermas == true) {
		int opcion;
		
		cout << "Seleccione un No de cuenta para agregar al libro diario" << endl;	
		cout << "---------------------------------------------------------------" << endl;
		            cout << "Cuentas de Activo:" << endl;
		cout << "1 - Proveedores................................" << endl;
		cout << "2 - Documentos por pagar......................." << endl;
		cout << "3 - Acreedores diversos........................" << endl;
		cout << "4 - Hipotecas por pagar........................" << endl;
		cout << "5 - Intereses cobrados por anticipado.........." << endl;
		cout << "6 - Rentas cobradas por anticipado............." << endl;
		
		
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
				cout << "Ingrese el valor de la transaccion.....";
			cin >> a;
				tPasivo = Pasivo+ a;
				
				cout << "Proveedores.............................\n";
				ntransaciones=aa++;
				nreconocimientos++;
				break;
				case 2:
				cout << "Ingrese el valor de la transaccion.....";
			cin >> b;
			ntransaciones=bb++;
				tPasivo = Pasivo+ b;
				cout << "Documentos por pagar....................\n";
				nreconocimientos++;
				break;
				case 3:
				cout << "Ingrese el valor de la transaccion.....";
			cin >> c;
			ntransaciones=cc++;
				tPasivo = Pasivo+ c;
				cout <<  "Acreedores diversos....................\n";
				nreconocimientos++;
				break;
				case 4:
				cout << "Ingrese el valor de la transaccion.....";
			cin >> d;
			ntransaciones=dd++;
				tPasivo = Pasivo+ d;
				cout <<  "Hipotecas por pagar....................\n";
				nreconocimientos++;
				break;	
				case 5:
				cout << "Ingrese el valor de la transaccion.....";
			cin >> f;
			ntransaciones=ff++;
				tPasivo = Pasivo+ f;
				cout <<  "Intereses cobrados por anticipado......\n";
				nreconocimientos++;
				break;
				case 6:
				cout << "Ingrese el valor de la transaccion......\n";
			cin >> g;
			ntransaciones=gg++;
				tPasivo = Pasivo+ g;
				cout << "Rentas cobradas por anticipado..........\n";
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
	cout << "Total Transacciones del Pasivo" << endl;
	cout << "-------------------------" << endl;
	cout << "-------------------------" << endl;
		ntransaciones=aa+ bb + cc + dd+ ff+ gg;
	cout << "Total N# Transaciones " << ntransaciones<< endl;
	tPasivo=a+ b + c + d+ f+ g; 
	cout << "Total Pasivo..: L " << tPasivo << endl;	
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

