#include<iostream>
#include<stack>

using namespace std;

const int tamanho = 5;

int mostrar_vetor(int v[], int tamanho){
	int x=0;
	for(x=0;x<tamanho;x++){
		cout << v[x] << "\n";
	}
	cout << endl;
}

int inverter_vetor(int v[], int tamanho){
	stack<int> pilha;
	int x=0;
	for(x=0;x<tamanho;x++){
		pilha.push(v[x]);
	}
	
	while(!pilha.empty()){
		cout << pilha.top() << endl;
		pilha.pop();
	}
	cout << endl;
}

int main(){
	int v[tamanho] = {1,2,3,4,5};
	inverter_vetor(v, tamanho);
	mostrar_vetor(v, tamanho);
	return 0;
}
