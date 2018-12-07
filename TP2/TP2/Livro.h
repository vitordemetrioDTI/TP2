#pragma once
#include <iostream>
#include "Publicacao.h"
#include <vector>

class Livro : Publicacao 
{
public:
	~Livro();
	void MudaQuantidade(int Valor);
	void AdicionaListaLivros(Livro * livro);
	void AdicionaListaLivros(Livro livro);
	int IdLivro;
	int qtdeExemplares;
	bool excluido;
	string autores;
	Livro(int qtdeExemplares, string autores, int codPublicacao, string titulo, string editora, int ano);
	Livro(string  Autores, int CodPublicacao, string  Titulo, string  Editora, int Ano);
	vector <Livro> Livros;
};

