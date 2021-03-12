#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	//	O resto da inicialização vem aqui!
	
	//carregando os recursos
		//sprites
	if(!gRecursos.carregouSpriteSheet("templateJornal"))
		gRecursos.carregarSpriteSheet("templateJornal", "../assets/jornalTemplate.png", 1, 1);
	if (!gRecursos.carregouSpriteSheet("spritePlayer"))
		gRecursos.carregarSpriteSheet("spritePlayer", "../assets/Player.png", 1, 2);
		//Fontes
	if(!gRecursos.carregouFonte("titulo"))
		gRecursos.carregarFonte("titulo", "../assets/pixelplay.ttf", 42);
	if (!gRecursos.carregouFonte("textoColuna"))
		gRecursos.carregarFonte("textoColuna", "../assets/new_browserlink.ttf");


	//Setando os recursos
		//titulo
	tituloJornal.setFonte("titulo");
	tituloJornal.setString("Igor New's");
	tituloJornal.setAlinhamento(TEXTO_CENTRALIZADO);
	tituloJornal.setCorPalavra("New's", 255, 0, 0);
	tituloJornal.setCor(0, 0, 0);
		//Coluna
	textoColuna.setFonte("textoColuna");
	textoColuna.setString("bah os guri são um terror não tem ruim vamo pra cima gremiooooo fiufiuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdvfdsifsjanvughuihuihweruirhewiuhfdsbhbvdafhgbaedyubyukdhsbyfudsgbuyadgsbuydgsgabduygvbusgbadgbkuasdbguayhdbguavsdbgfuyasgfuasydifgdysuagfsudyfgdysuagfuysdagifasuydgfasuygfdasyugfasduygyudfagyudsgf");
	textoColuna.setAlinhamento(TEXTO_ALINHADO_A_ESQUERDA);
	textoColuna.setLarguraMaxima(100);
	textoColuna.setEscala(0.5, 0.5);
	textoColuna.setCor(0, 0, 0);
	textoColuna.setEspacamentoLinhas(1.5);
		//Background
	spriteJornal.setSpriteSheet("templateJornal");
	spriteJornal.setEscala(0.5, 0.5);
		//Player
	player.setSpriteSheet("spritePlayer");
	player.setAnimacao(0);
		
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	gRecursos.descarregarSpriteSheet("templateJornal");

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		//	Seu código vem aqui!
		
		spriteJornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 1.2);
		tituloJornal.desenhar(gJanela.getLargura() / 2, 170);
		textoColuna.desenhar(gJanela.getLargura() / 3.75, gJanela.getAltura() / 1.65);
		player.avancarAnimacao();
		player.desenhar(gJanela.getLargura() / 3, gJanela.getAltura() / 6);

		uniTerminarFrame();
	}
}