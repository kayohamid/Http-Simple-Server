/* LICENSE
resumo curto: você pode fazer o que quiser com o código desde que cite o autor.
author: Kayo Hamid
*/

/* PREPROCESS.CPP
categoria: implementação.
info: faz todo o processamento inicial de configuração do servidor, é chamado 
logo em seguida pelo bootstrap e sua função é ler o arquivo de configuração
e formar o array de configuração
*/

// Primeiro includes locais
#include "preprocess.hxx"
#include "filemanager.hxx"

// Depois externos

// namespace
using namespace std;

preprocess::preprocess()
{
}

preprocess::~preprocess()
{
}

void preprocess::configProcess()
{
        filemanager newFile("../config/kss.conf");
        newFile.readFile(256);
}

