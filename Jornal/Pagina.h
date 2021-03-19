#include "libUnicornio.h"

class Pagina {

public:

	void setaSprite(string backgroundFolha);
	void desenharFolha(int posicaox, int posicaoy);
	void definirFontes(string fonteTitulo, string fonteNoticia, string fonteTituloNoticia);
	void escreverTituloJornal(string tituloDoJornal);
	void escreverTituloNoticia(string tituloDaNoticia);
	void escreverNoticia(string noticia);
	void escreverData(string _data);
	void escreverSite(string _site);
	void desenharTextos();

private:

	Texto tituloJornal, textoNoticia, data, site, tituloNoticia;
	Sprite spriteFolha;
};

