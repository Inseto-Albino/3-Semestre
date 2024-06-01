// Bibliotecas importadas
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<stack>
#include<queue>
#include<vector>

// Facilitando a sintaxe
using namespace std;

// Função de Mostrar a Pilha
void mostrarPilha(stack<int> numerosInt){
	if(!numerosInt.empty()){
		cout << "(Topo)" << endl;
		while(!numerosInt.empty()){
			cout << numerosInt.top() << endl;
			numerosInt.pop();
		}
		cout << "(Base)" << endl;
		system("pause");
		system("cls");
	}
	else{
		cout << "Pilha vazia!" << endl;
		system("pause");
		system("cls");
	}
}

// Função pilha
void pilha(){
	// Declaração de variáveis
	int opcao = 0, numero = 0;
	int numeroRemovido = 0;
	// Criação da pilha
	stack<int> numerosInt;
	
	// Looping (while)
	while(opcao != -1){
		// Menu da piha (01)
		cout << "Imagine uma pilha de pratos onde voce colocara um em cima do outro." << endl;
		cout << "Aora imagine que eh uma pilha de numeros, voce sera capaz apenas de" << endl;
		cout << "adicionar um numero ao topo da pilha e remover apenas do topo tambem" << endl << endl;
		cout << "Menu da pilha: " << endl << endl;
		cout << "[1] - Adicionar" << endl;
		cout << "[2] - Remover" << endl;
		cout << "[3] - Exibir Topo" << endl;
		cout << "[4] - Mostrar Tamanho" << endl;
		cout << "[5] - Mostrar Pilha" << endl;
		cout << "[-1] - Sair" << endl;
		cout << "--> ";
		cin >> opcao;
		
		// Direcionando cada escolha para sua função
		switch(opcao){
			case 1:
				cout << "Digite um numero inteiro: ";
				cin >> numero;
				numerosInt.push(numero);
				cout << "Numero " << numerosInt.top() << " adicionado!" << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				if(!numerosInt.empty()){
					numeroRemovido = numerosInt.top();
					numerosInt.pop();
					cout << "Numero " << numeroRemovido << " removido!" << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Nao ha numero para ser removido!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 3:
				if(!numerosInt.empty()){
					cout << "Topo da pilha: " << numerosInt.top() << endl << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Pilha vazia!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				cout << "Tamanho da pilha: " << numerosInt.size() << endl << endl;
				system("pause");
				system("cls");
				break;
			case 5:
				mostrarPilha(numerosInt);
				break;
			case -1:
				cout << "Retornado para o menu principal!" << endl << endl;
				system("pause");
				system("cls");
				break;
			default:
				cout << "Erro! Opcao nao encontrada!" << endl << endl;
				system("pause");
				system("cls");
				break;	
		}
	}
}

// Função de Mostrar a Fila
void mostrarFila(queue<float> numerosFloat){
	if(!numerosFloat.empty()){
		cout << "(Frente)" << endl;
		while(!numerosFloat.empty()){
			cout << numerosFloat.front() << endl;
			numerosFloat.pop();
		}
		cout << "(Tras)" << endl;
		system("pause");
		system("cls");
	}
	else{
		cout << "Fila vazia!" << endl;
		system("pause");
		system("cls");
	}
}

// Função fila
void fila(){
	// Declaração de variáveis
	int opcao = 0;
	float numero = 0, numeroRemovido = 0;
	// Criação da fila
	queue<float> numerosFloat;
	
	// Looping (while)
	while(opcao != -1){
		// Menu da fila (02)
		cout << "Imagine aora uma fila de carros no semaforo, o primeiro a chegar sera" << endl;
		cout << "o primeiro a sair quando a luz ficar verde. Neste caso voce sera capaz" << endl;
		cout << "apenas de adicionar numeros ao fim da fila e remove-los do inicio da mesma" << endl << endl;
		cout << "Menu da fila: " << endl << endl;
		cout << "[1] - Adicionar" << endl;
		cout << "[2] - Remover" << endl;
		cout << "[3] - Exibir Frente" << endl;
		cout << "[4] - Exibir Tras" << endl;
		cout << "[5] - Mostrar Tamanho" << endl;
		cout << "[6] - Mostrar Fila" << endl;
		cout << "[-1] - Sair" << endl;
		cout << "--> ";
		cin >> opcao;
	
		// Direcionando cada escolha para sua função
		switch(opcao){
			case 1:
				cout << "Digite qualquer numero: ";
				cin >> numero;
				numerosFloat.push(numero);
				cout << "Numero " << numerosFloat.back() << " adicionado!" << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				if(!numerosFloat.empty()){
					numeroRemovido = numerosFloat.front();
					numerosFloat.pop();
					cout << "Numero " << numeroRemovido << " removido!" << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Nao ha numero para ser removido!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 3:
				if(!numerosFloat.empty()){
					cout << "Primeiro da fila: " << numerosFloat.front() << endl << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Fila vazia!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				if(!numerosFloat.empty()){
					cout << "Ultimo da fila: " << numerosFloat.back() << endl << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Fila vazia!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 5:
				cout << "Tamanho da fila: " << numerosFloat.size() << endl << endl;
				system("pause");
				system("cls");
				break;
			case 6:
				mostrarFila(numerosFloat);
				break;
			case -1:
				cout << "Retornado para o menu principal!" << endl << endl;
				system("pause");
				system("cls");
				break;
			default:
				cout << "Erro! Opcao nao encontrada!" << endl << endl;
				system("pause");
				system("cls");
				break;	
		}
	}
}

// Função de Mostrar o Vector
void mostrarVetor(vector<int> numerosInt){
	if(!numerosInt.empty()){
		cout << "(Inicio)" << endl;
		while(!numerosInt.empty()){
			cout << numerosInt.back() << endl;
			numerosInt.pop_back();
		}
		cout << "(Fim)" << endl;
		system("pause");
		system("cls");
	}
	else{
		cout << "Vector vazio!" << endl;
		system("pause");
		system("cls");
	}
}

// Função vector
void vetor(){
	// Declaração de variáveis
	int opcao = 0, posicao = 0;
	int numero = 0, numeroRemovido = 0;
	// Criação do vector
	vector<int> numerosInt;
	
	// Looping (while)
	while(opcao != -1){
		// Menu do vector (03)
		cout << "O vector eh mais complicado e ao mesmo tempo nao. Nele voce pode adicionar" << endl;
		cout << "o valor que quiser na posicao que desejar, assim como remover tambem." << endl;
		cout << "Apenas nao se esqueca de que a posicao deve existir para funcionar." << endl << endl;
		cout << "Menu do vector: " << endl << endl;
		cout << "[1] - Adicionar ao Inicio" << endl;
		cout << "[2] - Remover do Inicio" << endl;
		cout << "[3] - Adicionar Onde Quiser" << endl;
		cout << "[4] - Remover de Onde Quiser" << endl;
		cout << "[5] - Mostrar Tamanho" << endl;
		cout << "[6] - Mostrar Vector" << endl;
		cout << "[-1] - Sair" << endl;
		cout << "--> ";
		cin >> opcao;
	
		// Direcionando cada escolha para sua função
		switch(opcao){
			case 1:
				cout << "Digite um numero inteiro: ";
				cin >> numero;
				numerosInt.push_back(numero);
				cout << "Numero " << numero << " adicionado!" << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				if(!numerosInt.empty()){
					numeroRemovido = numerosInt.back();
					numerosInt.pop_back();
					cout << "Numero " << numeroRemovido << " removido!" << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Nao ha numero para ser removido!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 3:
				cout << "Escolha a posicao desejada: ";
				cin >> posicao;
				if(posicao <= numerosInt.size()){
					cout << "Digite um numero inteiro: ";
					cin >> numero;
					numerosInt.insert(numerosInt.begin() + posicao, numero);
					cout << "Numero " << numero << " adicionado na posicao " << posicao << "!" << endl;
					system("pause");
					system("cls");
				}
				else{
					cout << "Esta posicao nao existe!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 4:
				cout << "Escolha a posicao desejada: ";
				cin >> posicao;
				if(posicao <= numerosInt.size()){
					numerosInt.erase(numerosInt.begin() + posicao);
					system("pause");
					system("cls");
				}
				else{
					cout << "Esta posicao nao existe!" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 5:
				cout << "Tamanho do vector: " << numerosInt.size() << endl << endl;
				system("pause");
				system("cls");
				break;
			case 6:
				mostrarVetor(numerosInt);
				break;
			case -1:
				cout << "Retornado para o menu principal!" << endl << endl;
				system("pause");
				system("cls");
				break;
			default:
				cout << "Erro! Opcao nao encontrada!" << endl << endl;
				system("pause");
				system("cls");
				break;	
		}
	}
}

// Função struct
int structer(){
	// Declaração de variáveis
	int opcao = 0;
	// Criação do vector
	struct Pessoas{
		int id = 0;
		char nome[50];
		float saldo = 0;
	};
	Pessoas pessoa1; 
	
	while(opcao != -1){
		// Menu da struct (04)
		cout << "A struct eh mais simples, pense como um cadastro. Viu? Facil facil!" << endl << endl;
		cout << "Menu da struct: " << endl << endl;
		cout << "[1] - Cadastras o id" << endl;
		cout << "[2] - Cadastrar o nome" << endl;
		cout << "[3] - Cadastrar o saldo" << endl;
		cout << "[4] - Exibir o Cadastro" << endl;
		cout << "[-1] - Sair" << endl;
		cout << "--> ";
		cin >> opcao;
	
		// Direcionando cada escolha para sua função
		switch(opcao){
			case 1:
				cout << "Digite o numero de id: ";
				cin >> pessoa1.id;
				system("cls");
				break;
			case 2:
				cout << "Digite o nome: ";
				cin >> pessoa1.nome;
				system("cls");
				break;
			case 3:
				cout << "Digite o saldo: ";
				cin >> pessoa1.saldo;
				system("cls");
				break;
			case 4:
				system("cls");
				cout << "Id: " << pessoa1.id << endl;
				cout << "Nome: " << pessoa1.nome << endl;
				cout << "Saldo: " << pessoa1.saldo << endl << endl;
				system("pause");
				system("cls");
				break;
			case -1:
				cout << "Retornado para o menu principal!" << endl << endl;
				system("pause");
				system("cls");
				break;
			default:
				cout << "Erro! Opcao nao encontrada!" << endl << endl;
				system("pause");
				system("cls");
				break;	
		}
	}
}

// Função principal (main)
int main(){
	// Declaração de variáveis
	int opcao = 0;
	
	// Looping (while)
	while(opcao != -1){
		// Menu principal (00)
		cout << "Escolha qual ferramenta usar: " << endl << endl;
		cout << "[1] - Pilha" << endl;
		cout << "[2] - Fila" << endl;
		cout << "[3] - Vector" << endl;
		cout << "[4] - Struct" << endl;
		cout << "[-1] - Sair" << endl;
		cout << "--> ";
		cin >> opcao;
		
		// Direcionando cada escolha para sua função
		switch(opcao){
			case 1:
				system("cls");
				pilha();
				break;
			case 2:
				system("cls");
				fila();
				break;
			case 3:
				system("cls");
				vetor();
				break;
			case 4:
				system("cls");
				structer();
				break;
			case -1:
				cout << "Programa Encerrado!" << endl << endl;
				break;
			default:
				cout << "Erro! Opcao nao encontrada!" << endl << endl;
				system("pause");
				system("cls");
				break;	
		}
	}
	
	// Encerramento do programa
	return 0;
}
