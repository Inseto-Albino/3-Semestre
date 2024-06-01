#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numero=0, op=0;
	
	priority_queue<int> pares;
	priority_queue<int> impares;
	
	while(op != -1){
		cout << "Nota: todos os numero que voce inserir serao separados em pares e impares e" << endl;
		cout << "depois exibidos. Pares em ordem crescente e impares em ordem decrescente" << endl << endl;
		cout << "[1] Inserir numero" << endl;
		cout << "[-1] Sair" << endl;
		cout << "--> ";
		cin >> op;
		
		switch(op){
			case 1:
				cout << "Inisra um numero inteiro: " << endl;
				cout << "--> ";
				cin >> numero;
				break;
			case -1:
				cout << "Programa encerrado!" << endl;
				break;
			default:
				cout << "Opcao nao reconhecida!" << endl;
				break;
		}
		
		if(numero % 2 == 0){
			pares.push(numero);
		}
		else{
			impares.push(numero);
		}
	}
	
	cout << "Pares (crescente)" << endl << endl;
	while(!pares.empty()){
		cout << pares.top() << endl;
		pares.pop();
	}
	
	cout << "Impares (decrescente)" << endl << endl;
	while(!impares.empty()){
		cout << impares.top() << endl;
		impares.pop();
	}
	
	return 0;
}
