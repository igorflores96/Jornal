#pragma once
#include "Jornal.h"

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void executar();
	void finalizar();

private:

	Jornal *jornal;
	
};

