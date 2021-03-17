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
	//Coluna
	textoColuna.setFonte("textoColuna");
	textoColuna.setString("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf");
	textoColuna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	textoColuna.setLarguraMaxima(100);
	textoColuna.setEscala(0.5, 0.5);
	textoColuna.setCor(0, 0, 0);
	textoColuna.setEspacamentoLinhas(1.5);
	//data
	data.setFonte("titulo");
	data.setString("17 de março de 2021, Alvorada RS.");
	data.setAlinhamento(TEXTO_ALINHADO_A_DIREITA);
	data.setCor(255, 0, 0);
	data.setEscala(0.35, 0.35);
	//Background
	spriteJornal.setSpriteSheet("templateJornal");
	spriteJornal.setEscala(0.5, 0.5);
}

void Jornal::desenharTextos()
{

	spriteJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
	tituloJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 3.5);
	data.desenhar(gJanela.getLargura() / 1.33, gJanela.getAltura() / 4.1);
	textoColuna.desenhar(gJanela.getLargura() / 3.75, gJanela.getAltura() / 1.65);
}
