#pragma once
#include <iostream>
#include "Publicacao.h"
#include <vector>

class Livro : Publicacao 
{
public:
	Livro();
	~Livro();
	void MudaQuantidade(int Valor);
	void AdicionaListaLivros(Livro livro);
	int IdLivro;
	int qtdeExemplares;
	bool excluido;
	char*autores;
	Livro(int qtdeExemplares, char*autores, int codPublicacao, char*titulo, char*editora, int ano);
	Livro(char* Autores, int CodPublicacao, char* Titulo, char* Editora, int Ano);
	vector <Livro> Livros;
};

