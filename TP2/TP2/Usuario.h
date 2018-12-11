#pragma once
#include<time.h>
class Usuario
{
public:
    public:
	int IdUsuario; // definido quando foir inserido na lista da classe biblioteca
    char*nome;
    char*cpf;
    char*endereco;
    char*fone;
	int msd;
    timespec data;

	Usuario();
	Usuario(char*nome, char*cpf,char*endereco,char*fone);
	~Usuario();
};

