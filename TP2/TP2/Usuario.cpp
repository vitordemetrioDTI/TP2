#include "pch.h"
#include "Usuario.h"
#include <string>
#include <iostream>



Usuario::Usuario()
{
}


Usuario::Usuario(string nome, string cpf,string endereco,string fone)
{
    this.nome = nome;
    this.cpf = cpf;
    this.endereco = endereco;
    this.fone = fone;
    this.data = time_t.now;
}

Usuario::~Usuario()
{
}
