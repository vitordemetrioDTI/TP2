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
	vector<Publicacao> BuscaPublicacoesTitulo(string busca);
	vector<Publicacao> BuscaPublicacoesAutor(string busca);
	vector<Usuario> ObterUsuarios();
	vector<Publicacao> ObterPublicacoes();
	vector<Emprestimo> ObterEmprestimos();
	bool UsuarioTemEmprestimo(Usuario usuario);
	bool PublicacaoNaoEstaEmprestada(Publicacao publicacao);
	~Biblioteca();



};

