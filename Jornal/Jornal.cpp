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
	for (int p = 0; p < 2; p++)
		paginas[p].inicializar(3);
}

void Jornal::setarRecursos() {

	//Fontes
	paginas[primeiraPagina].definirFontes("titulo", "textoNoticia", "tituloNoticia");
	paginas[segundaPagina].definirFontes("titulo", "textoNoticia", "tituloNoticia");
	//Background
	paginas[primeiraPagina].setaSprite("backgroundCapa");
	paginas[primeiraPagina].definirImagemNoticia("usguri");
	paginas[segundaPagina].setaSprite("backgroundFolhaPadrao");
	//EscreverTextos

}

void Jornal::escreverTextos() {

	paginas[primeiraPagina].escreverTituloJornal("IgorNew's");
	paginas[primeiraPagina].escreverData("17 de março de 2021, Alvorada RS.");
	paginas[primeiraPagina].escreverNoticia("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut ornare vestibulum velit vitae congue. Quisque in egestas tellus. In lacinia enim. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Nulla egestas leo facilisis posuere pellentesque. Ut fringilla aliquam aliquet.");
	paginas[primeiraPagina].escreverTituloNoticia("Lorem Ipsum?");
	paginas[primeiraPagina].escreverSite("www.Lorem Ipsum.com.br");


	paginas[segundaPagina].escreverTituloNoticia("Lorem Ipsum?");
	paginas[segundaPagina].escreverNoticia("Maecenas viverra accumsan ante, quis laoreet risus laoreet a. Nunc ut aliquam libero. Sed scelerisque eros non ultrices pretium. Etiam faucibus nisl quis sem condimentum, ac sollicitudin metus imperdiet. Curabitur bibendum nisl in felis condimentum congue.");


}

void Jornal::desenharRecursos() {

	if (gTeclado.pressionou[TECLA_R])
		paginaAtual = segundaPagina;
	else if (gTeclado.pressionou[TECLA_Q])
		paginaAtual = primeiraPagina;

	if (paginaAtual == primeiraPagina) {

		paginas[primeiraPagina].desenharFolha(2, 2);
		paginas[primeiraPagina].desenharImagemNoticia(1.45, 3.2);
		paginas[primeiraPagina].desenharTituloJornal(2, 11);
		paginas[primeiraPagina].desenharData(1.2, 7.8);
		paginas[primeiraPagina].desenharNoticia(5, 2.9);
		paginas[primeiraPagina].desenharTituloNoticia(5.8, 5);
		paginas[primeiraPagina].desenharSite(10.8, 8.4);
	}
	else if (paginaAtual == segundaPagina) {

		paginas[segundaPagina].desenharFolha(2, 2);
		paginas[segundaPagina].desenharTituloNoticia(5, 3);
		paginas[segundaPagina].desenharNoticia(4.5, 2.25);
	}
}
