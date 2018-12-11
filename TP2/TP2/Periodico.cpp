#include "pch.h"
#include "Periodico.h"


Periodico::Periodico()
{
}

Periodico::Periodico(int NumEdicao, char* Mes, int CodPublicacao, char*Titulo, char*Editora, int Ano)
{
	this->numEdicao = NumEdicao;
	this->mes = Mes;
	this->codPublicacao = CodPublicacao;
	this->titulo = Titulo;
	this->editora = Editora;
	this->ano = Ano;
}




Periodico::~Periodico()
{
}
