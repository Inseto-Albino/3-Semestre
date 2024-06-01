#include<list>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	//Criação
	list<int> minhaLista1;
	
	//Adições
	minhaLista1.push_back(10);
	minhaLista1.push_back(7);
	minhaLista1.insert(minhaLista1.end(),123);
	minhaLista1.push_front(-44);
	minhaLista1.push_front(-50);
	
	//Remoções
	minhaLista1.remove(-44);
	minhaLista1.pop_front();
	minhaLista1.pop_back();
	minhaLista1.unique();
	
	//Exibição
	list<int>::iterator it;
	for(it = minhaLista1.begin(); it != minhaLista1.end(); it++){
		cout << *it << endl;
	}
	cout << endl;
	
	cout << "Ultimo numero: " << minhaLista1.back() << endl;
	cout << "Primeiro numero: " << minhaLista1.front() << endl;
	cout << "Tamanho da lista: " << minhaLista1.size() << endl;
	cout << endl;
	
	//minhaLista1.clear();
	minhaLista1.sort();
	minhaLista1.reverse();
	
	list<int>::iterator it1;
	it = find(minhaLista1.begin(), minhaLista1.end(), 1234);
	if(*it == 1234) cout << "Encontrado!!!" << endl;
	else cout << "Nao existe o elemento" << endl;

	//Encerramento
	return 0;
}
