#pragma once
#include "Pagina.h"

class Jornal
{
public:

	void carregarSpritesSheets();
	void setarSpritesSheets();
	void escreverTextos();

private:

	Sprite spriteJornal;
	Texto tituloJornal, textoNoticia, data, site, tituloNoticia;


};

