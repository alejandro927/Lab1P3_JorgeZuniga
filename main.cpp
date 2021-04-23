#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion;
	bool respuesta;
	respuesta=true;
	//este es el ciclo para que siempre se repita a menos que el usuario decida salir
	while(respuesta==true) {
		//las instrucciones
		cout<<"\nLas opciones son:\n";
		cout<<"1)Ejercicio1\n";
		cout<<"2)Ejercicio2\n";
		cout<<"3)Ejercicio3\n";
		cout<<"4)salida salida\n";
		cout<<"Elija su opcion:\n";
		cin>>opcion;
		//Se elije que opciones desea el usuario
		switch(opcion) {
			case 1: {
				cout<<"\nInicio del ejercicio1"<<endl;//tablero de ajedrez
				int n=0;
				cout<<"Ingrese la cantidad de filas y columnas:"<<endl;
				cin>>n;
				
				while(n<=0){
					cout<<"No se aceptanm numeros negativos ni el 0"<<endl;
					cout<<"Ingrese el nuevo numero:"<<endl;
					cin>>n;
				}
				
				cout<<endl;
				for(int i=0; i<n; i++) {
					if((i%2)==0) {
						for(int j=0; j<n; j++) {
							if((j%2)==0) {
								cout<<"0";
							} else {
								cout<<"1";
							}
						}
						cout<<endl;
					} else {
						for(int j=0; j<n; j++) {
							if((j%2)==0) {
								cout<<"1";
							} else {
								cout<<"0";
							}
						}
						cout<<endl;
					}
				}
			}
			break;
			case 2: {
				cout<<"\nInicio del ejercicio2"<<endl;
				cout<<"Sumatoria"<<endl;
				int n=0,sum=0;
				cout<<"Ingrese la cantidad de veces a repetir la sumatoria:";
				cin>>n;
				while(n<=0){
					cout<<"No se aceptanm numeros negativos ni el 0";
					cout<<"Ingrese el nuevo numero:"<<endl;
					cin>>n;
				}
				for(int i = 1; i<=n ; i++){
					sum += ( 2*i ) * ( i-1 );
				}
				cout<< "S(" << n << ")=" << sum;
			}
			break;
			case 3:{
				
				cout<<"\nInicio del ejercicio3"<<endl;
				double n=0;
				int t=0;
				cout<<"Ingrese el numero:"<<endl;
				cin>>n;
				cout<<"Ingrese la cantidad de interacciones:"<<endl;
				cin>>t;
				while(n<=0){
					cout<<"No se acepta ni el 0 ni negativos!!; Ingrese nuevamente:";
					cin>>n;
				}
				while(t<=10){
					cout<<"No se aceptan numeros debajo del 11, ingrese nuevamente:";
					cin>>t;
				}
				
				double inicio=0;
				double mitad=0;
				double final=(double)n;
				double doblemitad=0;
				for(int i = 0; i < t ; i++){
					
					mitad = (inicio + final) / 2;
					doblemitad = mitad * mitad;
					
					if(doblemitad > n){
						final = mitad;
					}else if(doblemitad < n){
						inicio = mitad;
					}
					
					if(doblemitad == n){
						break;
					}
				}
				cout<<"La raiz es:" << mitad;
				
			}
			break;
			case 4:
				//la salida se pone falsa la respuesta para que no vuelva a entrar
				cout<<"Esta es la Salida\n";
				cout<<"Adios!!...";
				respuesta=false;
				break;
		}
	}
	return 0;
}