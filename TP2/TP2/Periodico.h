#pragma once
class Periodico
{
public:
	Periodico();
	Periodico(int numEdicao, char*mes);
	~Periodico();
	int numEdicao;
	char *mes;
};

