#pragma once
#include "libUnicornio.h"

class Jornal
{
public:

	void carregarSpritesSheets();
	void setarSpritesSheets();
	void desenharTextos();

private:

	Sprite spriteJornal;
	Texto tituloJornal, textoColuna, data;


};

