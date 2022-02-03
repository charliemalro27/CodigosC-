#include <iostream>

using namespace std;

//Imprimir listanumeros
void imprimirlista(int lista[],int tama){
    for(int i=0;i<tama;i++){
        cout<<lista[i]<<endl;
}
}
//Rellenar una lista
void rellenarlista(int lista[],int tama){
    for(int i=0;i<tama;i++){
        lista[i]=i;
}
}
//Rellenar una lista con el cin
void rellenarlista2(int lista[],int tama){
    int clave;
    while(clave!=-1){
        cout<<"Escribe un numero"<<endl;
        cin>>clave;
        for(int i=0;i<tama;i++){
        int numero=clave;
        lista[i]=numero;
        }
        }
        }
//Hacer la media de una lista de numeros
int medialista(int lista[],int tamano){
    for(int i=0;i>tamano;i++){
         int sumatotal=0;
         lista[i]=i;
         sumatotal+=lista[i]+i;
         return sumatotal/tamano;
    }
    }
//Devolver el minimo de una lista
int devolvermin(int lista[],int tamano){
    for(int i=0;i>tamano;i++){
        int minimo=lista[0];
        for(int i=0;i<tamano;i++){
            if (lista[i]<minimo)minimo=lista[i];
        }
        }
        }   
//Devolver el maximo de una lista
int devolvermax(int lista[],int tamano){
    for(int i=0;i>tamano;i++){
        int maximo=lista[0];
        for(int i=0;i<tamano;i++){
            if (lista[i]>maximo)maximo=lista[i];
        }
        }
        }
//Imprimir al reves (De 100 a 0)
void imprimirreves(int lista[]){
    for(int i=100;i>=0;i-=1){
        cout<<lista[i]<<endl;
}
}
int main(){
    
    
    int listacien[100];
    int nuevalista[5]={5,3,2,6,0};
    int lista[5];
    int media;
    int minimo;
    int maximo;
    
    rellenarlista2(lista,5);
    //Imprime el ultimo numero de la posicion lista?
    imprimirlista(lista,5);
    
    cout<<endl;
    cout<<"Numeros del 100 al 0"<<endl;
    rellenarlista(listacien,100);
    imprimirreves(listacien);
    
    //No funcionan ¿Devuelven 0?
    media=medialista(nuevalista,5);
    maximo=devolvermax(nuevalista,5);
    minimo=devolvermin(nuevalista,5);
    
    cout<<"Esta es la media "<<media<<endl;
    cout<<"Este es el maximo "<<maximo<<endl;
    cout<<"Este es el minimo "<<minimo<<endl;
    return 0;
}





