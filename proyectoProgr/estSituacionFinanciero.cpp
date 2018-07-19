#include <iostream>
#include <string>
#include  "estSituacionFinanciero.h"
using namespace std;


void estSituacionFinanciero() {
	system("cls");  
 
 
 
    cout << endl;
    cout << endl;
    	
	system("CLS");
	
	
	int  Pasivo=0,  ntransaciones=0;
    int tActivo=0, tPasivo=0,  tPatrimonio=0;
    int a=0, b=0 , c=0 , d=0, f=0, g=0;
	 int aa=0, bb=0 , cc=0 , dd=0, ff=0, gg=0;
		int    nResultadosapc=0;


float Resultadosapc = 0;
	int nreconocimientos;
	
bool reconosermas = true;

	while(reconosermas == true) {
		int opcion;	
		cout << "---------------------------------------------------------------" << endl;
		            cout << "Estado de Situasion Finansiera:" << endl;
	    
		cout << "Total Activo......: L " << tActivo << endl;
		cout << "Total Pasivo......: L " << tPasivo << endl;	
		cout << "Total Patrimonio..: L " << tPatrimonio << endl;
		
		Resultadosapc=tPasivo + tPatrimonio;
		cout << "formula Contable ACTIVO = PASIVO + CAPITAL. " << endl;
		cout << "ACTIVO..: L "<< tActivo <<" "<<"PASIVO + CAPITAL..: L "<< Resultadosapc  << endl;
		
		cout << "---------------------------------------------------------------" << endl;
		cout << "0 - Salir" << endl;
	cout << "---------------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu --> ";
		cin >> opcion;
	 system("CLS");
	
	}
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

