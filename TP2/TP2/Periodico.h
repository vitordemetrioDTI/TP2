#pragma once
#include "Publicacao.h"
#include "string"

class Periodico: Publicacao
{
public: 
	Periodico();
	Periodico(int numEdicao, string mes, int codPublicacao, string titulo, string editora, int ano);
	~Periodico();
	int numEdicao;
	string mes;
};

