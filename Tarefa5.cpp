#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<char> pilha;
	string expressao = "(1+2)*3";
	int x=0;
	
	for(x=0;x<expressao.length();x++){
		if(expressao[x]=='('){
			pilha.push(expressao[x]);
		}
		if(expressao[x]==')'){
			if(pilha.empty()){
				return false;
			}
			else{
				pilha.pop();
			}
		}
	}
	
	if(pilha.empty()){
		cout << "Valida!" << endl;
	}
	else{
		cout << "Invalida!";
	}
}
