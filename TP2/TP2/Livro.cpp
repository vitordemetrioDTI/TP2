#include "pch.h"
#include "Livro.h"


Livro::Livro()
{
}


Livro::~Livro()
{
}

Livro::Livro(int QtdeExemplares, char * Autores, int CodPublicacao, char * titulo, char * editora, int ano)
{
	autores = Autores;
	qtdeExemplares = QtdeExemplares;
	codPublicacao = CodPublicacao;
}
