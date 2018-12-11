#pragma once
using namespace std;
#include "string"
class Publicacao
{
public:
	Publicacao();
	~Publicacao();
	int IdPublicacao;
	int codPublicacao;
	char*titulo;
	char*editora;
	int ano;
};

