#include <iostream>
#include <string>

using namespace std;

int i;

int* comprarTarjeta(string nombre, int dia, int &m) {
	//recibe parametros del nombre de la persona que quiere comprar, el dia en que se compra la tarjeta
	//y el tamaño del arreglo que se va a retornar. En la funcion m correspondera al largo del nombre, ya
	//que sera el tamaño del arreglo a retornar. Usando memoria dinamica creamos el arreglo a retornar, donde
	//a travez de un for se agregaran en la posicion i del arreglo el valor de nombre[i]%dia.
	m = nombre.length();  //m es igual a la longitud del nombre
	int *ar = new int[m];   //un arreglo dinamico
	for(int i =0; i<m;i++){
		ar[i] = nombre[i]%dia;
	}
	return ar;
}

int main(){
	string nombre = "Juanito";
	int dia = 2;
	int m;
	int *ar =comprarTarjeta(nombre, dia, m);
	cout << "Arreglo de " <<nombre<< " en: ";
	for(int i=0;i<m; i++) {
		cout <<ar[i] <<" "; // imprime el arreglo resultante
	}
	delete[] ar; //esto libera la memoria asignada al arreglo dinamico
	return 0;
}
