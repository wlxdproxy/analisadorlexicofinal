// [INICIO] - Declaracao das bibliotecas utilizadas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// [FIM] - Declaracao das bibliotecas utilizadas

using namespace std;

/*-------------------------------------------- [INICIO] - Funcao FalhaAutomato --------------------------------------------*/
int FalhaAutomato(int &start){
	switch(start){
   		 case  0: return  3; // Comentario
   		 case  3: return  6; // If
         case  6: return 11; // Then
         case 11: return 16; // Else
         case 16: return 20; // End
         case 20: return 27; // Repeat
         case 27: return 33; // Until
         case 33: return 38; // Read
         case 38: return 44; // Write
         case 44: return 46; // +
         case 46: return 48; // -
         case 48: return 50; // *
         case 50: return 52; // /
         case 52: return 54; // =
         case 54: return 56; // <
         case 56: return 58; // (
         case 58: return 60; // )
         case 60: return 62; // ;
         case 62: return 65; // :=
         case 65: return 68; // Numero
         case 68: return 72; // Identificador ou Final de Sentenca
         default: return 74; // Retorna erro
   }
}
/*-------------------------------------------- [FIM] - Funcao FalhaAutomato --------------------------------------------*/  

/*-------------------------------------------- [INICIO] - Funcao ProximoToken --------------------------------------------*/
token ProximoToken(){
	token tkReturn; // Token de retorno
	int contAux 	= 0; // Contador Auxiliar
	int auxEstado	= 0; // Auxilia o posicionamento das comparacoes
	int start		= 0; // Posiciona as comparacoes
	int auxPos		= 0; // Contador auxiliar pro for
	
	// [INICIO] - Limpando o vetor
	for(p = 0; auxPos < 100; auxPos++){
		tk.valor[auxPos] = NULL;
	}
	// [FIM] - Limpando o vetor
	
	// [INICIO] - Laco infinito
	while(1){
		switch(auxEstado){
			/*------------------------[FIM] - Analise das aspas--------------------------*/
			case 0: analiser = ProximoCaracter();
                if(isspace(analiser)) // Verifica se ha espaco em branco, tabulacao ou final de linha
                	InicioDeLexema++; // Aponta para o inicio do Lexema
                else if(analiser == '"') auxEstado = 1;
                else{  
					// Iguala o inicio do apontador com o proximo Lexema
                    ApontadorAdiante = InicioDeLexema;
                  	auxEstado = start = FalhouAutomatos(start);
                }
          	break;

          	case 1: analiser = ProximoCaracter();
          		if(analiser == '"' && vetor[InicioDeLexema] == '"')
                  	auxEstado = 2;
                if (analiser == '"' && vetor[InicioDeLexema] == '"'){
                  	auxEstado = 74;
                    if (vetor[ApontadorAdiante] == '\n')
                    	ApontadorAdiante--;
                }      
                if (analiser != '"' && vetor[InicioDeLexema] != '"'){
                	auxEstado = 1;
                }
          	break;

          	case 2: auxEstado = 0;
                InicioDeLexema = ApontadorAdiante;
			break;
          	/*------------------------[FIM] - Analise das aspas--------------------------*/
          
		}
	}
	// [FIM] - Laco infinito
} 
/*-------------------------------------------- [FIM] - Funcao ProximoToken --------------------------------------------*/ 
