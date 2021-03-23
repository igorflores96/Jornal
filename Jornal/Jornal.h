#pragma once
#include "Pagina.h"

enum PaginasJornal { primeiraPagina, segundaPagina};

class Jornal {

public:

	void carregarSpritesSheets();
	void setarRecursos();
	void escreverTextos();
	void desenharRecursos();

private:

	PaginasJornal paginaAtual;
	Pagina capa, folha;

};

