#import <stdio.h>
#import <stdlib.h>
#import <string.h>
#import <stdbool.h>
//cores

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"


//entidade pessoa -- struct;
struct Pessoa {
    int id, idade, responsavel, dependentes, cargo;
    char cpf[15], nome[50], senha[16];
    bool carencia;
    
};
struct Ingresso {
	int id, cliente,peca,assento;
};

struct Assento {
	int id;
	bool ocupado;
};
struct Peca {
	int id, dia, mes, ano, horas, minutos ;
	char nome[30],*pNome;
	float preco;
};

int main() {
    //FILE *fPessoa, *fIngresso, *fAssento;
    int loop, indexPessoa=0, counterDisponivel = 1, qtdIngresso = 0, i=0;
    
	//inicializa array de struct cadeira, test mode
    struct Pessoa *pessoa = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    struct Assento *assento = (struct Assento*)malloc(sizeof(struct Assento));
    struct Peca *peca = (struct Peca*)malloc(sizeof(struct Peca));
    struct Ingresso *ingresso = (struct Ingresso*)malloc(sizeof(struct Ingresso));
	//inicio da intera��o com o usu�rio
	printf("Compra de ingressos \n");
	//init pe�a
	peca[0].id = 1;
	peca[1].id = 2;
	peca[2].id = 3;
	peca[0].pNome = &peca[0].nome;
	peca[0].pNome = "Test";
	//[30] = "Peca teste 1\0"
	printf("%s \n%d \n\n\n\n", peca[0].nome, peca[0].pNome);
	peca[1].nome[30] = "Teatro magico\0";
	peca[2].nome[30] = "Barbixas\0";
	peca[0].preco = 60.00;
	peca[1].preco = 40.00;
	peca[2].preco = 28.99;
	peca[0].dia = 22;
	peca[1].dia = 12;
	peca[2].dia = 04;
	peca[0].mes = 02;
	peca[1].mes = 02;
	peca[2].mes = 02;
	peca[0].ano = 2018;
	peca[1].ano = 2018;
	peca[2].ano = 2018;
	peca[0].horas = 14;
	peca[1].horas = 13;
	peca[2].horas = 20;
	peca[0].minutos = 00;
	peca[1].minutos = 30;
	peca[2].minutos = 45;
	//captura de dados
	//nome
	printf("Para autorizar a compra de ingressos, precisamos de suas informacoes pessoais\n\n");
	printf("Digite seu nome \n");
	scanf("%[^\n]s", &pessoa[indexPessoa].nome);
	printf("Digite seu CPF com pontuacao\n");
	scanf("%s", &pessoa[indexPessoa].cpf);
	printf("digite sua idade\n");
	scanf("%d", &pessoa[indexPessoa].idade);
	printf("Digite o numero correspondente a sua ocupacao\n");
	printf("1-Cliente Comum\n2-Estudadte\n3-Professor\n");
	scanf("%d", &pessoa[indexPessoa].cargo);
		
//	system("cls");
	printf("escolha sua peca digitando o numero correspondente\n");
	
	for (loop = 0; loop < 3; loop++){
		printf("---------------");
		printf("%d - %s \n",peca[loop].id, peca[loop].nome);
		printf("Data e hora: \n %d/%d/%d - %d:%d\n", peca[loop].dia,peca[loop].mes,peca[loop].ano,peca[loop].horas,peca[loop].minutos);
	}
	scanf("%d", &ingresso[0].peca);
	printf("\nid da peca na struct ingresso: %d \n\n\n", ingresso[0].peca);
	ingresso[0].cliente = pessoa[indexPessoa].id;
	
	loop = 0;
	
	
	
	
		
    printf("Digite o n�mero da cadeira desejada\n");
    
    for (loop=0; loop < 200 ; loop++){
    	assento[loop].id = loop+1;
    	//INICIALIZA ASSENTOS 
    	if (loop % 3==0) {
    		assento[loop].ocupado = true;
		}else {
			assento[loop].ocupado = false;
		}
		
		
	    //Imprime apenas os assentos livres
		
		if (assento[loop].ocupado == 1){
		}else {
			if(loop < 9){
				printf("   ");
			}else if(loop < 99){
				printf("  ");
			}else{
				printf(" ");
			}
			printf("%d ", assento[loop].id);
			counterDisponivel++;
			
		}
		//QUEBRA LINHA A CADA 20 ASSENTOS IMPORESSOS
		if((counterDisponivel) % 20==0){
			printf("\n");
		}
		
	}
	
	scanf("\n%d", &ingresso[0].assento);
	printf("teste 1\n");
//    system("CLS");
    printf("dados do ingresso\n id: %d\n id do cliente: %d\n id da peca: %d\n assento: %d\n", ingresso[0].id, ingresso[0].cliente, ingresso[0].peca, ingresso[0].assento);
    printf("numero do ingresso: %d\n ",ingresso[0].id);
    printf("Nome da peca: %s\n", peca[ingresso[0].peca].nome);
    printf("Numero do assento: %d\n", ingresso[0].assento);
    printf("Dados do cliente");
    printf("Nome: %s\n", pessoa[ingresso[0].cliente].nome);
    printf("Documento: %s\n", pessoa[ingresso[0].cliente].cpf);
    printf("Valor do ingresso: %f\n", peca[ingresso[0].peca].preco);
    
    

    system("PAUSE");
    return 0;
}

//faz uma busca dos usuários cadastrados para um 'login', retorna o struct todo
int procura_pessoa(){
	
}
//cadastro de usuario
void cadastra_usuario(){
	
}
//cadastro da peça de teatro
void cadastra_peca(){
	
}
// busca de ingresso, não retorna nada pois já imprime da tela, se mais de um ingresso vinculado, se repete.
void procura_ingresso(){
	
}
//faz a busca dos assentos, retorna o ID do assento e se o assento está ocupado
int procura_assento(){
	
}
