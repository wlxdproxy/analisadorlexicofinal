/*
--------------------------------------------------
Autor: Wladson Cedraz Matos
Data: 2019-11-21
Linguagem: C
--------------------------------------------------
 #	        ANALISADOR LEXICO
 # Faculdade: �rea 1 - Wyden      
 # Curso: Engenharia da Computa��o
 # Disciplina: Teoria da Computa��o e Compiladores
 # Professor: Arleys Castro
--------------------------------------------------
 #            IMPORTANTE 
 # O codigo esta livre para usar,
 # citar e compartilhar desde que
 # mantida sua fonte e seu autor.
 # Obrigado.
--------------------------------------------------
 */

// [INICIO] - Declaracao das bibliotecas utilizadas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <token.h>
// [FIM] - Declaracao das bibliotecas utilizadas

using namespace std;
int main() {
	// Especifica o arquivo que ser� analisado
	arquivo("ArquivoFonte1.mln");
	
	// Chamada da funcao que analisa e retorna os tokens encontrados
	RetornaToken();
	return 0;
}
