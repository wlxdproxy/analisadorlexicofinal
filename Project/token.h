// [INICIO] - Declaracao das bibliotecas utilizadas
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
// [FIM] - Declaracao das bibliotecas utilizadas

using namespace std;

/*------------------------------[INICIO] - Retorna Token -------------------------------*/
void RetornaToken(){
   	token tk;
   
	do{
     	tk = ProximoToken();

      	//Imprime na tela os tekens retornados
      	switch(tk.classe){
   			case  1:  cout << "Classe = " << "for" << endl;         						break;
         	case  2:  cout << "Classe = " << "step" << endl;       							break;
         	case  3:  cout << "Classe = " << "sqrt" << endl;       							break;
         	case  4:  cout << "Classe = " << "if" << endl;        							break;
         	case  5:  cout << "Classe = " << "else" << endl;     							break;
         	case  6:  cout << "Classe = " << "return" << endl;      						break;
         	case  7:  cout << "Classe = " << "print" << endl;       						break;
         	case  8:  cout << "Classe = " << "read" << endl;               					break;
         	case  9:  cout << "Classe = " << "to" << endl;                   				break;
         	case 10:  cout << "Classe = " << "num" << endl;                   				break;
         	case 11:  cout << "Classe = " << "string" << endl;                   			break;
         	case 12:  cout << "Classe = " << '"' << endl;                   				break;
         	case 13:  cout << "Classe = " << "(" << endl;                   				break;
         	case 14:  cout << "Classe = " << ")" << endl;                   				break;
         	case 15:  cout << "Classe = " << "{" << endl;                   				break;
         	case 16:  cout << "Classe = " << "}" << endl;                   				break;
         	case 17:  cout << "Classe = " << "=" << endl;                   				break;
         	case 18:  cout << "Classe = " << ">" << endl;                  					break;
         	case 19:  cout << "Classe = " << "<" << endl;              						break;
         	case 20:  cout << "Classe = " << "+" << endl;       							break;
         	case 21:  cout << "Classe = " << "-" << endl;   								break;
            case 22:  cout << "Classe = " << "*" << endl;                					break;
            case 23:  cout << "Classe = " << "/" << endl;              						break;
            case 24:  cout << "Classe = " << "%" << endl;                					break;
            case 25:  cout << "Classe = " << ":=" << endl;                					break;
            case 26:  cout << "Classe = " << "Final de Sentenca!" << endl;               	break;            
		}
        cout << "Lexema = " << tk.valor << endl;
        cout << "Linha  = " << tk.posicaoL << endl;
        cout << endl;

	}while(tk.classe != 21);

	delete[] fitaCaractere;
}
/*------------------------------[FIM] - Retorna Token -------------------------------*/

