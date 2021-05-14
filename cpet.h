#include <stdio.h>

#include <locale.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#define MAX 100

typedef struct Animais {

  char especie[100];
  char raca[100];
  char sexo[100];
  char idade[100];
  char peso[100];
  char vivo[100];
  char morto[100];
  char nome[100];
  char adotar[100];
  int chip;

}
Animais;

typedef struct Pessoa {

  char nome[200];
  char cpf[100];
  char telefone[200];
  char estado[200];
  char cidade[200];
  char rua[100];
  char cep[100];
  int chip;
  char listaDeAnimaisCPFTutor[12];
  char listaDeAnimaisNome[100];
  char listaDeAnimaisEspecie[100];
  char listaDeAnimaisPeso[100];
  char listaDeAnimaisIdade[100];
  char listaDeAnimaisSexo[100];
  char listaDeAnimaisVivo[100];
  char listaDeAnimaisMorto[100];
  char listaDeAnimaisRaca[100];

}
Pessoa;

int i, contadorPet = 0, opcao;
Animais animais[MAX];
int contadorPessoa = 0;
Pessoa pessoa[MAX];

void Cadastrar_animal();
void Cadastrar_pessoa();
void Listar_animal();
void Listar_pet_adocao();
void Atualizar_cadastro_pet();
void Inicializar();
void Buscar_pet();
void Adotar_pet();
void Adotar();
void Buscar_Pessoa();
void Atualizar_Pessoa();
void Menu();
void ValidarCPF();
void Listar_pessoas();
void Excluir();
char Logo();
void BuscarPet_Adotado();
void excluirPet();

