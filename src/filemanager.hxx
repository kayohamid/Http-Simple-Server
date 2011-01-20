/* LICENSE
resumo curto: você pode fazer o que quiser com o código desde que cite o autor.
author: Kayo Hamid
*/

/* FILEMANAGER.HXX
categoria: interface;
info: como mais de uma parte do sistema vai trabalhar com arquivos, entao esse
sera o filemanager do projeto, responsavel por abrir, ler e tudo mais que for
necessario em operacoes de arquivo/disco.

convencoes locais: {lcl... => 'local';}
*/

// MACROGUARD
#ifndef _FILEMANAGER_HXX_
#define _FILEMANAGER_HXX_


// Primeiro includes locais

// Depois externos
#include <fstream>

// namespace

class filemanager
{
public:
        // variaveis primeiro

        // funcoes depois
        filemanager();
        ~filemanager();

        void readFile(int limit);
	bool openFile();
        void closeFile();

private:
        // variaveis primeiro
        ifstream lclEntry;
        ofstream lclDown;
        char fileToOpen[32];

        // funcoes depois

protected:

};

#endif
