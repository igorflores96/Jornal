#include "Jornal.h"

void Jornal::carregarSpritesSheets() {

	//sprites
	if (!gRecursos.carregouSpriteSheet("backgroundCapa"))
		gRecursos.carregarSpriteSheet("backgroundCapa", "../assets/capaJornal.png", 1, 1);
	if (!gRecursos.carregouSpriteSheet("backgroundFolhaPadrao"))
		gRecursos.carregarSpriteSheet("backgroundFolhaPadrao", "../assets/folhaJornal.png", 1, 1);
	//Fontes
	if (!gRecursos.carregouFonte("titulo"))
		gRecursos.carregarFonte("titulo", "../assets/capaJornal.ttf");
	if (!gRecursos.carregouFonte("textoColuna"))
		gRecursos.carregarFonte("textoColuna", "../assets/new_browserlink.ttf");
}

void Jornal::setarRecursos() {

	//Fontes
	capa.definirFontes("titulo", "textoColuna", "titulo");
	folha.definirFontes("titulo", "textoColuna", "titulo");
	//Background
	capa.setaSprite("backgroundCapa");
	folha.setaSprite("backgroundFolhaPadrao");
}

void Jornal::escreverTextos()
{
	capa.escreverTituloJornal("IgorNew's", 2, 8);
	capa.escreverData("17 de março de 2021, Alvorada RS.", 1.2, 7.8);
	capa.escreverNoticia("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf", 4, 3.8);
	capa.escreverTituloNoticia("E os guri?", 4, 4);
	capa.escreverSite("www.ehusguri.com.br", 1, 0.5);
}

void Jornal::desenharRecursos() {

	capa.desenharFolha(2, 2);
	//capa.desenharTextos();
}
