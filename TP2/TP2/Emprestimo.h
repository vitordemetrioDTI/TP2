#pragma once
class Emprestimo
{
public:
    int IdEmprestimo; //esse numero � definido quando o usuario � inserido na lista, n�o quando ele � criado
    time_t dataEmprestimo;
    time_t dataPrevDevolucao;
    Usuario usuario;
    vector <ItemEmprestimo> Itens;

	Emprestimo();
	Emprestimo(int numero,time_t)
	~Emprestimo();
};

