#include <iostream>
using namespace std;

int main()
{

   int opcao = 6;
        while (opcao > 5){
            std::cout << "Bem vindo à nossa Biblioteca \n";
            std::cout << "Digite 1 para Cadastrar \n";
            std::cout << "Digite 2 para Exluir \n";
            std::cout << "Digite 3 para Pesquisar \n";
            std::cout << "Digite 4 para Listar \n";
            std::cout << "Digite 5 para Sair Devolver \n";
            std::cout << "Digite 6 para Sair do Programa \n";
            cin>>opcao;
        }
        if (opcao ==1 ){
                std::cout << "Digite 1 para cadastrar um novo Usuário \n";
                std::cout << "Digite 2 para cadastrar um novo Livro \n";
                std::cout << "Digite 3 para cadastrar um novo Periódico \n";
                std::cout << "Digite 4 para cadastrar um novo Empréstimo \n";
                std::cout << "Digite 5 para inserir um novo Item de Emprestimo \n";
                std::cout << "Digite 6 para Sair do Programa \n";
                cin>>opcao;

            if(opcao = 1){
                std::cout << "Digite o nome do Usuario \n";
                std::cout << " \n";
            }
            if(opcao==6){
                return 0;
            }
        }
        if (opcao ==2 ){
            std::cout << "Digite 1 para exluir  Usuário \n";
            std::cout << "Digite 2 para exluir Livro \n";
            std::cout << "Digite 3 para exluir Periódico \n";
            std::cout << "Digite 4 para exluir Empréstimo \n";
            std::cout << "Digite 5 para exluir Item de Emprestimo \n";
            std::cout << "Digite 6 para sair do Programa \n";
            cin>>opcao;
            if(opcao = 1){
                std::cout << "Digite o nome do Usuario \n";
                std::cout << " \n";
            }
            if(opcao==6){
                return 0;
            }
            }
        if (opcao ==3 ){
            std::cout << "Digite 1 para Pesquisar  Publicações \n";
            std::cout << "Digite 2 para Pesquisar Livros por Autor \n";
            std::cout << "Digite 3 para Sair do Programa \n";
            cin>>opcao;
            if(opcao = 1){
                std::cout << "Digite o nome da Publicação \n";
                std::cout << "Digite o nome da Autor \n";
                std::cout << " \n";
            }
            if(opcao==3){
                return 0;
            }
        }
        if (opcao == 4 ){
            std::cout << "Digite 1 para Listar Todas as Publicações \n";
            std::cout << "Digite 2 para Listar Todos os Emprestimos \n";
            std::cout << "Digite 3 para Sair do Programa \n";
            cin>>opcao;
            if(opcao==3){
                return 0;
            }
        }
        if (opcao == 5 ){
            std::cout << "Digite 1 para Devolver todos os livros de um Empréstimo \n";
            std::cout << "Digite 2 para Devolver um livro de um emprestimo \n";
            cin>>opcao;
            if(opcao = 1){
            }
            if(opcao==6){
                return 0;
            }
        }
        
        if(opcao==6){
            return 0;
        }
    return 0;
}

//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
