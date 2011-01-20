/* LICENSE
resumo curto: você pode fazer o que quiser com o código desde que cite o autor.
author: Kayo Hamid
*/

/* BOOTSTRAP.CPP
categoria: implementação.
info: primeira parte do codigo a ser executado, lê as configurações e inicia o servidor
*/

// Primeiro includes locais
#include "bootstrap.hxx"

// TODO: isso aqui está totalmente errado e estranho, eu devia so incluir so a 
// interface do preprocess e nada mais, filemanager ja ta la dentro, nao? debug
// isso por favor. 

#include "preprocess.cpp"
#include "filemanager.cpp"

// Depois externos
#include <iostream>

// namespaces
using namespace std;

bootstrap::bootstrap()
{
}

bootstrap::~bootstrap()
{
}

void bootstrap::startConfig() {
	preprocess preInit;
	preInit.configProcess();
}

// O main

int main()
{
	bootstrap bootInit;
	bootInit.startConfig();
}
