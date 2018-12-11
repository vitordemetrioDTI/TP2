#pragma once
#include<datetimeapi.h>
#include "Livro.h"
#include <time.h>
#include <windows.globalization.datetimeformatting.h>
class ItemEmprestimo
{
public:
	DATE dataDevolucao;
	Livro livro;

	ItemEmprestimo();
	ItemEmprestimo(Livro livro);
	~ItemEmprestimo();
};

