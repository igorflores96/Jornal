#include "Jogo.h"

Jogo::Jogo() {

}

Jogo::~Jogo() {

}

void Jogo::inicializar() {

	uniInicializar(650, 800, false);

	//	O resto da inicializa��o vem aqui!
	jornal = new Jornal();

	jornal->inicializar();
	jornal->setarRecursos();

		
}

void Jogo::finalizar() {

	//	O resto da finaliza��o vem aqui (provavelmente, em ordem inversa a inicializa��o)!
	gRecursos.descarregarSpriteSheet("templateJornal");

	uniFinalizar();
}

void Jogo::executar() {

	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair) {

		uniIniciarFrame();

		jornal->desenharRecursos();
		jornal->escreverTextos();
	

		uniTerminarFrame();
	}
}