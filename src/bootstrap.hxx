/* LICENSE
resumo curto: você pode fazer o que quiser com o código desde que cite o autor.
author: Kayo Hamid
*/

/* BOOTSTRAP.HXX
categoria: interface;
info: primeira parte do codigo a ser executado, lê as configurações e inicia o servidor
*/

// Primeiro includes locais

// Depois externos
#include <vector>
#include <string>

// namespace
using namespace std;

class bootstrap 
{
public:
        // variaveis primeiro
        vector<string> initConfig; // variavel que vai conter a conf. do servidor

        // funçoes depois
        bootstrap();
        ~bootstrap();

	void startConfig();

private:

protected:

};
