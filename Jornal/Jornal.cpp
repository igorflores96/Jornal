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

void Jornal::inicializar()
{
	paginas = new Pagina[2];
	carregarSpritesSheets();
}

void Jornal::setarRecursos() {

	//Fontes
	paginas[0].definirFontes("titulo", "textoNoticia", "tituloNoticia");
	paginas[1].definirFontes("titulo", "textoNoticia", "tituloNoticia");
	//Background
	paginas[0].setaSprite("backgroundCapa");
	paginas[0].definirImagemNoticia("usguri");
	paginas[1].setaSprite("backgroundFolhaPadrao");
	//EscreverTextos

}

void Jornal::escreverTextos() {

	paginas[0].escreverTituloJornal("IgorNew's");
	paginas[0].escreverData("17 de março de 2021, Alvorada RS.");
	paginas[0].escreverNoticia("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut ornare vestibulum velit vitae congue. Quisque in egestas tellus. In lacinia enim. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Nulla egestas leo facilisis posuere pellentesque. Ut fringilla aliquam aliquet.");
	paginas[0].escreverTituloNoticia("Lorem Ipsum?");
	paginas[0].escreverSite("www.Lorem Ipsum.com.br");


	paginas[1].escreverTituloNoticia("Lorem Ipsum?");
	paginas[1].escreverNoticia("Maecenas viverra accumsan ante, quis laoreet risus laoreet a. Nunc ut aliquam libero. Sed scelerisque eros non ultrices pretium. Etiam faucibus nisl quis sem condimentum, ac sollicitudin metus imperdiet. Curabitur bibendum nisl in felis condimentum congue.");


}

void Jornal::desenharRecursos() {

	if (gTeclado.pressionou[TECLA_R])
		paginaAtual = segundaPagina;
	else if (gTeclado.pressionou[TECLA_Q])
		paginaAtual = primeiraPagina;

	if (paginaAtual == primeiraPagina) {

		paginas[0].desenharFolha(2, 2);
		paginas[0].desenharImagemNoticia(1.45, 3.2);
		paginas[0].desenharTituloJornal(2, 11);
		paginas[0].desenharData(1.2, 7.8);
		paginas[0].desenharNoticia(5, 2.9);
		paginas[0].desenharTituloNoticia(5.8, 5);
		paginas[0].desenharSite(10.8, 8.4);
	}
	else if (paginaAtual == segundaPagina) {

		paginas[1].desenharFolha(2, 2);
		paginas[1].desenharTituloNoticia(5, 3);
		paginas[1].desenharNoticia(4.5, 2.25);
	}
}
