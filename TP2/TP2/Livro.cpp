#include "pch.h"
#include "Livro.h"



Livro::Livro(int QtdeExemplares, char* Autores, int CodPublicacao, char* Titulo, char* Editora, int Ano)
{
	this->ano = Ano;
	this->qtdeExemplares = QtdeExemplares;
	this->codPublicacao = CodPublicacao;
	this->autores = Autores;
	this->titulo = Titulo;
	this->editora = Editora;
	this->excluido = false;
}

Livro::Livro(char* Autores, int CodPublicacao, char* Titulo, char* Editora, int Ano)
{
	this->ano = Ano;
	this->qtdeExemplares = 0;
	this->codPublicacao = CodPublicacao;
	this->autores = Autores;
	this->titulo = Titulo;
	this->editora = Editora;
	this->excluido = false;
}


Livro::Livro()
{
}

Livro::~Livro()
{
	this->excluido = true;
}

void Livro::MudaQuantidade(int Valor)
{
	qtdeExemplares = qtdeExemplares + Valor;
}

void Livro::AdicionaListaLivros(Livro livro)
{
	 Livros.push_back(livro);
	livro.IdLivro++;
}