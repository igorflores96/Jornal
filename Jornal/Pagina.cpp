#include "Pagina.h"

void Pagina::setaSprite(string backgroundFolha) {

	spriteFolha.setSpriteSheet(backgroundFolha);
}

void Pagina::desenharFolha(float posicaox, float posicaoy) {

	spriteFolha.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::definirFontes(string fonteTitulo, string fonteNoticia, string fonteTituloNoticia) {


	tituloJornal.setFonte(fonteTitulo);
	tituloNoticia.setFonte(fonteTituloNoticia);
	textoNoticia.setFonte(fonteNoticia);
	data.setFonte(fonteTitulo);
	site.setFonte(fonteNoticia);
}

void Pagina::escreverTituloJornal(string tituloDoJornal, float posicaox, float posicaoy) {

	tituloJornal.setString(tituloDoJornal);
	tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	tituloJornal.setCorPalavra("New's", 255, 0, 0);
	tituloJornal.setCor(0, 0, 0);

	tituloJornal.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::escreverTituloNoticia(string tituloDaNoticia, float posicaox, float posicaoy) {

	tituloNoticia.setString(tituloDaNoticia);
	tituloNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	tituloNoticia.setLarguraMaxima(250);
	tituloNoticia.setCor(0, 0, 0);

	tituloNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::escreverNoticia(string noticia, float posicaox, float posicaoy) {

	textoNoticia.setString(noticia);
	textoNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	textoNoticia.setLarguraMaxima(250);
	textoNoticia.setCor(0, 0, 0);
	textoNoticia.setEspacamentoLinhas(1.5);

	textoNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::escreverData(string _data, float posicaox, float posicaoy) {

	data.setString(_data);
	data.setAlinhamento(TEXTO_ALINHADO_A_DIREITA);
	data.setCor(0, 0, 0);
	data.setEscala(0.3, 0.3);

	data.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::escreverSite(string _site, float posicaox, float posicaoy) {

	site.setString(_site);
	site.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	site.setCor(0, 0, 255);
	//site.setEscala(0.75, 0.75);

	site.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::definirImagemNoticia(string _nomeImagem) {

	imagemNoticia.setSpriteSheet(_nomeImagem);

}

void Pagina::desenharImagemNoticia(float posicaox, float posicaoy) {

	imagemNoticia.setEscala(0.3, 0.3);
	imagemNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}
