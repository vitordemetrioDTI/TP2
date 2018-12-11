#include "pch.h"
#include "Usuario.h"
#include <iostream>
#include <time.h>


Usuario::Usuario()
{
}


Usuario::Usuario(char*nome, char*cpf, char*endereco,char*fone)
{
    this->nome = nome;
    this->cpf = cpf;
    this->endereco = endereco;
    this->fone = fone;
	this->data.tv_sec;
}

Usuario::~Usuario()
{
}
