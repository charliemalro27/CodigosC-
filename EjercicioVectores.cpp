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

	string animal="langosta";
  string contrasena="";

	/*
  while(contrasena!=animal){
	cout<<"Introduce mi animal favorito!"<<endl;
	cin>>contrasena;
  }
	*/
	
	do{
	cout<<"Introduce mi animal favorito!"<<endl;
	cin>>contrasena;
  }while(contrasena!=animal);

}
