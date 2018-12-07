#include "pch.h"
#include "Livro.h"



Livro::Livro(int QtdeExemplares, string  Autores, int CodPublicacao, string  Titulo, string  Editora, int Ano)
{
	this->ano = Ano;
	this->qtdeExemplares = QtdeExemplares;
	this->codPublicacao = CodPublicacao;
	this->autores = Autores;
	this->titulo = Titulo;
	this->editora = Editora;
	AdicionaListaLivros(this);
	this->excluido = false;
}

Livro::Livro(string  Autores, int CodPublicacao, string  Titulo, string  Editora, int Ano)
{
	this->ano = Ano;
	this->qtdeExemplares = 0;
	this->codPublicacao = CodPublicacao;
	this->autores = Autores;
	this->titulo = Titulo;
	this->editora = Editora;
	AdicionaListaLivros(this);
	this->excluido = false;
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