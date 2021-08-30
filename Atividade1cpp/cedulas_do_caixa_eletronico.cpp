#include <iostream>

//VARIAVEIS GLOBAIS UTILIZADAS
using namespace std;

float saque;
float resto;
int cedula100;
int cedula50;
int cedula10;
int cedula5;
int cedula1;

//CARDAPIO DE FUNCOES
void menu();
void calculadora();
void contador();

int main(int argc, char** argv) {
	
	menu();
	calculadora();
	contador();
	
	return 0;
}

void menu (){
inicio:
	cout << "------ Bem vindo ao Caixa Eletronico ARGO ------" << endl<< endl;
	cout << "Insira a quantidade que voce deseja sacar: ";
	cin >> saque;
	
	if (saque < 10){
		cout<< endl<< "O valor minimo de saque eh 10 reais!" << endl;
		goto inicio;
	}
	
	if (saque > 600){
		cout<< endl<< "O valor maximo de saque eh 600 reais!" << endl;
		goto inicio;
	}
	
	cout << "O valor desejado para saque eh de " << saque <<" reais!" << endl << endl;
	cout << "Notas retiradas da maquina:" << endl<< endl;
}

void calculadora(){
	resto = saque;
	
	cedula100 = resto/100;
	resto = resto - cedula100 * 100;
	 
	cedula50 = resto/50;
	resto = resto - cedula50 * 50;
	
	cedula10 = resto/10;
	resto = resto - cedula10 * 10;
	
	cedula5 = resto/5;
	resto = resto - cedula5 * 5;
	
	cedula1 = resto/1;
	resto = resto - cedula1 * 1;
}

void contador(){
	if (cedula100 > 0){
		cout << cedula100 << " Notas de 100" << endl;
	}
	if (cedula50 > 0){
		cout << cedula50 << " Notas de 50" << endl;
	}
	if (cedula10 > 0){
		cout << cedula10 << " Notas de 10" << endl;
	}
	if (cedula5 > 0){
		cout << cedula5 << " Notas de 5" << endl;
	}
	if (cedula1 > 0){
		cout << cedula1 << " Notas de 1" << endl;
	}
}

