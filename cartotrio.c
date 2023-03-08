#include <stdio.h> //bliblioteca de comunicacao com usuario
#include <stdlib.h> //biblioteca de alocacao de memoria 
#include <locale.h> //alocacao de texto por regiao
#include <string.h> //responsavel pela strings

int registrar()//função de cadastro
{
    char arquivo[40];//variaveis/informações necessarias/pedidas
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o Cpf a ser cadastrado: \n");//informações coletadas
	scanf("%s", cpf);//%s = strings
	
	strcpy(arquivo, cpf); //copiar os valores das strings
	
	FILE *file; //criação de arquivo
	file =	fopen(arquivo, "w"); //arquivo criado e mudei o nome "W"= escrever no arquivo
	fprintf(file,cpf);//salvar no arquivo
	fclose(file);//fechar arquivo
	
	file = fopen(arquivo, "a"); //"a" atualizar informação
	fprintf(file,", ");	//"," virgula entre informaçoes
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: \n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //"a" atualizar informação
	fprintf(file,", ");	//"," virgula entre informaçoes
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: \n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //"a" atualizar informação
	fprintf(file,", ");	//"," virgula entre informaçoes
	fclose(file);
	
	printf("Digite o seu cargo : \n");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a"); //"a" atualizar informação
	fprintf(file,", ");	//"," virgula entre informaçoes
	fclose(file);
	
	system("pause");
		
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); // \n pular linha; \t espaçamento definindo linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Não foi localizado o cpf consultado \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Informações encontradas:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
    system("pause");



}
 	

int deletar(){
     
     char cpf[40];
     
     printf("Digite o cpf a ser deletado:");
     scanf("%s", cpf);
     
     remove(cpf);
     
     FILE *file;
     file = fopen(cpf, "r");
     
     if(file == NULL){
	 
     printf("\nUsuario não encontrado.");
     system("pause");
     
 }
     
    
}

int main()
{
	int opcao=0; //variavel
	int laco=1;
	
	for(laco=1;laco=1;){
		 
		system("cls");
	
	setlocale(LC_ALL, "Portuguese"); // \n pular linha; \t espaçamento definindo linguagem
	
	printf("\tCartório da Ebac \n\n");
	printf("Escolha a opção desejada do menu:\n\n");
	printf("\t1 Registrar nome\n ");
	printf("\t2 Consultar nome\n");
	printf("\t3 Deletar nome\n\n ");
	printf("Opção: ");
	
	scanf("%d", &opcao);//armazenamento
	
	system("cls"); //apagar tela anterior
	
	switch(opcao){
		
		case 1:
		registrar();
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Opcao indisponivel \n");
		system("pause");
		break;	
			
//	}
//	if(opcao==1){ 
//		printf("Escolheu registrar um nome \n");
//		system("pause");
//	}
//	if(opcao==2){
//		printf("Escolheu consultar um nome \n");
//		system("pause");
//	}
//	if (opcao==3){
//		printf("Escolheu deletar um nome \n");
//		system("pause");
//	if (opcao>=4 || opcao<=0){
//		printf("Opcao indisponivel \n");
//		system("pause");
	}
 }
}

