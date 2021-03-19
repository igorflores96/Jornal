#include "Jogo.h"

Jogo::Jogo() {

}

Jogo::~Jogo() {

}

void Jogo::inicializar() {

	uniInicializar(650, 800, false);

	//	O resto da inicialização vem aqui!
	
	jornal.carregarSpritesSheets();
	jornal.setarRecursos();

		
}

void Jogo::finalizar() {

	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	gRecursos.descarregarSpriteSheet("templateJornal");

	uniFinalizar();
}

void Jogo::executar() {

	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair) {

		uniIniciarFrame();

		jornal.escreverTextos();
		jornal.desenharRecursos();
	

		uniTerminarFrame();
	}
}