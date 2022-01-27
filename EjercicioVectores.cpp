#include <iostream>
#include "string"

using namespace std;

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


}
