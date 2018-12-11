#pragma once
#include "Emprestimo.h"
#include "Usuario.h"
#include "Publicacao.h"
#include <vector>

class Biblioteca
{
public:
	
	vector <Emprestimo> Emprestimos;
	vector <Usuario> Usuarios;
	vector <Publicacao> Publicacoes;
	
	Biblioteca();
	void InsereEmprestimo(Emprestimo emprestimo);
	void InserePublicacao(Publicacao publicacao);
	void InsereUsuario(Usuario usuario);
	void ExcluiUsuario(Usuario usuario);
	void ExcluiPublicacao(Publicacao publicacao);
	void ExcluiEmprestimo(Emprestimo emprestimo);
	void ExluiItemEmprestimo(Emprestimo emprestimo, ItemEmprestimo itemEmprestimo);
	void DevolveLivro(Emprestimo emprestimo, Livro livro);
	void ExluiItemEmprestimo(Emprestimo emprestimo, ItemEmpretimo itemEmprestimo);
	vector<Publicacao> BuscaPublicacoesTitulo(char*busca);
	vector<Publicacao> BuscaPublicacoesAutor(char*busca);
	vector<Usuario> ObterUsuarios();
	vector<Publicacao> ObterPublicacoes();
	vector<Emprestimo> ObterEmprestimos();
	void EscreveArquivo(char*data);
	char*LeArquivo();
	bool UsuarioTemEmprestimo(Usuario usuario);
	bool PublicacaoNaoEstaEmprestada(Publicacao publicacao);
	~Biblioteca();



};