char Logo() { // tem a fun��o de aparecer um logo  junto com o menu                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

  printf("Sistema \n\n\n");
  printf("\t\t\t-----CCCC----PPPPPPP---EEEEEEEEE--TTTTTTTTTTTTTTT------\n");
  printf("\t\t\t---CC----CC--PP-----PP-EE---------TTTTTTTTTTTTTTT------\n");
  printf("\t\t\t--CC---------PP-----PP-EE---------------TT-------------\n");
  printf("\t\t\t--CC---------PPPPPPP---EEEEEE-----------TT-------------\n");
  printf("\t\t\t--CC---------PP--------EE---------------TT-------------\n");
  printf("\t\t\t---CC----CC--PP--------EE---------------TT-------------\n");
  printf("\t\t\t-----CCCC----PP--------EEEEEEEEE--------TT-------------\n");
  Menu();
}
void Menu() { // op�oes que o usuario vai escolher , e inicar as fun�o�s

  printf("\n\n\t\tEscolha uma op��o \n\n\n");

  printf("\n\n\t1-Cadastar Pet\n\n\t2-Cadastrar Tutor\n\n\t3-Lista de Pets\n\n\t4-Lista de pet para ado��o\n\n\t5-Atualizar cadastro do Pet\n\n\t6-Buscar Pet\n\n\t7-Adotar Pet\n\n\t8-Buscar Tutor\n\n\t9-Atualizar cadastro do Tutor\n\n\t10-Listar Tutores\n\n\t11-Excluir Tutores\n\n\t12-Buscar Pets Adotados\n\n\t13-Excluir Pet\n\n\t0-Sair\n\n\tOp��o :");
  scanf("%d", & opcao);
  system("cls");

  switch (opcao) {
  case 1:
    Cadastrar_animal();
    break;
  case 2:
    ValidarCPF();
    break;
  case 3:
    Listar_animal();
    break;
  case 4:
    Listar_pet_adocao();
    break;
  case 5:
    Atualizar_cadastro_pet();
    break;
  case 6:
    Buscar_pet();
  case 7:
    Adotar();
    break;
  case 8:
    Buscar_Pessoa();
    break;
  case 9:
    Atualizar_Pessoa();
    break;
  case 10:
    Listar_pessoas();
    break;
  case 11:
    Excluir();
    break;
  case 12:
    BuscarPet_Adotado();
    break;
  case 13:
    excluirPet();
    break;
  case 0:
    printf("\n\nEncerrando.....");
    exit(0);
    break;
  default:
    getchar();
    printf("\n\nOp��o invalida , por favor digite uma op��o valida \n\n");
    printf("Precione ENTER para voltar ao Menu inicial....");
    getchar();
    system("cls");
    Logo();
    break;
  }
}
void Cadastrar_animal() { //fun��o para cadastar animais 

  char escolha[1]; // se for S retorna para a fun��o cadastar animal

  if (contadorPet < MAX) {

    do {

      printf("\n\t\t\t=========================================== Cadastrar Animal ============================================\n\n");

      printf("\nDigite o nome do animal: \n");
      scanf("%s", animais[contadorPet].nome);

      printf("\nDigite a esp�cie do animal: \n");
      scanf("%s", animais[contadorPet].especie);

      printf("\nDigite a ra�a  do animal: \n");
      scanf("%s", animais[contadorPet].raca);

      printf("Digite sexo do animal :  \n");
      scanf("%s", animais[contadorPet].sexo);

      printf("Digite a idade do animal : \n");
      scanf("%s", animais[contadorPet].idade);

      printf("Digite o peso do animal : \n");
      scanf("%s", animais[contadorPet].peso);

      printf("\n\nAnimal cadastrado com sucesso!\n\n");

      strcpy(animais[contadorPet].vivo, "S");
      printf("Deseja cadastar mais um animal? S ou N ?\nEscolha : ");
      scanf("%s", escolha);
      strdup(escolha);
      getchar();
      system("cls");
      contadorPet++;

      animais[contadorPet].chip = animais[contadorPet].chip + contadorPet;
    } while ((strcmp(escolha, "S") == 0));
    printf("Precione ENTER para voltar ao Menu inicial....");
    getchar();
    system("cls");
    Logo();
  } else {

    printf("\n\nLista lotada!\n\n");
  }

}
void Listar_animal() { // fun��o para lisatr todos os animais cadstrados , vivos ,mortos , e adotados 

  int contador_Pet = 0, i, j = 0;

  for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) { // varrer o vetor de animais 
    printf("\n\n=========================================== Lista de  Todos os Pets ============================================\n\n");
    printf("\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\nAdotado: %s\n\nChip %d\n\n\n\n\n", animais[i].nome, animais[i].especie, animais[i].raca, animais[i].sexo, animais[i].peso, animais[i].idade, animais[i].vivo, animais[i].morto, animais[i].adotar, animais[i].chip);
    printf("=============================================================================================================");
    contador_Pet++;
    j = 1;
  }
  if (j == 0) { // se a op�ao acima  n�o for valida , ira mostar lista vazia

    printf("\n============================================Lista de Todos os Pets===================================================\n");
    printf("\n\nLista vazia !\n\n");
    printf("\n=============================================================================================================\n");

  }
  getchar();
  printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
  printf("=============================================================================================================");
  getchar();
  system("cls");
  Logo();
}
void Listar_pet_adocao() { // fun��o para lstar os animais cadastraddos disponiveis para doa��o

  int contador_Pet = 0, i, j = 0;

  for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) { // varer o vetor de animas 

    if (i < MAX && (strcmp(animais[i].vivo, "S") == 0) && (strcmp(animais[i].adotar, "S") != 0) && (strcmp(animais[i].morto, "N") != 0)) { //vai exibir os animais que passar no if 
      printf("\n\n=========================================== Lista de Pets Para Doa��o ============================================\n\n");
      printf("\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nChip %d\n\n\n\n\n", animais[i].nome, animais[i].especie, animais[i].raca, animais[i].sexo, animais[i].peso, animais[i].idade, animais[i].vivo, i);
      contador_Pet++;
      j = 1;
    }
  }
  if (j == 0) { // se a op�ao de cima n�o for valida ira mostar lista vazia 

    printf("\n============================================Lista de Pets Para Doa��o===================================================\n");
    printf("\n\nLista vazia !\n\n");
    printf("\n=============================================================================================================\n");

  }

  getchar();
  printf("\n\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
  getchar();
  system("cls");
  Logo();

}
void Atualizar_cadastro_pet() { // fun��o de atualizar o cadastro de pets , e mudar o status de vivo para morto, e se esta adotado ou n�o edi��o total menos do chip

  char novoNome[100], novoSexo[100], novoIdade[100], novoPeso[100], novoRaca[100], novoEspecie[100], escolha[100], novoAdotar[100];
  int contador_Pet = 0, i, buscaPet;
  int contador_Pet_ = 0, j = 0, k = 0;
  char voltar[100];

  do {

    printf("\n\n=================================================== Editar cadastro de Pet ===========================================\n\n");

    printf("\n\n=========================================== Lista de Pets ============================================\n\n");

    for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) { // varer o vetor animais 

      printf("\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\nChip %d\n\n\n\n\n", animais[i].nome, animais[i].especie, animais[i].raca, animais[i].sexo, animais[i].peso, animais[i].idade, animais[i].vivo, animais[i].morto, i);
      printf("=============================================================================================================");
      contador_Pet_++;
      j = 1;

    }
    if (j == 0) {

      printf("\n\nLista vazia!\n\n");
      printf("\n\n=========================================================================================================\n\n");
      getchar();
      printf("Precione ENTER para voltar ao Menu inicial....");
      getchar();
      system("cls");
      Logo();
    }

    printf("\n\nBuscar Pet\n");
    printf("\n\nDigite o chip do Pet\nChip :");
    scanf("%d", & buscaPet);

    for (i = 0; i < contadorPet; i++) {

      if (buscaPet == animais[i].chip) {

        contador_Pet = 1;
        i = buscaPet;
        k = 1;

        printf("\n\nDigite o novo nome : \n");
        scanf("%s", novoNome);
        strcpy(animais[i].nome, novoNome);
        strcpy(pessoa[i].listaDeAnimaisNome, animais[i].nome);

        printf("\n\nDigite o novo sexo : \n");
        scanf("%s", novoSexo);
        strcpy(animais[i].sexo, novoSexo);
        strcpy(pessoa[i].listaDeAnimaisSexo, animais[i].sexo);

        printf("\n\nDigite o novo ra�a : \n");
        scanf("%s", novoRaca);
        strcpy(animais[i].raca, novoRaca);
        strcpy(pessoa[i].listaDeAnimaisRaca, animais[i].raca);

        printf("\n\nDigite a nova idade : \n");
        scanf("%s", novoIdade);
        strcpy(animais[i].idade, novoIdade);
        strcpy(pessoa[i].listaDeAnimaisIdade, animais[i].idade);

        printf("\n\nDigite a nova esp�cie : \n");
        scanf("%s", novoEspecie);
        strcpy(animais[i].especie, novoEspecie);
        strcpy(pessoa[i].listaDeAnimaisEspecie, animais[i].especie);

        printf("\n\nDigite o novo peso : \n");
        scanf("%s", novoPeso);
        strcpy(animais[i].peso, novoPeso);
        strcpy(pessoa[i].listaDeAnimaisPeso, animais[i].peso);

        printf("\n\nAnimal devolvido ao abrigo? S ou N \nResposta: ");
        scanf("%s", novoAdotar);
        strdup(novoAdotar);

        if ((strcmp(novoAdotar, "S") == 0)) {
          strcpy(animais[i].adotar, "S");
        }

        printf("\n\nInforme se o animal esta vivo ? S ou N:\n");
        scanf("%s", escolha);
        strdup(escolha);

        if ((strcmp(escolha, "S") == 0)) {

          strcpy(animais[i].vivo, "S");
          strcpy(pessoa[i].listaDeAnimaisVivo, animais[i].vivo);
          strcpy(animais[i].morto, "");
          strcpy(pessoa[i].listaDeAnimaisMorto, animais[i].morto);

        } else if (strcmp(escolha, "N") == 0) {

          strcpy(animais[i].morto, "S");
          strcpy(pessoa[i].listaDeAnimaisMorto, animais[i].morto);
          strcpy(animais[i].vivo, "");
          strcpy(pessoa[i].listaDeAnimaisVivo, animais[i].vivo);
          strcpy(animais[i].adotar, "");
        }

        printf("\n\nAtualizado com sucesso!\n\n");

      }
    }
    if (k == 0) {

      printf("\nPet n�o cadastrado !\n\n");

    }

    printf("\n\nDeseja atualizar mais um pet? S ou N\n\n");
    scanf("%s", voltar);
    strdup(voltar);
    getchar();
    system("cls");

  } while ((strcmp(voltar, "S") == 0));

  printf("\n\n=========================================================================================================\n\n");
  system("cls");
  Logo();

}
void Buscar_pet() { //fun��o para buscar animais pelo nome, se tiver nomes iguais ele ira exibir 
  char buscaPet[200], voltar[1], escolha[1];
  int contador_Pet = i, j = 0, validarPet = 0, contValidarPet = 0, chipPet, opcao;

  for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) {
    validarPet = 1;
    contValidarPet++;

  }
  if (validarPet == 0) {

    printf("\n============================================Buscar Pet===================================================\n");
    printf("\n\nLista vazia !\n\n");
    printf("\n=============================================================================================================\n");

  } else {

    printf("\n============================================ Buscar Pet ===================================================\n");
    printf("\n\nDesjea buscar pet pela:\nOp��o 1-Nome \nOp��o 2-Chip\n Op��o : ");
    scanf("%d", & opcao);
    if (opcao == 1) {
      printf("\n\nBuscar Pet\n");
      printf("\n\nDigite o nome do Pet\nNome :");
      scanf("%s", buscaPet);
    }
    if (opcao == 2) {
      printf("\n\nBuscar Pet\n");
      printf("\n\nDigite o chip do Pet\nNome :");
      scanf("%d", & chipPet);
    }

    for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) {
      if ((strcmp(buscaPet, animais[i].nome) == 0) || (chipPet == animais[i].chip)) {
        printf("\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\nChip %d\n\n\n\n\n", animais[i].nome, animais[i].especie, animais[i].raca, animais[i].sexo, animais[i].peso, animais[i].idade, animais[i].vivo, animais[i].morto, i);
        contador_Pet++;
        j = 1;
        printf("\n\n=========================================================================================================\n\n");
      }
    }
    if (j == 0) {
      printf("\nPet n�o cadastrado !\n\n");
      printf("\n\n=========================================================================================================\n\n");

    }
    printf("\n\n\nDeseja fazer fazer uma nova busca ? S ou N \nEscolha : ");
    scanf("%s", voltar);
    strdup(voltar);
    system("cls");

    if ((strcmp(voltar, "S") == 0)) {
      system("cls");
      Buscar_pet();
    }
  }
  getchar();
  printf("Precione ENTER para voltar ao Menu inicial....");
  getchar();
  system("cls");
  Logo();
}
void Cadastrar_pessoa() { // fun��o para cadastar tutores

  char escolha[10];

  if (i < MAX) {

    printf("\nDigite o nome do Tutor : \n");
    scanf(" %s", pessoa[i].nome);

    printf("\nDigite o telefone do Tutor : \n");
    scanf("%s", pessoa[i].telefone);

    printf("\nDigite o estado do Tutor : \n ");
    scanf(" %s", pessoa[i].estado);

    printf("Digite a cidade do tutor : \n");
    scanf("%s", pessoa[i].cidade);

    printf("Digite a rua Tutor : \n");
    scanf("%s", pessoa[i].rua);

    printf("Digite o CEP do Tutor : \n");
    scanf("%s", pessoa[i].cep);

    printf("\n\nCadastro feito com sucesso!\n\n");

    printf("Deseja cadastar mais um Tutor ? S ou N \nEscolha: ");
    scanf("%s", escolha);
    strdup(escolha);
    contadorPessoa++;
    pessoa[i].chip = pessoa[i].chip + i;
    if ((strcmp(escolha, "S") == 0)) {
      system("cls");
      ValidarCPF();
    }

  } else {

    printf("\n============================================Cadastrar Pessoa===================================================\n");
    printf("\n\nLista cheia !\n\n");
    printf("\n=============================================================================================================\n");

  }

  printf("Precione ENTER para voltar ao Menu inicial....");
  getchar();
  system("cls");
  Logo();
}
void Buscar_Pessoa() { // fun��o para buscar tutores 

  char buscaPessoa[10], voltar[1], BuscarPet[12];
  int contador_Pessoa = i, j = 0, k, contadorListapet = 0, contValidarTutor = 0, validarTutor = 0;

  for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {
    validarTutor = 1;
    contValidarTutor++;
  }
  if (validarTutor == 0) {

    printf("\n============================================Buscar Pessoa===================================================\n");
    printf("\n\nSem tutores cadastrados para buscar !\n\n");
    printf("\n=============================================================================================================\n");

  } else {

    printf("\n============================================ Buscar Pessoa ===================================================\n");

    printf("\n\nBuscar Pessoa\n");
    printf("\n\nDigite o CPF ou o Nome da Pessoa:\nCPF ou Nome : ");
    scanf("%s", buscaPessoa);

    for (i = 0; i < MAX && (strcmp(pessoa[i].cpf, "\0") != 0); i++) {

      if ((strcmp(buscaPessoa, pessoa[i].cpf) == 0) || (strcmp(buscaPessoa, pessoa[i].nome) == 0)) {

        printf("\n\nNome: %s\n\nCPF: %s\n\nTelefone: %s\n\nEstado: %s\n\nCidade: %s\n\nRua: %s\n\nCEP: %s\n\nChip %d\n\n\n\n\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].telefone, pessoa[i].estado, pessoa[i].cidade, pessoa[i].rua, pessoa[i].cep, pessoa[i].chip);
        printf("=============================================================================================================");
        strcpy(BuscarPet, pessoa[i].cpf);

        j = 1;

        contador_Pessoa++;

      }

    }
    //int k = 0;

    for (k = 0; k < MAX && (strcmp(BuscarPet, BuscarPet) == 0); k++) {

      if (strcmp(BuscarPet, pessoa[k].listaDeAnimaisCPFTutor) == 0) {

        printf("\n\n\n\nLista de animais \n\n\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\n\n\n\n", pessoa[k].listaDeAnimaisNome, pessoa[k].listaDeAnimaisEspecie, pessoa[k].listaDeAnimaisRaca, pessoa[k].listaDeAnimaisSexo, pessoa[k].listaDeAnimaisPeso, pessoa[k].listaDeAnimaisIdade, pessoa[k].listaDeAnimaisVivo, pessoa[k].listaDeAnimaisMorto);
        printf("\n\n=========================================================================================================\n\n");

      }

    }

    if (j == 0) {
      printf("\nFixa inexistente!\n\n");
      printf("\n\n=========================================================================================================\n\n");
    }

    printf("\n\n\nDeseja fazer fazer uma nova busca ? S ou N \nEscolha : ");
    scanf("%s", voltar);
    strdup(voltar);
    system("cls");

    if ((strcmp(voltar, "S") == 0)) {
      system("cls");
      Buscar_Pessoa();
    }
  }
  getchar();
  printf("Precione ENTER para voltar ao Menu inicial....");
  getchar();
  system("cls");
  Logo();

}

void ValidarCPF() { // fun��o para verificar se tem cpfs iguais , se tiver ela empede o cadastro
  int contador = 0;
  char autenticarCPF[10], escolha[1];

  printf("\n\t\t\t=========================================== Cadastrar Tutor ============================================\n\n");

  printf("Digite o CPF do Tutor : \n");
  scanf("%s", autenticarCPF);

  for (i = 0; i < MAX && (strcmp(pessoa[i].cpf, "\0") != 0); i++) {

    if ((strcmp(autenticarCPF, pessoa[i].cpf) == 0)) {
      printf("\n\nFalha!, cpf ja cadastrado, tente novamente\n\n");

      printf("\n\nDeseja tentar novamente? S ou N: ");
      scanf("%s", escolha);
      strdup(escolha);
      if (strcmp(escolha, "S") == 0) {
        system("cls");
        ValidarCPF();
      }
      getchar();
      printf("\n\n\nPrecione ENTER para voltar ao Menu inicial....");
      getchar();
      system("cls");
      Logo();
    }
    contador++;
  }
  if ((strcmp(autenticarCPF, pessoa[i].cpf) != 0)) {
    strcpy(pessoa[i].cpf, autenticarCPF);

    Cadastrar_pessoa();
  }

}
void Listar_pessoas() { // listar todos os turores cadastrados

  int contador_Pessoa = 0, i, j = 0;

  for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {
    printf("\n\n=========================================== Lista de  Tutores Cadastrados ============================================\n\n");
    printf("\n\nNome: %s\n\nCPF: %s\n\nTelefone: %s\n\nEstado: %s\n\nCidade: %s\n\nRua: %s\n\nCEP: %s\n\nChip %d\n\n\n\n\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].telefone, pessoa[i].estado, pessoa[i].cidade, pessoa[i].rua, pessoa[i].cep, pessoa[i].chip);
    j = 1;
    contador_Pessoa++;
  }

  if (j == 0) {

    printf("\n============================================Lista de Tutores Cadastrados===================================================\n");
    printf("\n\nLista vazia !\n\n");
    printf("\n=============================================================================================================\n");

  }
  getchar();
  printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
  printf("=============================================================================================================");
  getchar();
  system("cls");
  Logo();
}
void Atualizar_Pessoa() { // fun��o para atualizar o cadastro dos tutores

  char voltar[1], escolha[1], tentativa[1], tentativaCPF[1];
  char validarCPF[100], auxCPF[100];
  int contador_Pessoa = 0, i, contValidarTutor = 0, validarTutor = 0, p;
  int buscaPessoa;
  int contador_Pessoa_ = 0, j = 0, k = 0;
  int contador = 0, contadorAux = 0;

  for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {
    validarTutor = 1;
    contValidarTutor++;
  }
  if (validarTutor == 0) {
    printf("\n============================================Lista de Tutores ===================================================\n");
    printf("\n\nLista de Tutores Vazia!\n\n");
    printf("\n=============================================================================================================\n");

  } else {

    printf("\n\n=================================================== Editar cadastro de Tutores ===========================================\n\n");

    printf("\n\n=========================================== Lista de Tutores ============================================\n\n");

    for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {

      printf("\n\nNome: %s\n\nCPF: %s\n\nTelefone: %s\n\nEstado: %s\n\nCidade: %s\n\nRua: %s\n\nCEP: %s\n\nChip %d\n\n\n\n\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].telefone, pessoa[i].estado, pessoa[i].cidade, pessoa[i].rua, pessoa[i].cep, pessoa[i].chip);
      printf("=============================================================================================================");
      contador_Pessoa_++;
      contador_Pessoa = 1;

    }

    printf("\n\nBuscar Pessoa\n");
    printf("\n\nDigite o chip do Pessoa:\nChip :");
    scanf("%d", & buscaPessoa);
    for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {

      if (buscaPessoa == pessoa[buscaPessoa].chip) {
        contador_Pessoa = 1;
        p = buscaPessoa;
        i = buscaPessoa;
        j = 1;

        printf("\nEscolha uma op��o:\n1-Mudar o Nome\n2-Mudar o cep\n3-Mudar telefone\n4-Mudar estado\n5-Mudar CPF\n6-Mudar Cidade\n7-Mudar Rua\nOp��o:");
        int opcao;
        scanf("%d", & opcao);
        p = buscaPessoa;
        if (opcao == 1) {
          printf("\n\nDigite o novo Nome :\n ");
          scanf("%s", pessoa[p].nome);

        } else if (opcao == 2) {
          printf("\n\nDigite o novo CEP : \n");
          scanf("%s", pessoa[p].cep);

        } else if (opcao == 3) {
          printf("\n\nDigite o novo Telefone :\n ");
          scanf("%s", pessoa[p].telefone);

        } else if (opcao == 4) {

          printf("\n\nDigite o novo Estado : \n");
          scanf("%s", pessoa[p].estado);

        } else if (opcao == 5) {
          printf("Digite seu CPF: \n");
          scanf("%s", validarCPF);
          strcpy(auxCPF, validarCPF);

          for (i = 0; i < MAX && (strcmp(pessoa[i].cpf, "\0") != 0); i++) {

            if ((strcmp(validarCPF, pessoa[i].cpf) == 0)) {
              printf("\n\nFalha!, cpf ja cadastrado, tente novamente\n\n");
              strcpy(pessoa[i].cpf, validarCPF);
              contador--;
              k = 1;
              printf("\n\nDeseja tentar novamente? S ou N \n");
              scanf("%s", tentativaCPF);
              strdup(tentativaCPF);
              if ((strcmp(tentativaCPF, "S") == 0)) {
                system("cls");
                Atualizar_Pessoa();
              } else {
                system("cls");
                Logo();
              }
            } else {
              strcpy(pessoa[p].cpf, "");
              strcpy(pessoa[p].cpf, auxCPF);
              strcpy(pessoa[p].listaDeAnimaisCPFTutor, auxCPF);
            }

          }

        } else if (opcao == 6) {

          printf("\n\nDigite a nova Cidade : \n");
          scanf("%s", pessoa[p].cidade);

        } else if (opcao == 7) {
          printf("\n\nDigite a nova Rua : \n");
          scanf("%s", pessoa[p].rua);

        } else {
          char op[1];
          printf("\nOp��o invalida ! deseja tentar Novamente ? S/N");
          scanf("%s", op);
          strdup(op);
          if (strcmp(op, "S") == 0) {
            Atualizar_Pessoa();
          } else {
            Logo();
          }
        }

      }
      if (j == 0) {

        printf("\n\nTutor n�o cadastrado, deseja fazer uma nova busca  ? S ou N\n Resposta: ");
        scanf("%s", tentativa);
        strdup(tentativa);
        if ((strcmp(tentativa, "S") == 0)) {
          system("cls");
          Atualizar_Pessoa();

        }

      } else {
        printf("\n\nDeseja Atualizar um novo Tutor? S ou N\n Resposta: ");
        scanf("%s", escolha);
        strdup(escolha);
        if ((strcmp(escolha, "S") == 0)) {
          system("cls");
          Atualizar_Pessoa();
        }

      }

      contador++;
    }

  }

  printf("\n\n=========================================================================================================\n\n");
  getchar();
  printf("Precione ENTER para voltar ao Menu inicial....");
  getchar();
  system("cls");
  Logo();
}
void Adotar() { // fun��o para adotar animais disponiveis

  char buscaPessoa[10], escolha[1], CPFpet[12], novoAdotar[1], tentativa[1], voltar[1];
  int contador_Tutor = 0, i, k = 0, contador = 0, contadorAdotar = 0, contValidarPet = 0, contValidarTutor = 0, validarTutor = 0, validarPet = 0, chipTutor = 0, chipPet = 0, contadoraux = 0;
  int j = 0;

  for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) {
    if (i < MAX && (strcmp(animais[i].vivo, "S") == 0) && (strcmp(animais[i].adotar, "S") != 0) && (strcmp(animais[i].morto, "M") != 0)) {
      validarPet = 1;
      contValidarPet++;
    }
  }
  for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {
    validarTutor = 1;
    contValidarTutor++;
  }
  if (validarPet == 0) {
    printf("\n============================================Adotar===================================================\n");
    printf("\n\nSem Pets disponiveis Para Ado��o !\n\n");
    printf("\n=============================================================================================================\n");

  }
  if (validarTutor == 0) {

    printf("\n============================================Adotar===================================================\n");
    printf("\n\nSem tutores Disponiveis para Adotar !\n\n");
    printf("\n=============================================================================================================\n");

  } else if (validarPet != 0 && validarTutor != 0) {

    printf("\n============================================ Buscar Tutor ===================================================\n");

    printf("\n\nBuscar Tutor\n");
    printf("\n\nDigite o CPF do Pessoa:\nCPF :");
    scanf("%s", buscaPessoa);

    for (i = 0; i < MAX && (strcmp(pessoa[i].cpf, "\0") != 0); i++) {
      if (strcmp(buscaPessoa, pessoa[i].cpf) == 0) {
        printf("\n\n=============================================================Tutor=================================================\n\n");
        printf("\n\nNome: %s\n\nCPF: %s\n\nTelefone: %s\n\nEstado: %s\n\nCidade: %s\n\nRua: %s\n\nCEP: %s\n\nChip %d\n\n\n\n\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].telefone, pessoa[i].estado, pessoa[i].cidade, pessoa[i].rua, pessoa[i].cep, pessoa[i].chip);
        printf("\n\n=========================================================================================================\n\n");
        strcpy(CPFpet, pessoa[i].cpf);
        chipTutor = pessoa[i].chip;

        k = 1;
        contadorAdotar++;

      }

    }
    if (k == 0) {
      printf("\n\nFixa inesistente!\n\n");
      printf("\n\nDeseja tentar novamente ? S ou N\n\n");
      scanf("%s", tentativa);
      strdup(tentativa);
      if (strcmp(tentativa, "S") == 0) {
        system("cls");
        Adotar();
      } else {
        getchar();
        printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
        getchar();
        system("cls");
        Logo();

      }
    }

    for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) {

      if (i < MAX && (strcmp(animais[i].vivo, "S") == 0) && (strcmp(animais[i].adotar, "S") != 0) && (strcmp(animais[i].morto, "N") != 0)) {

        printf("\n\n=============================================================Pets para adotar=================================================\n\n");
        printf("\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nChip %d\n\n\n\n\n", animais[i].nome, animais[i].especie, animais[i].raca, animais[i].sexo, animais[i].peso, animais[i].idade, animais[i].vivo, i);
        printf("=============================================================================================================");
        contador_Tutor++;

      }

    }

    printf("\n\n=================================================================Informe o Chip ================================================================\n\n");
    chipTutor;
    printf("\n\nDigite o chip do pet que deseja adotar\n");
    scanf("%d", & chipPet);

    if (chipPet == animais[chipPet].chip) {
      j = 1;
      printf("\n\nDeseja realmente adotar esse pet?, s ou n :\n");
      scanf("%s", escolha);
      strdup(escolha);

      if ((strcmp(escolha, "S") == 0)) {

        strcpy(animais[chipPet].adotar, escolha);
        printf("Pet adotado com sucesso!\n\n");
        printf("\nChipTutor %d", chipPet);
        strcpy(pessoa[chipPet].listaDeAnimaisCPFTutor, pessoa[chipTutor].cpf);
        strcpy(pessoa[chipPet].listaDeAnimaisNome, animais[chipPet].nome);
        strcpy(pessoa[chipPet].listaDeAnimaisEspecie, animais[chipPet].especie);
        strcpy(pessoa[chipPet].listaDeAnimaisIdade, animais[chipPet].idade);
        strcpy(pessoa[chipPet].listaDeAnimaisMorto, animais[chipPet].morto);
        strcpy(pessoa[chipPet].listaDeAnimaisVivo, animais[chipPet].vivo);
        strcpy(pessoa[chipPet].listaDeAnimaisPeso, animais[chipPet].peso);
        strcpy(pessoa[chipPet].listaDeAnimaisSexo, animais[chipPet].sexo);
        strcpy(pessoa[chipPet].listaDeAnimaisPeso, animais[chipPet].peso);
        strcpy(pessoa[chipPet].listaDeAnimaisRaca, animais[chipPet].raca);

      } else if ((strcmp(escolha, "N") == 0)) {

        printf("\n===============================================================================================\n");
        printf("\n\nOpera��o cancelada  !\n\n");
        printf("\n=============================================================================================================\n");
        getchar();
        printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
        getchar();
        system("cls");
        Logo();
      }
      for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) {

        if (i < MAX && (strcmp(animais[i].vivo, "S") == 0) && (strcmp(animais[i].adotar, "S") != 0) && (strcmp(animais[i].morto, "M") != 0)) {
          printf("\n\nDeseja adotar um novo Pet? S ou N\n Reposta: ");
          scanf("%s", novoAdotar);
          strdup(novoAdotar);
          if ((strcmp(novoAdotar, "S") == 0)) {
            system("cls");
            Adotar();
          } else {
            getchar();
            printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
            getchar();
            system("cls");
            Logo();
          }

          contValidarPet++;
        }
      }
    } else {
      printf("\n\nPet n�o cadastrado! ou j� esta adotado \n\n");
      printf("\n\nDeseja tentar novamente? S ou N\n\n");
      scanf("%s", voltar);
      strdup(voltar);
      if (strcmp(voltar, "S") == 0) {
        system("cls");
        Adotar();
      }

    }

    getchar();
    printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
    getchar();
    system("cls");
    Logo();

  }
  getchar();
  printf("\n\nPrecione ENTER para voltar ao Menu inicial....\n\n");
  getchar();
  system("cls");
  Logo();

}
void Excluir() { // fun��o para excluir cadatro de tutores com animais mortos , se tiver um vivo ele n�o exclui

  char escolha[100], tutorCPF[12], auxiliarTutor[12], auxiliarPet[100], tentativa[1], auxiliarExcluir[12];

  int contadorPet = 0, contadorTutor = 0, i = 0, k, contadorx = 0, j = 0, contadorExcluir = 0, m;

  printf("\n================================================================================Excluir Tutor==================================================================\n");
  printf("\n\nDigite o CPF do tutor  que deseja excluir\nCPF : ");
  scanf("%s", tutorCPF);
  printf("\n==================================================================================================================================================\n");

  for (i = 0; i < MAX && (strcmp(pessoa[i].cpf, "\0") != 0); i++) {

    if (strcmp(tutorCPF, pessoa[i].cpf) == 0) {

      printf("\n================================================================================Tutor Encontrado ==================================================================\n");
      printf("\n\nNome: %s\n\nCPF: %s\n\nTelefone: %s\n\nEstado: %s\n\nCidade: %s\n\nRua: %s\n\nCEP: %s\n\nChip %d\n\n\n\n\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].telefone, pessoa[i].estado, pessoa[i].cidade, pessoa[i].rua, pessoa[i].cep, pessoa[i].chip);
      printf("=============================================================================================================");
      strcpy(auxiliarTutor, pessoa[i].cpf);
      strcpy(auxiliarExcluir, pessoa[i].cpf);
      j = 1;
      contadorTutor++;
      for (k = 0; k < MAX && (strcmp(pessoa[k].listaDeAnimaisCPFTutor, "\0") != 0); k++) {

        if (strcmp(auxiliarTutor, pessoa[k].listaDeAnimaisCPFTutor) == 0) {

          printf("\n\n\nAnimais\n\n\n");
          printf(" \n\n\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\n\n\n\n", pessoa[k].listaDeAnimaisNome, pessoa[k].listaDeAnimaisEspecie, pessoa[k].listaDeAnimaisRaca, pessoa[k].listaDeAnimaisSexo, pessoa[k].listaDeAnimaisPeso, pessoa[k].listaDeAnimaisIdade, pessoa[k].listaDeAnimaisVivo, pessoa[k].listaDeAnimaisMorto);
          printf("\n\n=========================================================================================================\n\n");
          strcpy(auxiliarPet, pessoa[k].listaDeAnimaisVivo);

          contadorPet++;
        }

      }
      if ((strcmp(auxiliarPet, "S") == 0)) {

        printf("\n\nTutor n�o removido! existe animais vivos em seu cadastro\n\n");

      }
      if ((strcmp(auxiliarPet, "S") != 0)) {
        for (i = 0; i < MAX && (strcmp(pessoa[i].cpf, "\0") != 0); i++) {
          if (strcmp(auxiliarExcluir, pessoa[i].cpf) == 0) {
            strcpy(pessoa[i].nome, "");
            strcpy(pessoa[i].cep, "");
            strcpy(pessoa[i].cidade, "");
            strcpy(pessoa[i].estado, "");
            strcpy(pessoa[i].cpf, "");
            strcpy(pessoa[i].rua, "");
            pessoa[i].chip;
            pessoa[i];
            contadorExcluir--;
            printf("\n\nRemovido!\n\n");

          }
        }

      }

    }
    contadorx++;
  }

  if (j == 0) {
    printf("\n\nCPF invalido!, deseja tentar novamente ?  S ou N ");
    scanf("%s", tentativa);
    strdup(tentativa);
    if (strcmp(tentativa, "S") == 0) {
      system("cls");
      Excluir();
    } else {
      system("cls");
      Logo();
    }
  }

  getchar();
  printf("Para voltar ao menu inicial Precione ENTER......");
  getchar();
  system("cls");

  Logo();

}
void BuscarPet_Adotado() { // fun��o para buscar pet pelo nome e exibir seu tutor
  char buscaPet[10], voltar[1], BuscarPessoa[100];
  int contador_Pessoa = 0, i, j = 0, k, contadorListapet = 0, contValidarTutor = 0, validarTutor = 0, contadorPet = 0;

  for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {
    validarTutor = 1;
    contValidarTutor++;
  }
  if (validarTutor == 0) {

    printf("\n============================================Adotar===================================================\n");
    printf("\n\nSem tutores Disponiveis para Buscar !\n\n");
    printf("\n=============================================================================================================\n");

  } else {

    printf("\n============================================ Buscar Pet Adotado ===================================================\n");

    printf("\n\nBuscar Pet Adotado\n");
    printf("\n\nDigite o nome do pet:\nNome : ");
    scanf("%s", buscaPet);

    for (k = 0; k < MAX && (strcmp(pessoa[k].listaDeAnimaisNome, "\0") != 0); k++) {

      if (strcmp(buscaPet, pessoa[k].listaDeAnimaisNome) == 0) {

        printf("\n\n\n\nLista de animais \n\n\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\n\n\n\n", pessoa[k].listaDeAnimaisNome, pessoa[k].listaDeAnimaisEspecie, pessoa[k].listaDeAnimaisRaca, pessoa[k].listaDeAnimaisSexo, pessoa[k].listaDeAnimaisPeso, pessoa[k].listaDeAnimaisIdade, pessoa[k].listaDeAnimaisVivo, pessoa[k].listaDeAnimaisMorto);
        strcpy(BuscarPessoa, pessoa[k].listaDeAnimaisCPFTutor);
        printf("\n\n=========================================================================================================\n\n");
        contadorListapet++;
        j = 1;

        for (i = 0; i < MAX && (strcmp(pessoa[i].nome, "\0") != 0); i++) {

          if (strcmp(BuscarPessoa, pessoa[i].cpf) == 0) {
            printf("\n\n=======================================Tutor========================\n\n");
            printf("\n\nNome: %s\n\nCPF: %s\n\nTelefone: %s\n\nEstado: %s\n\nCidade: %s\n\nRua: %s\n\nCEP: %s\n\nChip %d\n\n\n\n\n", pessoa[i].nome, pessoa[i].cpf, pessoa[i].telefone, pessoa[i].estado, pessoa[i].cidade, pessoa[i].rua, pessoa[i].cep, pessoa[i].chip);
            printf("=============================================================================================================");
            contador_Pessoa++;
          }

        }

      }
    }

    if (j == 0) {
      printf("\n\nPet n�o adotado\n\n");
    }

    printf("\n\n\nDeseja fazer fazer uma nova busca ? S ou N \nEscolha : ");
    scanf("%s", voltar);
    strdup(voltar);
    system("cls");

    if ((strcmp(voltar, "S") == 0)) {
      system("cls");
      BuscarPet_Adotado();
    }
  }
  getchar();
  printf("Precione ENTER para voltar ao Menu inicial....");
  getchar();
  system("cls");
  Logo();

}
void excluirPet() { // excluir pet n�o adotado e nem morto

  char buscaPet[200], voltar[1], escolha[1];
  int contador_Pet = 0, i, j = 0, validarPet = 0, contValidarPet = 0, excluir, opcao;

  printf("\n============================================ Buscar Pet ===================================================\n");
  printf("\n\nDesjea buscar pet pela:\nOp��o 1-Nome \nOp��o 2-Chip\n Op��o : ");
  scanf("%d", & opcao);
  if (opcao == 1) {
    printf("\n\nBuscar Pet\n");
    printf("\n\nDigite o nome do Pet\nNome :");
    scanf("%s", buscaPet);
  }
  if (opcao == 2) {
    printf("\n\nBuscar Pet\n");
    printf("\n\nDigite o chip do Pet\nNome :");
    scanf("%d", & excluir);
  }

  for (i = 0; i < MAX && (strcmp(animais[i].nome, "\0") != 0); i++) {
    if (i < MAX && (strcmp(animais[i].vivo, "S") == 0) && (strcmp(animais[i].adotar, "S") != 0) && (strcmp(animais[i].morto, "S") != 0)) {

      if ((strcmp(buscaPet, animais[i].nome) == 0) || (excluir == animais[i].chip)) {
        printf("\n\nNome: %s\n\nEsp�cie: %s\n\nRa�a: %s\n\nSexo: %s\n\nPeso: %s\n\nIdade: %s\n\nVivo: %s\n\nMorto: %s\n\nChip %d\n\n\n\n\n", animais[i].nome, animais[i].especie, animais[i].raca, animais[i].sexo, animais[i].peso, animais[i].idade, animais[i].vivo, animais[i].morto, i);

        j = 1;
        printf("\n\n=========================================================================================================\n\n");

      }
      if (j == 1) {

        printf("\n\nDigite o chip do pet que deseja excluir\nChip: ");
        scanf("%d", &excluir);

        if (excluir == animais[excluir].chip) {

          printf("\n\nDeseja realmente excluir esse Pet ? S ou N \n");
          scanf("%s", escolha);
          strdup(escolha);
          if ((strcmp(escolha, "S") == 0)) {
            i = excluir;
            printf("\n\nAnimal removido com sucesso!\n\n");
            strcpy(animais[i].nome, "");
            strcpy(animais[i].especie, "");
            strcpy(animais[i].idade, "");
            strcpy(animais[i].raca, "");
            strcpy(animais[i].sexo, "");
            animais[i].chip = 0;
            strcpy(animais[i].peso, "");
            strcpy(animais[i].vivo, "");
            strcpy(animais[i].morto, "");
            strcpy(animais[i].adotar, "");
            animais[i];
            contadorPet--;
          }
          if ((strcmp(escolha, "N") == 0)) {
            printf("\n\nOpera��o cancelada!\n\n");
          }

        } else(excluir != animais[i].chip);
        printf("\n\nChip invalido !\n\n");

      }

    }
    contador_Pet++;
  }

  if (j == 0) {
    printf("\nPet n�o cadastrado, Ou n�o pode ser excluido !\n\n");
    printf("\n\n=========================================================================================================\n\n");

  }
  printf("\n\n\nDeseja fazer fazer uma nova busca ? S ou N \nEscolha : ");
  scanf("%s", voltar);
  strdup(voltar);
  system("cls");

  if ((strcmp(voltar, "S") == 0)) {
    system("cls");
    excluirPet();
  }

  getchar();
  printf("Precione ENTER para voltar ao Menu inicial....");
  getchar();
  system("cls");
  Logo();

}
