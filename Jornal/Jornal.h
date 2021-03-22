#pragma once
#include "Pagina.h"



class Jornal {

public:

	void carregarSpritesSheets();
	void setarRecursos();
	void escreverTextos();
	void desenharRecursos();

private:

	Pagina capa, folha;

};

