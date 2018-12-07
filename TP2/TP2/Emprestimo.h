#pragma once
class Emprestimo
{
public:
    int IdEmprestimo; //esse numero é definido quando o usuario é inserido na lista, não quando ele é criado
    time_t dataEmprestimo;
    time_t dataPrevDevolucao;
    Usuario usuario;
    vector <ItemEmprestimo> Itens;

	Emprestimo();
	Emprestimo(int numero,time_t)
	~Emprestimo();
};

