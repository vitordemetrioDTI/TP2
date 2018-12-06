#include "pch.h"
#include "Livro.h"


Livro::Livro(int QtdeExemplares, char * Autores, int CodPublicacao, char * Titulo, char * Editora, int Ano)
{
	this->ano = Ano;
	this->qtdeExemplares = QtdeExemplares;
	this->codPublicacao = CodPublicacao;
	this->autores = Autores;
	this->titulo = Titulo;
	this->editora = Editora;
}

Livro::Livro(char * Autores, int CodPublicacao, char * Titulo, char * Editora, int Ano)
{
	this->ano = Ano;
	this->qtdeExemplares = 0;
	this->codPublicacao = CodPublicacao;
	this->autores = Autores;
	this->titulo = Titulo;
	this->editora = Editora;
}

Livro::Livro()
{
}


Livro::~Livro()
{
}

void Livro::MudaQuantidade(int Valor)
{
	qtdeExemplares = qtdeExemplares + Valor;
}