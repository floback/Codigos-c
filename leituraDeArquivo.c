//Leitura de arquivo
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

  

  // declaração de um ponteiro 	
  FILE *pont_arq;

  char texto_str[20];
  
  //a variavel (pont_arq)  esta recebendo o valor de (fopen) que abertura de arquivo apontado
  //a função (fopen) rececbe como parametros o nome do arquivo a ser aberto e o tipo de abertura a ser realizada. esta formalizada por (r) 
  // frase (configura-DevOps.txt) é o nome do arquivo existente à ser aberto.
  //SINTAXE de abertura de arquivo  < ponteiro > = fopen(“nome do arquivo”,”tipo de abertura”);
  pont_arq = fopen("configura-DevOps.txt", "r");
  
  //enquanto não for fim de arquivo o looping será executado
  //e será impresso o texto
  while(fgets(texto_str, 20, pont_arq) != NULL)
  { 
	  printf("%s", texto_str);
  }
  //fechando o arquivo
  fclose(pont_arq);
  
  getch();
  return(0);
}
// TIPOS DE ABERTURA DE ARQQUIVOS
//r: Permissão de abertura somente para leitura. É necessário que o arquivo já esteja presente no disco.
//w: Permissão de abertura para escrita (gravação). Este código cria o arquivo caso ele não exista, e caso o mesmo exista ele recria o arquivo novamente fazendo com que o conteúdo seja perdido. Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.
//a: Permissão para abrir um arquivo texto para escrita(gravação), permite acrescentar novos dados ao final do arquivo. Caso não exista, ele será criado.
