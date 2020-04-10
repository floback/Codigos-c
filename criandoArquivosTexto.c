#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // criando a variável ponteiro para o arquivo
  // 'FILE' e um tipo de dados que representa o arquivo na memória
  FILE *pont_arq;
  
  //abrindo o arquivo
  //pont_arq = fopen
  //a: Permissão para abrir um arquivo texto para escrita(gravação), permite acrescentar novos dados ao final do arquivo. Caso não exista, ele será criado.
  pont_arq = fopen("/home/user/Documentos/configuraçõesDevOps/Arquivo01.txt", "a");
  
  if (pont_arq == NULL)
  {
	  printf("Erro! O arquivo nao pode ser aberto. Verifique se esta aberto!\n");
	  return 1;
  }

  // fechando arquivo
  fclose(pont_arq);
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!");
  
  system("pause");
  return(0);
}
