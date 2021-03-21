#include "Jornal.h"

void Jornal::carregarSpritesSheets() {

	//sprites
	if (!gRecursos.carregouSpriteSheet("backgroundCapa"))
		gRecursos.carregarSpriteSheet("backgroundCapa", "../assets/capaJornal.png", 1, 1);
	if (!gRecursos.carregouSpriteSheet("backgroundFolhaPadrao"))
		gRecursos.carregarSpriteSheet("backgroundFolhaPadrao", "../assets/folhaJornal.png", 1, 1);
	if (!gRecursos.carregouSpriteSheet("usguri"))
		gRecursos.carregarSpriteSheet("usguri", "../assets/usguri.png", 1, 1);
	//Fontes
	if (!gRecursos.carregouFonte("titulo"))
		gRecursos.carregarFonte("titulo", "../assets/capaJornal.ttf", 42);
	if (!gRecursos.carregouFonte("tituloNoticia"))
		gRecursos.carregarFonte("tituloNoticia", "../assets/new_browserlink.ttf", 36);
	if (!gRecursos.carregouFonte("textoNoticia"))
		gRecursos.carregarFonte("textoNoticia", "../assets/pixelplay.ttf", 12);
}

void Jornal::setarRecursos() {

	//Fontes
	capa.definirFontes("titulo", "textoNoticia", "tituloNoticia");
	folha.definirFontes("titulo", "textoNoticia", "tituloNoticia");
	//Background
	capa.setaSprite("backgroundCapa");
	capa.definirImagemNoticia("usguri");
	folha.setaSprite("backgroundFolhaPadrao");
}

void Jornal::escreverTextos()
{
	capa.escreverTituloJornal("IgorNew's", 2, 11);
	capa.escreverData("17 de março de 2021, Alvorada RS.", 1.2, 7.8);
	capa.escreverNoticia("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf", 5, 2.9);
	capa.escreverTituloNoticia("E os guri?", 7, 5);
	capa.escreverSite("www.ehusguri.com.br", 10.8, 8.4);
}

void Jornal::desenharRecursos() {

	capa.desenharFolha(2, 2);
	capa.desenharImagemNoticia(1.45, 3.2);
	//capa.desenharTextos();
}
