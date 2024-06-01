#include<list>
#include<iostream>

using namespace std;

int main(){
	list<double> lista;
	
	lista.push_back(10.5);
	lista.push_back(5.5);
	lista.push_back(2.5);
	
	while(!lista.empty()){
		cout << (2*lista.back()) << endl;
		lista.pop_back();
	}
}
