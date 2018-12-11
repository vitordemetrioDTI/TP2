#include "pch.h"
#include "Biblioteca.h"
#include<stdlib.h>
#include "string"
#include "Livro.h"
#include<stdio.h>


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

void Biblioteca::ExluiItemEmprestimo(Emprestimo emprestimo, ItemEmprestimo itemEmprestimo)
{
	for (int i = 0; i++; i < emprestimo.Itens.size)
	{
		if (emprestimo.Itens[i].livro.IdLivro == itemEmprestimo.livro.IdLivro)
		{
			emprestimo.Itens.erase[i];
		}
	}
	cout << "esse Item nao está no emprestimo selecionado" << endl;
}

void Biblioteca::DevolveLivro(Emprestimo emprestimo, Livro livro)
{
	for (int i = 0; i++; i < emprestimo.Itens.size)
	{
		if (emprestimo.Itens[i].livro.IdLivro == livro.IdLivro)
		{
			emprestimo.Itens.erase[i];
			livro.qtdeExemplares++;
		}
		
	}
	cout << "esse Item nao está no emprestimo selecionado" << endl;
}
//Deve existir um método para devolver todos os livros de um empréstimo. Argumento: o empréstimo.

vector <Publicacao> Biblioteca::BuscaPublicacoesTitulo(char*busca)
{
	vector <Publicacao> PublicacoesEncontradas;
	for (int i = 1; i++; i < Publicacoes.size + 1)
	{
		if (Publicacoes[i].titulo.find(busca) != std::string::npos) {
			PublicacoesEncontradas.insert(PublicacoesEncontradas.size + 1, Publicacoes[i]);
		}
	}
}

vector <Publicacao> Biblioteca::BuscaPublicacoesAutor(char*busca) //TODO arrumar esse carai
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


void Biblioteca::EscreveArquivo(char*data)
{
	ofstream outfile;		//criamos objeto da classe ofstream
	outfile.open("arq.txt");

	if (outfile.is_open() && outfile.good())
	{
		outfile << data << endl;
		outfile.close();
	}

}

char*Biblioteca::LeArquivo()
{
	ifstream arquivo;		       
	char*str;
	arquivo.open("arq.txt");		//chamo função membro open
	arquivo >> str;
	arquivo.close();
	return (str);
}


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
	for (int i = 1; i++; i < Emprestimos.size + 1)
	{
		for (int j = 0; j++; j < Emprestimos[i].Itens.size)
		{
			if (Emprestimos[i].Itens[j].livro.titulo == publicacao.titulo)
				return true;
		}
	}
	return false;
}