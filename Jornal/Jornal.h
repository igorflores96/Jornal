#pragma once
#include "Pagina.h"

enum PaginasJornal { primeiraPagina, segundaPagina};

class Jornal {

public:

	void inicializar();
	void setarRecursos();
	void escreverTextos();
	void desenharRecursos();
protected:
	void carregarSpritesSheets();
private:
	
	PaginasJornal paginaAtual;
	Pagina* paginas;

};

