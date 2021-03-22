#pragma once
#include "libUnicornio.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Noticias
{
public:

	void recebeFonteNoticia(string fonteNoticia);
	void recebeFonteTitulo(string fonteTitulo);
	void escreveTitulo(string titulo);
	void escreveNoticia(string noticia);
	void desenhaTitulo(int posicaox, int posicaoy);

private:

	Texto tituloNoticia, textoNoticia;
};

