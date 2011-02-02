/* LICENSE
resumo curto: você pode fazer o que quiser com o código desde que cite o autor.
author: Kayo Hamid
*/

/* FILEMANAGER.CPP
categoria: implementação.
info: como mais de uma parte do sistema vai trabalhar com arquivos, entao esse
sera o filemanager do projeto, responsavel por abrir, ler e tudo mais que for
necessario.
*/

// Primeiro includes locais
#include "filemanager.hxx"

// Depois externos
#include <iostream>
#include <cstdlib> // apenas para o exit() aqui.

// namespace
using namespace std;

filemanager::filemanager()
{
        
}

filemanager::~filemanager()
{
}

void filemanager::readFile(int limit)
{
        if(!openFile())
        {
                cout << "Finalizando..." << endl;
                exit(1); // TODO: tire o exit(1) veja o que acontece e debug isso por favor, vc precisa entender isso.
        }

        char buffer[limit];
        while(lclEntry.eof() != true)
        {
                lclEntry.getline(buffer,limit);
                cout << buffer << endl;
        }

        closeFile();

}

bool filemanager::openFile()
{
	lclEntry.open("../config/hss.conf"); // agora o parametro que deve ficar em outro lugar
	
	// checa se a abertura do arquivo falhou, possivel 404
	if(lclEntry.fail()) 
        { // usar o logger aqui no futuro.
                cout << "Impossivel abrir o arquivo" << endl;
                return false;
        }

        return true;	
}

void filemanager::closeFile()
{
        lclEntry.close();
}
