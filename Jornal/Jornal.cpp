#include "Jornal.h"

void Jornal::carregarSpritesSheets()
{
	//sprites
	if (!gRecursos.carregouSpriteSheet("templateJornal"))
		gRecursos.carregarSpriteSheet("templateJornal", "../assets/jornalTemplate.png", 1, 1);
	//Fontes
	if (!gRecursos.carregouFonte("titulo"))
		gRecursos.carregarFonte("titulo", "../assets/pixelplay.ttf", 42);
	if (!gRecursos.carregouFonte("textoColuna"))
		gRecursos.carregarFonte("textoColuna", "../assets/new_browserlink.ttf");
}

void Jornal::setarSpritesSheets()
{
	//titulo
	tituloJornal.setFonte("titulo");
	tituloJornal.setString("Igor New's");
	tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	tituloJornal.setCorPalavra("New's", 255, 0, 0);
	tituloJornal.setCor(0, 0, 0);
	//Coluna Titulo
	tituloNoticia.setFonte("textoColuna");
	tituloNoticia.setString("E os guri?");
	tituloNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	tituloNoticia.setLarguraMaxima(250);
	tituloNoticia.setEscala(1, 1);
	tituloNoticia.setCor(0, 0, 0);
	//Coluna texto
	textoNoticia.setFonte("textoColuna");
	textoNoticia.setString("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf");
	textoNoticia.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	textoNoticia.setLarguraMaxima(250);
	textoNoticia.setEscala(0.5, 0.5);
	textoNoticia.setCor(0, 0, 0);
	textoNoticia.setEspacamentoLinhas(1.5);
	//data
	data.setFonte("titulo");
	data.setString("17 de março de 2021, Alvorada RS.");
	data.setAlinhamento(TEXTO_ALINHADO_A_DIREITA);
	data.setCor(255, 0, 0);
	data.setEscala(0.35, 0.35);
	//site
	site.setFonte("textoColuna");
	site.setString("www.igornewsst.com.br");
	site.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	site.setCor(0, 0, 255);
	site.setEscala(0.7, 0.7);
	//Background
	spriteJornal.setSpriteSheet("templateJornal");
	spriteJornal.setEscala(0.5, 0.5);
}

void Jornal::escreverTextos()
{

	spriteJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
	tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 3.5);
	data.desenhar(gJanela.getLargura() / 1.33, gJanela.getAltura() / 4.1);
	site.desenhar(gJanela.getLargura() / 4.4, gJanela.getAltura() / 3.05);
	textoNoticia.desenhar(gJanela.getLargura() / 1.48, gJanela.getAltura() / 2.2);
	tituloNoticia.desenhar(gJanela.getLargura() / 1.75, gJanela.getAltura() / 2.73);
}
