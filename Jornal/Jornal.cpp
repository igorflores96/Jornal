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

	paginaAtual = primeiraPagina;
}

void Jornal::setarRecursos() {

	//Fontes
	capa.definirFontes("titulo", "textoNoticia", "tituloNoticia");
	folha.definirFontes("titulo", "textoNoticia", "tituloNoticia");
	//Background
	capa.setaSprite("backgroundCapa");
	capa.definirImagemNoticia("usguri");
	folha.setaSprite("backgroundFolhaPadrao");
	//EscreverTextos

}

void Jornal::escreverTextos() {

	capa.escreverTituloJornal("IgorNew's");
	capa.escreverData("17 de março de 2021, Alvorada RS.");
	capa.escreverNoticia("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf");
	capa.escreverTituloNoticia("E os guri?");
	capa.escreverSite("www.ehusguri.com.br");


	folha.escreverTituloNoticia("Mas e as guria?");
	folha.escreverNoticia("obviamente as gurias também são um terror, não tem essa né magrão todo mundo dale e não tem jeito");
	folha.escreverTituloNoticia("ué como assim");

}

void Jornal::desenharRecursos() {

	if (gTeclado.pressionou[TECLA_R])
		paginaAtual = segundaPagina;
	else if (gTeclado.pressionou[TECLA_Q])
		paginaAtual = primeiraPagina;

	if (paginaAtual == primeiraPagina) {

		capa.desenharFolha(2, 2);
		capa.desenharImagemNoticia(1.45, 3.2);
		capa.desenharTituloJornal(2, 11);
		capa.desenharData(1.2, 7.8);
		capa.desenharNoticia(5, 2.9);
		capa.desenharTituloNoticia(7, 5);
		capa.desenharSite(10.8, 8.4);
	}
	else if (paginaAtual == segundaPagina) {

		folha.desenharFolha(2, 2);
		folha.desenharTituloNoticia(3, 3);
		folha.desenharNoticia(2, 2);
	}
}
