#pragma once
class Emprestimo
{
public:
    int numero;
    time_t dataEmprestimo;
    time_t dataPrevDevolucao;
    Usuario usuario;
    *ItemEmprestimo itens;
    int proximoNumero;

	Emprestimo();
	Emprestimo(int numero,time_t)
	~Emprestimo();
};

