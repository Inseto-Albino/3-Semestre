#include<iostream>
#include<stack>

using namespace std;

void mostrar_vetor(string palavra){
	int x=0;
	for(x=0;x<palavra.length();x++){
		cout << palavra[x] << "\n";
	}
	cout << endl;
}

void inverter_vetor(string palavra){
	stack<char> pilha;
	int x=0;
	for(x=0;x<palavra.length();x++){
		pilha.push(palavra[x]);
	}
	
	while(!pilha.empty()){
		cout << pilha.top() << endl;
		pilha.pop();
	}
	cout << endl;
}

int main(){
	string palavra;
	cout << "Digite uma palavra: ";
	cin >> palavra;
	cout << endl;
	inverter_vetor(palavra);
	mostrar_vetor(palavra);
	return 0;
}
