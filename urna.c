#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//
typedef struct
{
 char Nome[20];
 int Numero;
 char Partido[2];
} Pres;

int main()
{
	keybd_event ( VK_MENU, 0x36, 0, 0 );
	keybd_event ( VK_RETURN, 0x1C, 0, 0 );
	keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
	keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );

	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	int i, j, k;
	int qtDeVotos[5] = {0,0,0,0,0}, totalVotos = 0, votosNulos = 0;
	char confirm, cand[][20] = {"Branco", "Manoel", "Paulo", "Andre", "Sheila"};

    Pres Manoel;
 	Pres Paulo;
 	Pres Andre;
 	Pres Sheila;
	
 	Manoel.Numero = 1;
 	strcpy(Manoel.Nome, "Manoel");
 	strcpy(Manoel.Partido, "PM");
	
 	Paulo.Numero = 2;
 	strcpy(Paulo.Nome, "Paulo");
 	strcpy(Paulo.Partido, "PP");
	
 	Andre.Numero = 3;
 	strcpy(Andre.Nome, "Andre");
 	strcpy(Andre.Partido, "PA");
	
 	Sheila.Numero = 4;
 	strcpy(Sheila.Nome, "Sheila");
 	strcpy(Sheila.Partido, "PS");
	
do{
//Área do candidato

	system("title Urna Eletrônica");
	system("color F0");
	
	for(i = 5; i < 100; i++){
		for(j = 2; j < 12; j++){
			gotoxy(i,j);
			printf("\033[0;34m");
			printf("%c",219);
		}
	}

	gotoxy(5,2);
	printf("\033[0;37m");
	printf("\033[44m");
	printf("TABELA DE CANDIDATOS:");

	for(i = 5; i < 100; i++){
		gotoxy(i,11);
		printf("%c",220);
		gotoxy(i,3);
		printf("%c",219);
	}
	for(j = 4; j < 12; j++){
		gotoxy(5,j);
		printf("%c",219);
		gotoxy(28,j);
		printf("%c",219);
		gotoxy(52,j);
		printf("%c",219);
		gotoxy(76,j);
		printf("%c",219);
		gotoxy(99,j);
		printf("%c",219);
	}

//tabela de candidatos
	printf("\033[0;37m");
	printf("\033[44m");
	gotoxy(13,5);
	printf(" PM %d\n\n\t   %s ", Manoel.Numero, Manoel.Nome);
	gotoxy(37,5);
	printf(" PP %d\n\n\t\t\t\t  %s", Paulo.Numero, Paulo.Nome);
	gotoxy(61,5);
	printf(" PA %d\n\n\t\t\t\t\t\t\t   %s", Andre.Numero, Andre.Nome);
	gotoxy(84,5);
	printf(" PS %d\n\n\t\t\t\t\t\t\t\t\t\t %s", Sheila.Numero, Sheila.Nome);

//Justiça Eleitoral
	for(i = 110; i < 160; i++){
		for(j = 2; j < 12; j++){
			gotoxy(i,j);
			printf("\033[0;37m");
			printf("%c",219);
		}
	}

	for(i = 110; i < 160; i++){
		printf("\033[0;30m");
		gotoxy(i,2);
		printf("%c",219);
		gotoxy(i,11);
		printf("%c",219);
	}

	for(j = 2; j < 12; j++){
		gotoxy(110,j);
		printf("%c",219);
		gotoxy(159,j);
		printf("%c",219);
	}
	printf("\033[0;30m");
	printf("\033[47m");
	printf("\033[4;30m");
	gotoxy(150,5);
	printf("JUSTICA");
	gotoxy(148,7);
	printf("ELEITORAL");
	printf("\033[0;37m");
	printf("\033[40m");
	gotoxy(120,5);
	printf("%c",30);
	gotoxy(120,7);
	printf("%c",31);
	gotoxy(119,6);
	printf("%c",17);
	gotoxy(121,6);
	printf("%c",16);
	gotoxy(120,6);
	printf("%c",254);
	
//Área de votação
	for(i = 5; i < 100; i++){
		for(j = 15; j < 45; j++){
			gotoxy(i,j);
			printf("\033[0;37m");
			printf("%c",219);
		}
	}

	for(i = 5; i < 100; i++){
		printf("\033[0;30m");
		gotoxy(i,15);
		printf("%c",219);
		gotoxy(i,44);
		printf("%c",219);
	}

	for(j = 15; j < 45; j++){
		gotoxy(5,j);
		printf("%c",219);
		gotoxy(99,j);
		printf("%c",219);
	}

	gotoxy(15,20);
	printf("\033[0;30m");
	printf("\033[47m");
	printf("Escolha seu candidato:\n");
	
	for(i = 16; i <= 25; i++){
		gotoxy(i,25);
		printf("%c",196);
		gotoxy(i,27);
		printf("%c",196);
	}
	gotoxy(15,25);
	printf("%c",218);
	gotoxy(15,27);
	printf("%c",192);
	gotoxy(26,27);
	printf("%c",217);
	gotoxy(15,26);
	printf("|");
	gotoxy(26,25);
	printf("%c",191);
	gotoxy(26,26);
	printf("|");
	
//Escolha seu candidato
	gotoxy(14,22);
	printf("\033[0;30m");
	printf("\033[47m");
	printf(" Presidente:\n");

//Números
	for(i = 110; i < 160; i++){
		for(j = 15; j < 45; j++){
			gotoxy(i,j);
			printf("\033[0;30m");
			printf("%c",219);
		}
	}

	for(i = 115; i < 125; i++){
		for(j = 40; j < 43; j++){
			gotoxy(i,j);
			printf("\033[0;37m");
			printf("%c",219);
		}
	}
	gotoxy(117,41);
	printf("\033[0;30m");
	printf("\033[47m");
	printf("\033[4;30m");
	printf("BRANCO");
	
	for(i = 119; i < 126; i++){
		for(j = 19; j < 22; j++){
			gotoxy(i,j);
			printf("\033[0;37m");
			printf("%c",219);
		}
		for(j = 24; j < 27; j++){
			gotoxy(i,j);
			printf("%c",219);
		}
		for(j = 29; j < 32; j++){
			gotoxy(i,j);
			printf("%c",219);
		}
	}
	gotoxy(120,20);
	printf("\033[0;30m");
	printf("\033[47m");
	printf("1");
	gotoxy(120,25);
	printf("4");
	gotoxy(120,30);
	printf("7");

	for(i = 131; i < 138; i++){
		for(j = 19; j < 22; j++){
			gotoxy(i,j);
			printf("\033[0;37m");
			printf("%c",219);
		}
		for(j = 24; j < 27; j++){
			gotoxy(i,j);
			printf("%c",219);
		}
		for(j = 29; j < 32; j++){
			gotoxy(i,j);
			printf("%c",219);
		}
		for(j = 34; j < 37; j++){
			gotoxy(i,j);
			printf("%c",219);
		}		
	}
	gotoxy(132,20);
	printf("\033[0;30m");
	printf("\033[47m");
	printf("2");
	gotoxy(132,25);
	printf("5");
	gotoxy(132,30);
	printf("8");
	gotoxy(132,35);
	printf("0");
	
	for(i = 143; i < 150; i++){
		for(j = 19; j < 22; j++){
			gotoxy(i,j);
			printf("\033[0;37m");
			printf("%c",219);
		}
		for(j = 24; j < 27; j++){
			gotoxy(i,j);
			printf("%c",219);
		}
		for(j = 29; j < 32; j++){
			gotoxy(i,j);
			printf("%c",219);
		}
	}
	gotoxy(144,20);
	printf("\033[0;30m");
	printf("\033[47m");
	printf("3");
	gotoxy(144,25);
	printf("6");
	gotoxy(144,30);
	printf("9");
	
	for(i = 128; i < 138; i++){
		for(j = 40; j < 43; j++){
			gotoxy(i,j);
			printf("\033[0;31m");
			printf("%c",219);
		}
	}
	gotoxy(129,41);
	printf("\033[0;30m");
	printf("\033[41m");
	printf("\033[4;30m");
	printf("CORRIGE.");
	
	for(i = 141; i < 155; i++){
		for(j = 40; j < 43; j++){
			gotoxy(i,j);
			printf("\033[0;32m");
			printf("%c",219);
		}
	}
	gotoxy(143,41);
	printf("\033[0;30m");
	printf("\033[42m");
	printf("\033[4;30m");
	printf(" CONFIRMA ");
	
	//Programação
	printf("\033[0;30m");
	printf("\033[47m");
	
	gotoxy(17,26);
	scanf("%d", &i);
	
	if(i == -1)
	{
	system("cls");
	
	printf("\n\t Votacao encerrada.\n");

	break;
	}
	
do 
{
	if(i == 0)
	{
		gotoxy(15,29);
		printf("Confirmar voto em branco? (S ou N) ", i);
	} else if (i > 0 && i < 5) {
		gotoxy(15,29);
		printf("Confirmar voto para candidado numero %d (%s)? (S ou N) ", i, cand[i]);
	} else {
		gotoxy(15,29);
		printf("Confirmar voto nulo? (S ou N) ", i);
	}
	
	scanf(" %c", &confirm);
		
	confirm += (confirm == 78 || confirm == 83);
} while (confirm != 110 && confirm != 115);
	
	system("cls");
	
if(confirm == 's')
	{
	qtDeVotos[i]++;
	totalVotos++;
	} else {
	continue;
	}
	
} while(1);

	if(totalVotos == 0)
	{
		printf("\n\t Nao houve votacao.\n");
		return(0);
	} else {
		for(i = 0; i <= 4; i++)
		{
		printf("\n\t Candidato %d (%s) recebeu %2.2f%% dos votos.\n", i, cand[i], ((float)qtDeVotos[i]/totalVotos)*100);
		}
		votosNulos = totalVotos - qtDeVotos[0] - qtDeVotos[1] - qtDeVotos[2] - qtDeVotos[3] - qtDeVotos[4]; 
	
		printf("\n\t Votos nulos: %2.2f%% ", ((float)votosNulos/totalVotos)*100);
	}
	
	printf("\n\n\n\n\n\n\n\n");

	printf("\033[0;37m");
	printf("\033[47m");
}
