#include "libUnicornio.h"

class Pagina {

public:

	void setaSprite(string backgroundFolha);
	void desenharFolha(float posicaox, float posicaoy);
	void definirFontes(string fonteTitulo, string fonteNoticia, string fonteTituloNoticia);
	void escreverTituloJornal(string tituloDoJornal, float posicaox, float posicaoy);
	void escreverTituloNoticia(string tituloDaNoticia, float posicaox, float posicaoy);
	void escreverNoticia(string noticia, float posicaox, float posicaoy);
	void escreverData(string _data, float posicaox, float posicaoy);
	void escreverSite(string _site, float posicaox, float posicaoy);


private:

	Texto tituloJornal, textoNoticia, data, site, tituloNoticia;
	Sprite spriteFolha;
};

