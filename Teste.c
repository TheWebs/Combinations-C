/*
Author: Francisco Leal (aka: TheWebs)
Description: It calculates all combinations (numbers only) with 4 and 5 digits
*/
#include <stdio.h>
#include <windows.h>
/* Declaracoes de variaveis*/
int a = 0;
int b = 0;
int c = 0;
int d = 0;
typedef int bool;
#define true 1
#define false 0
char string [256];
/*Fim das declaracoes*/

int main()
{	

	//TRATAR DAS CORES
	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    //GUARDAR DEFAULT
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
	//FIM CORES

	printf("Combinacoes de quantos digitos?\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("1- ");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	printf("Quatro\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("2- ");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	printf("Cinco (a cores ^^)\n");
	printf("Resposta: ");
	gets(string);
	if(strcmp(string, "1") == 0)
	{
		CalculaQDigitos();
	}
	if(strcmp(string, "2") == 0)
	{
		CalculaCDigitos();
	}
	if(strcmp(string, "2") != 0 && strcmp(string, "1") != 0)
	{
		printf("Resposta Invalida! (%s)", string);
	}
	return 0;
}

int CalculaQDigitos()
{
	while(a<10)
	{
		FILE *f = fopen("file.txt", "a");
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}		
		printf("Combinacao: %i%i%i%i \n", a, b, c, d);
		fprintf(f, "Combinacao: %i%i%i%i \n", a, b, c, d);
		fclose(f);
		if(d != 9)
		{
			d++;
		}
		else
		{
			d = 0;
			if (c != 9)
			{
			c++;
			}
			else
			{
				c = 0;
				if (b != 9)
				{
					b++;
				}
				else
				{
					b = 0;
					a++;
				}
			}
		}
	}
}

int CalculaCDigitos()
{
	//TRATAR DAS CORES
	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    //GUARDAR DEFAULT
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
	//FIM CORES
	
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int COR = 0;
	
	while(e<10)
	{
				FILE *r = fopen("file.txt", "a");
if (r == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}
		if (COR == 0)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		printf("Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
		fprintf(r, "Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
		fclose(r);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		COR++;
		}
		else
		{
		if(COR == 1)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
			fprintf(r, "Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
			fclose(r);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		COR++;
		}
		else
		{
		if(COR == 2)
		{
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			printf("Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
			fprintf(r, "Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
			fclose(r);
		SetConsoleTextAttribute(hConsole, saved_attributes);
		COR++;
		}
		else
		{
		if(COR == 3)
		{
			printf("Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
			fprintf(r, "Combinacao: %i%i%i%i%i \n", e, f, g, h, i);
			fclose(r);
			COR = 0;
		}
		}
		}
		}
		if(i != 9)
		{
			i++;
		}
		else
		{
			i = 0;
			if (h != 9)
			{
			h++;
			}
			else
			{
				h = 0;
				if (g != 9)
				{
					g++;
				}
				else
				{
					g = 0;
					if(f != 9)
					{
						f++;
					}
					else
					{
						f = 0;
						e++;
					}
				}
			}
		}
	}
}
