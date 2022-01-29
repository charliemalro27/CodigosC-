#include <iostream>
#include "string"

using namespace std;


void imprimirarray(int array[],int tamano){
        for(int i=0;i<=tamano;i++){
            cout<<array[i]<<endl;
        }
}



int main(){

	/*int suma[100];
	int vector[100];

	for(int i=0;i<101;i++){
		vector[i]=i;
		cout<<vector[i]<<endl;
	*/

	int edad;
	int mayoredad=18;
	string animal="langosta";
  string contrasena="";
	int nota;
	int numero;
	int listanumeros[100];
	int numerospares[100];

	/*
  while(contrasena!=animal){
	cout<<"Introduce mi animal favorito!"<<endl;
	cin>>contrasena;
  }
	*/
	/*
	do{
	cout<<"Introduce mi animal favorito!"<<endl;
	cin>>contrasena;
  }while(contrasena!=animal);
	*/
	/*
	int edad;
	int mayoredad=18;
	cout<<"Que edad tienes?"<<endl;
    cin>>edad;
	if(edad<=mayoredad){
		cout<<"Eres to pequeeeee";
	}else{
		cout<<"Pues te ves joven para tu edad!";
	}
	*/
	/*
	cout<<"Que nota has sacado? "<<endl;
	cin>>nota;
	if(nota<5){
		cout<<"insuficiente!";}
	if(nota==5){
		cout<<"suficiente";}
	if(nota>5 && nota<7){
		cout<<"bien";}
	if(nota>6 && nota<9){
		cout<<"notable";}
	if(nota>8){
		cout<<"sobresalienteeeee";
	}
	*/
	/*
	cout<<"Escribe un numero";
	cin>>numero;
	if(numero%2==0){
		cout<<"El numero es par ";
	}else{
		cout<<"El numero es impar ";
	}
	*/

	for(int i=0;i<101;i++){
             listanumeros[i]=i;
                 if(listanumeros[i]%2==0){
                     numerospares[i/2]=listanumeros[i];
                 }
         }

     cout<<"Lista de numeros del 0-100 "<<endl;

     imprimirarray(listanumeros,100);
     cout<<" "<<endl;
     cout<<"Lista de numeros pares de listanumeros "<<endl;
     cout<<" "<<endl;
     imprimirarray(numerospares,50);



 	return 0;



}
