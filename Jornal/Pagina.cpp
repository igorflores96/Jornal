#include "Pagina.h"

void Pagina::setaSprite(string backgroundFolha) {

	spriteFolha.setSpriteSheet(backgroundFolha);
}

void Pagina::desenharFolha(int posicaox, int posicaoy) {

	spriteFolha.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::definirFontes(string fonteTitulo, string fonteNoticia, string fonteTituloNoticia) {

	tituloJornal.setFonte(fonteTitulo);
	tituloNoticia.setFonte(fonteTituloNoticia);
	textoNoticia.setFonte(fonteNoticia);
	data.setFonte(fonteTitulo);
	site.setFonte(fonteNoticia);
}

void Pagina::escreverTituloJornal(string tituloDoJornal) {

	tituloJornal.setString(tituloDoJornal);
	tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	tituloJornal.setCorPalavra("New's", 255, 0, 0);
	tituloJornal.setCor(0, 0, 0);
}

void Pagina::escreverTituloNoticia(string tituloDaNoticia) {

	tituloNoticia.setString(tituloDaNoticia);
	tituloNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	tituloNoticia.setLarguraMaxima(250);
	tituloNoticia.setEscala(1, 1);
	tituloNoticia.setCor(0, 0, 0);
}

void Pagina::escreverNoticia(string noticia) {

	textoNoticia.setString(noticia);
	textoNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	textoNoticia.setLarguraMaxima(250);
	textoNoticia.setEscala(0.5, 0.5);
	textoNoticia.setCor(0, 0, 0);
	textoNoticia.setEspacamentoLinhas(1.5);
}

void Pagina::escreverData(string _data) {

	data.setString(_data);
	data.setAlinhamento(TEXTO_ALINHADO_A_DIREITA);
	data.setCor(255, 0, 0);
	data.setEscala(0.35, 0.35);
}

void Pagina::escreverSite(string _site)
{
	site.setString(_site);
	site.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	site.setCor(0, 0, 255);
	site.setEscala(0.7, 0.7);
}

void Pagina::desenharTextos() {

	tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 3.5);
	data.desenhar(gJanela.getLargura() / 1.33, gJanela.getAltura() / 4.1);
	site.desenhar(gJanela.getLargura() / 4.4, gJanela.getAltura() / 3.05);
	textoNoticia.desenhar(gJanela.getLargura() / 1.48, gJanela.getAltura() / 2.2);
	tituloNoticia.desenhar(gJanela.getLargura() / 1.75, gJanela.getAltura() / 2.73);
}
