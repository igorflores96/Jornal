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
	capa.escreverData("17 de março de 2021, Alvorada RS.");
	capa.escreverNoticia("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf");
	capa.escreverTituloNoticia("E os guri?");
	capa.escreverTituloNoticia("E as guria?");
	capa.escreverSite("www.ehusguri.com.br");
	capa.escreverTituloJornal("IgorNew's");
}

void Jornal::desenharRecursos() {

	capa.desenharFolha(2, 2);
	capa.desenharTextos();
}
