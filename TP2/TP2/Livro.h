#pragma once
#include <iostream>
#include "Publicacao.h"

class Livro : Publicacao 
{
public:
	Livro();
	~Livro();
	void MudaQuantidade(int Valor);
	int qtdeExemplares;
	char *autores;
	Livro(int qtdeExemplares, char *autores, int codPublicacao, char *titulo, char *editora, int ano);
	Livro(char * Autores, int CodPublicacao, char * Titulo, char * Editora, int Ano);
};

