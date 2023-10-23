#include <string.h>
#include <stdio.h>
struct Usuario {
char nome[10];
char senha[10];
char end[50];
char cartao[50];

};
int LOJA(loja) {
  int val = 0;
  int menu;
  printf("\nEscolha um produto\n1-RODA=100REAIS\n2-SHAPE=250REAIS\n3-TENIS=400REAIS\n0-FECHAR COMPRA\n");
  scanf("%d", &menu);
  while (menu > 0) {
    switch (menu) {
    case 1:
      val += 100;
      printf("Roda adicionada ao carrinho");
      break;
    case 2:
      val += 250;
      printf("Shape adicionado ao carrinho");
      break;
    case 3:
      val += 400;
      printf("Tenis adicionada ao carrinho");
      break;
    default:
      printf("Opção não existe");
    }
    printf(
        "\nEscolha um produto\n 1- "
        "RODA=100REAIS\n2-SHAPE=250REAIS\n3-TENIS=400REAIS\n0-FECHAR COMPRA\n");
    scanf("%d", &menu);
  }
  return val;
}

int main(void) {
  struct Usuario usuario;
  int menu = 0;
  char use[10];
  char senha[10];
  int loja;
  int valor = 0;
  int fim;
  
  printf("\nBEM VINDO A FLORASKATESHOP\n1-Efetue seu cadastro\n2-Faça login\n");
  scanf("%d", &menu);
  
  while (menu > 0) {
    switch (menu) {
   
    case 1:
      printf("Digite Seu Nome\n");
      scanf("%s", usuario.nome);
       printf("Digite Sua Senha\n");
      scanf("%s", usuario.senha);
       printf("Digite Seu Endereço\n");
      scanf(" %[^\n]s", usuario.end);
      printf("Digite seu cartão para as compras\n");
      scanf("%s",usuario.cartao);
      printf("Cadastro concluido com sucesso\n");
      break;
    
    case 2:
      printf("Digite seu usuario\n");
      scanf("%s", use);
      printf("Digite sua senha\n");
      scanf("%s",senha);
      if (strcmp(use, usuario.nome) == 0 && strcmp(senha, usuario.senha)==0){
         printf("BEM VINDO DE VOLTA %s\n",use);
          valor = LOJA(loja);
      
      }

      else {
        printf("Usuario não existe");
        return 0;
      }
      
      printf("O valor final é: %d\n\n", valor);
        printf("deseja finalizar a compra?:\n1=SIM\n2=NÃO");
        scanf("%d",&fim);
      
      if(fim==1){
        int parcela;
        int vfp;
        printf ("Deseja Parcelar sua compra de ate 12 vezes sem juros? sem sim digite o valor de parcelas\n sem não digite 0 \n");
        scanf("%d",&parcela);
      
        
        if(parcela>=1 && parcela<=12){
         
         vfp=valor/parcela;
          
          printf("O valor das parcelas é de %d de %d\n", parcela, vfp);
          printf("\n");
        printf("Obrigado pela compra %s\n O endereço a ser entregue é %s\n o cartão a ser cobrado é o de numero %s\n",use,usuario.end,usuario.cartao);
      }
      }

      else {
        return LOJA(loja);
      }
      break;

    default:
      printf("OPÇÃO INVALIDA");
    }
    printf(
        "\nBEM VINDO A FLORASKATESHOP\n1-Efetue seu cadastro\n2-Faça login\n");
    scanf("%d", &menu);
  }
  return 0;
}