// [INICIO] - Declaracao das bibliotecas utilizadas
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
// [FIM] - Declaracao das bibliotecas utilizadas

using namespace std;

// [INICIO] - Definindo o tipo
typedef struct token{
	int classe; // Classe do token
	char valor[100]; // Lexema
	int posicaoL; // Linha do lexema
}token;
// [FIM] - Definindo o tipo

// [INICIO] - Declaracao de variaveis utilizadas
	char analiser; // Recebe o caracter para ser analizado
	int auxContagem 		= 0; // Auxilia na contagem dentro do for
	int linha 				= 1; // Contador de linha
	int InicioDeLexema		= 0; // Ponteiro para localizar o inicio do Lexema
	int ApontadorAdiante	= 0; // Ponteiro para localizar o fim do Lexema
	char *fitaCaracteres; // Ponteiro para o vetor que armazena os caracteres do arquivo
// [FIM] - Declaracao de variaveis utilizadas	

/*--------------------------------- [INICIO] - Arquivo vazio ---------------------------------*/
char Arquivo(char* nome_arquivo){
	FILE *Arquivo; // Ponteiro do arquivo
    char caractere; // Recebe caracteres lido do arquivo
    int contCaractere = 0; // Contador de caractere
    int auxIns = 0; // Auxilia na insercao de dados no vetor
    
    // [INICIO] - Analisa se o arquivo pode ser aberto e o abre em modo de leitura
    //		   	  caso contrário, exibe uma mensagem de erro
    if((Arquivo = fopen(nome_arquivo,"r")) == NULL){
          cout << "Erro ao tentar abrir o arquivo!" << endl;
          cout << "Verifique se o nome ou endereco do arquivo esta correto!" << endl;
      }
    // [FIM] - Analisa se o arquivo pode ser aberto e o abre em modo de leitura
    //		   caso contrário, exibe uma mensagem de erro  
    
    // [INICIO] - Laco para contar o contar os caracteres do arquivo
    while((caractere = getc(Arquivo)) != EOF)
      {
         contCaractere++;
      }
    // [INICIO] - Laco para contar o contar os caracteres do arquivo
    
    // [INICIO] - Instanciando e limpando o vetor (fita)
    fitaCaracteres = new char[contCaractere];
    
    for(auxContagem = 0; auxContagem < contCaractere; auxContagem++){
    	fitaCaracteres[auxContagem] = NULL;
	}	
    // [FIM] - Instanciando e limpando o vetor (fita)
    
    // Retorna o ponteiro ao fim do arquivo
    rewind(Arquivo);
    
    // [INICIO] - Preenchendo a fita de caracteres
    auxContagem = 0;
    while((caractere = getc(Arquivo)) != EOF){
        fitaCaracteres[auxContagem] = caractere;
        auxContagem++;
    }
    // [FIM] - Preenchendo a fita de caracteres  
    
    // Insere '\n' no final do vetor para identificar o fim da fita
    fitaCaracteres[contCaractere] = '\n';
  
    fclose(Arquivo); // Fecha o arquivo
}
/*--------------------------------- [FIM] - Arquivo vazio ---------------------------------*/

/*--------------------------------- [INICIO] - Inicio da funcao ProximoCaracter ---------------------------------*/
char ProximoCaractere(){
    analiser = fitaCaracteres[ApontadorAdiante++];

    if (analiser == '\n'){
    	linha++;	
	}
    
    return analiser; // Retorna o caracter do vetor
}
/*--------------------------------- [FIM] - Inicio da funcao ProximoCaracter ---------------------------------*/



