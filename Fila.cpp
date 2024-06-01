#include<iostream>
#include<cstdlib>

using namespace std;

struct No{
	int conteudo;
	No *proximo; // Endereço do próximo da lista
};

void inserir(No* &head, int novoConteudo){
	No *novoNo = new No;
	novoNo->conteudo = novoConteudo;
	novoNo->proximo = head;
	head = novoNo;
}

void exibir(No *head){
	cout << "LISTA: ";
	No *temp = head;
	while(temp != NULL){
		cout << temp->conteudo << " --> ";
		temp = temp -> proximo;
	}
	cout << "NULL" << endl;
}

void remover(No *&head){
	if(head == NULL){
		return;
	}
	
	No *temp = head;
	head = head->proximo;
	delete temp;
}

int main(){
	No *head = NULL;
	inserir(head,35);
	inserir(head,12);
	inserir(head,89);
	exibir(head);
	remover(head);
	exibir(head);
	remover(head);
	exibir(head);
	remover(head);
	exibir(head);
	return 0;
}
