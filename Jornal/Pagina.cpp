#include "Pagina.h"

void Pagina::inicializar(int quantiaNoticias)
{
	quantidadeDeNoticias = quantiaNoticias;
	noticias = new Noticias[quantidadeDeNoticias];
}

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

	for (int n = 0; n < quantidadeDeNoticias; n++) {

		noticias[n].recebeFonteTitulo(fonteTituloNoticia);
		noticias[n].recebeFonteNoticia(fonteNoticia);
	}
	
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
	tituloNoticia.setCor(0, 0, 0);

	
}

void Pagina::escreverNoticia(string noticia) {

	textoNoticia.setString(noticia);
	textoNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	textoNoticia.setLarguraMaxima(250);
	textoNoticia.setCor(0, 0, 0);
	textoNoticia.setEspacamentoLinhas(1.5);

	
}

void Pagina::escreverData(string _data) {

	data.setString(_data);
	data.setAlinhamento(TEXTO_ALINHADO_A_DIREITA);
	data.setCor(0, 0, 0);
	data.setEscala(0.3, 0.3);

	
}

void Pagina::escreverSite(string _site) {

	site.setString(_site);
	site.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	site.setCor(0, 0, 255);
	//site.setEscala(0.75, 0.75);

	
}

void Pagina::desenharTituloJornal(float posicaox, float posicaoy)
{
	tituloJornal.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::desenharTituloNoticia(float posicaox, float posicaoy)
{
	tituloNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::desenharNoticia(float posicaox, float posicaoy)
{
	textoNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::desenharData(float posicaox, float posicaoy)
{
	data.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::desenharSite(float posicaox, float posicaoy)
{
	site.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}

void Pagina::definirImagemNoticia(string _nomeImagem) {

	imagemNoticia.setSpriteSheet(_nomeImagem);
}

void Pagina::desenharImagemNoticia(float posicaox, float posicaoy) {

	imagemNoticia.setEscala(0.3, 0.3);
	imagemNoticia.desenhar(gJanela.getLargura() / posicaox, gJanela.getAltura() / posicaoy);
}


