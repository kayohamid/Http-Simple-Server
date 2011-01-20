/* LICENSE
resumo curto: você pode fazer o que quiser com o código desde que cite o autor.
author: Kayo Hamid
*/

/* BROKER.CPP
categoria: implementação.
info: usado pelo LOGGER para finalizar a aplicacao quando o LOGGER receber alguma
mensagem de falha. sera responsavel por requisitar informacoes necessarias para
efetuar um restart no servidor. Caso o servidor falhe em seguida pelo mesmo erro,
broker vai conseguir identificar isso, para a aplicacao e dar informacoes ao 
administrador.
*/

broker::broker()
{
}

broker::~broker()
{
}
