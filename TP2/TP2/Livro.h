#pragma once
#include <iostream>

class Livro : Publicacao 
{
public:
	Livro();
	~Livro();
	int qtdeExemplares;
	char *autores;
	Livro(int qtdeExemplares, char *autores, int codPublicacao, char *titulo, char *editora, int ano);
};

