#include "Noticias.h"

void Noticias::recebeFonteNoticia(string fonteNoticia)
{
	textoNoticia.setFonte(fonteNoticia);
}

void Noticias::recebeFonteTitulo(string fonteTitulo)
{
	tituloNoticia.setFonte(fonteTitulo);
}

void Noticias::escreveTitulo(string titulo)
{
	tituloNoticia.setString(titulo);

}

void Noticias::escreveNoticia(string noticia)
{
	textoNoticia.setString(noticia);
}

void Noticias::desenhaTitulo(int posicaox, int posicaoy)
{
	tituloNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}
