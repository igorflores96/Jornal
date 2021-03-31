#include "Noticias.h"



class Pagina {

	

public:

	void inicializar(int quantiaNoticias);
	void setaSprite(string backgroundFolha);
	void desenharFolha(float posicaox, float posicaoy);
	void definirFontes(string fonteTitulo, string fonteNoticia, string fonteTituloNoticia);
	void escreverTituloJornal(string tituloDoJornal);
	void escreverTituloNoticia(string tituloDaNoticia);
	void escreverNoticia(string noticia);
	void escreverData(string _data);
	void escreverSite(string _site);
	void desenharTituloJornal(float posicaox, float posicaoy);
	void desenharTituloNoticia(float posicaox, float posicaoy);
	void desenharNoticia(float posicaox, float posicaoy);
	void desenharData(float posicaox, float posicaoy);
	void desenharSite(float posicaox, float posicaoy);
	void definirImagemNoticia(string _nomeImagem);
	void desenharImagemNoticia(float posicaox, float posicaoy);
	Noticias* getNoticias();


private:

	Texto tituloJornal, textoNoticia, data, site, tituloNoticia;
	Sprite spriteFolha, imagemNoticia;
	string tituloDefinido;
	Noticias* noticias;
	int quantidadeDeNoticias;
};

