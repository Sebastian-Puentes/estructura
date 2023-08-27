#include<iostream>
#include<conio.h>
using namespace std;

struct nodo{
	int dato;
	nodo*siguiente;
};


void insertarlista(nodo *&,int);

int main(){
    nodo *lista= NULL;

     int dato;
     
     cout<<"digite un numero : ";
     cin>>dato;
     insertarlista(lista,dato);
    
     cout<<"digite un numero : ";
     cin>>dato;
     insertarlista(lista,dato);
     
     cout<<"digite un numero : ";
     cin>>dato;
     insertarlista(lista,dato);
      
      getch();
      return 0;
}

void insertarlista(nodo *&lista ,int n){
	nodo* nuevonodo= new nodo();
	nuevonodo->dato = n;
	
	nodo* aux1= lista;
	nodo* aux2;
	
	while((aux1 != NULL)&&(aux1 ->dato <n)){
		aux2= aux1;
		aux1= aux1 ->siguiente;
	}
	
	if(lista==aux1){
		lista = nuevonodo;
	}
	else{
		aux2->siguiente = nuevonodo;
	}
	
	nuevonodo->siguiente= aux1;
	
	cout<<"Elemento "<<n<<" insertado a lista correctamente\n";
	
}
    
