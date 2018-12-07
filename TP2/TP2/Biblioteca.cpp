#include "pch.h"
#include "Biblioteca.h"
#include<stdlib.h>
#include "string"
#include "Livro.h"


Biblioteca::~Biblioteca()
{
}

Biblioteca::Biblioteca()
{
	this->Emprestimos.data = NULL;
	this->Publicacoes.data = NULL;
	this->Usuarios.data = NULL;
}

void Biblioteca::InsereEmprestimo(Emprestimo emprestimo)
{
	emprestimo.IdEmprestimo = Emprestimos.size() + 1;
	Emprestimos.insert(Emprestimos.size + 1, emprestimo);
}

void Biblioteca::InserePublicacao(Publicacao publicacao)
{
	publicacao.IdPublicacao = Publicacoes.size + 1;
	Publicacoes.insert(Publicacoes.size+1, publicacao);
}

void Biblioteca::InsereUsuario(Usuario usuario)
{
	usuario.IdUsuario = Usuarios.size + 1;
	Usuarios.insert(Usuarios.size+1, usuario);
}

void Biblioteca::ExcluiUsuario(Usuario usuario)
{
	if (!UsuarioTemEmprestimo(usuario))
	{
		Usuarios.erase[usuario.IdUsuario];
	}

	else
		printf("Esse usuario tem emprestimos associados a ele, nao pode ser exluido\n");
}

void Biblioteca::ExcluiPublicacao(Publicacao publicacao)
{
	if (!PublicacaoNaoEstaEmprestada(publicacao))
	{
		Publicacoes.erase[publicacao.IdPublicacao];
	}

	else
		printf("Essa Publicação esta emprestada e nao pode se excluida\n");
}

void Biblioteca::ExcluiEmprestimo(Emprestimo emprestimo)
{
	Emprestimos.erase[emprestimo.IdEmprestimo];
}

/*void Biblioteca::ExluiItemEmprestimo(Emprestimo emprestimo, ItemEmpretimo itemEmprestimo)
{

}
*/


//Deve existir um método para devolver um item (livro) de um empréstimo. Argumento: o empréstimo e o livro a ser devolvido.
//Deve existir um método para devolver todos os livros de um empréstimo. Argumento: o empréstimo.

vector <Publicacao> Biblioteca::BuscaPublicacoesTitulo(string busca)
{
	vector <Publicacao> PublicacoesEncontradas;
	for (int i = 1; i++; i < Publicacoes.size + 1)
	{
		if (Publicacoes[i].titulo.find(busca) != std::string::npos) {
			PublicacoesEncontradas.insert(PublicacoesEncontradas.size + 1, Publicacoes[i]);
		}
	}
}

vector <Publicacao> Biblioteca::BuscaPublicacoesAutor(string busca) //TODO arrumar esse carai
{
	vector <Publicacao> PublicacoesEncontradas;
	for (int i = 1; i++; i < Publicacoes.size + 1)
	{
		if (Livros[i].autor.find(busca) != std::string::npos && !Livros[i].excluido) {
			
			PublicacoesEncontradas.insert(PublicacoesEncontradas.size + 1, Publicacoes[i]);
		}
	}
}


vector <Usuario> Biblioteca::ObterUsuarios()
{
	return Usuarios;
}

vector <Publicacao> Biblioteca::ObterPublicacoes()
{
	return Publicacoes;
}

vector <Emprestimo> Biblioteca::ObterEmprestimos()
{
	return Emprestimos;
}


// Deve existir um método para gravar os dados em arquivo;
// Deve existir um método para ler os dados armazenados em arquivo.






bool Biblioteca::UsuarioTemEmprestimo(Usuario usuario)
{
	for (int i = 1; i++; i < Emprestimos.size + 1)
	{
		if (Emprestimos[i].usuario.IdUsuario == usuario.IdUsuario)
			return true;
	}
	return false;
}

bool Biblioteca::PublicacaoNaoEstaEmprestada(Publicacao publicacao)
{
	//TODO esperar outras classes ficarem prontas
}