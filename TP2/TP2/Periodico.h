#pragma once
#include "Publicacao.h"
#include "string"

class Periodico: Publicacao
{
public: 
	Periodico();
	Periodico(int numEdicao, char*mes, int codPublicacao, char*titulo, char*editora, int ano);
	~Periodico();
	int numEdicao;
	char*mes;
};

