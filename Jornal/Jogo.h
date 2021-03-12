#pragma once
#include "libUnicornio.h"

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void executar();
	void finalizar();

private:

	Sprite spriteJornal, player;
	Texto tituloJornal, textoColuna;

	
};

