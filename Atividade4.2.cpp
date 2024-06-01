#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<char> palavra;
	string v;
	int x=0;
	
	cout << "Digite uma palavra: ";
	cin >> v;
	cout << endl;
	
	for(x=0;x<v.length();x++){
		palavra.push(v[x]);	
	}
	
	for(x=0;x<v.length();x++){
		if(v[x] == palavra.top()){
			palavra.pop();
		}
		else {
			cout << "Nao eh palindromo!";
			return 0;
		}
	}
	cout << "Eh palindromo";
	return 0;
}
