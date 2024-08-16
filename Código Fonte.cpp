#include <stdio.h>
#include <stdlib.h>
#include <string.h>



	int senha=123;
	int novaSenha, novaSenha2;


void opcao1(){
	system("cls");
	
	FILE *fp;
	
	char texto[1000];
	//char letra;
	printf("Digite um texto de ate 1000 caracteres: ");
	
	//scanf("%s", &texto);
	
	fflush(stdin);
	fgets(texto, 1000, stdin);
	texto[strcspn(texto, "\n")] = '\0';


	
	for(int i=0; i<=1000;i++){  		
   		if (texto[i] == 'u') {
           texto[i] = '©';
       	}else{
       		if(texto[i] == 'v'){
       			texto[i] = '¢';
			   }else{
			   	if(texto[i]=='x'){
			   		texto[i]='¥';
				   }else{
				   	if(texto[i]=='y'){
				   		texto[i]='£';
					   }else{
					   	if(texto[i]=='z'){
					   		texto[i]=',';
						   }else{
						   	if(texto[i]==','){
						   		texto[i]='z';
							   }else{
							   	if(texto[i]=='.'){
							   		texto[i]=';';
								   }else{
								   	if(texto[i]==';'){
								   		texto[i]='.';
									   }else{
									   	if(texto[i]=='?'){
									   		texto[i]='!';
										   }else{
										   	if(texto[i]==' '){
										   		texto[i]='ß';
											   }else{
											   	if(texto[i]=='0'){
											   		texto[i]=' ';
												   }else{
												   	if(texto[i]=='w'){
												   		texto[i]='1';
													   }else{
										   				texto[i] = texto[i] + 1;										   												   													   														   	
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	//printf("%s", texto);
	//printf("¢ ¥ £");
	
	printf("Mensagem decodificada com sucesso!");
	
	fp= fopen("D:\\Faculdade\\228550\\Arquivos\\codificar.txt","w");
	fprintf(fp,"%s \n", texto);
	fclose(fp);
}

void opcao2(){
	system("cls");
	
	char decod[1000];
	
	FILE *fp;
	
	fp= fopen("D:\\Faculdade\\228550\\Arquivos\\codificar.txt","r");
	
	rewind(fp);
	printf("O conteudo do arquivo decodificado e:\n");
	
		//while (!feof(fp)){
		//fscanf(fp, "%s", &decod);
		
		while (fgets(decod, sizeof(decod), fp) != NULL) {
   		decod[strcspn(decod, "\n")] = '\0';

		
		/*for(int i=0; i<=1000;i++){
		decod[i] = decod[i] - 1;
		if(decod[i] == '\n'){1
			break;
		}*/
		
			for(int i=0; i<=1000;i++){  		
			   	if (decod[i] == '©') {
			           decod[i] = 'u';
			       	}else{
			       		if(decod[i] == '¢'){
			       			decod[i] = 'v';
						   }else{
						   	if(decod[i]=='¥'){
						   		decod[i]='x';
							   }else{
							   	if(decod[i]=='£'){
							   		decod[i]='y';
								   }else{
								   	if(decod[i]==','){
								   		decod[i]='z';
									   }else{
									   	if(decod[i]=='z'){
									   		decod[i]=',';
										   }else{
										   	if(decod[i]==';'){
										   		decod[i]='.';
											   }else{
											   	if(decod[i]=='.'){
											   		decod[i]=';';
												   }else{
												   	if(decod[i]=='!'){
												   		decod[i]='?';
													   }else{
													   	if(decod[i]=='ß'){
													   		decod[i]=' ';
														   }else{
														   	if(decod[i]==' '){
														   		decod[i]='0';
															   }else{
															   	if(decod[i]=='1'){
															   		decod[i]='w';
																   }else{
													   				decod[i] = decod[i] - 1;										   												   													   														   	
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
	
	
	}
		
		if(!feof(fp)) {
		printf("%s", decod);
		}
	}


}

void teste(){
	system("cls");
	
	char teste[44];
	
	FILE *fp;
	
	fp= fopen("D:\\Faculdade\\228550\\Arquivos\\teste.txt","r");
	
	rewind(fp);
	
	/*printf("O conteudo escrito neste arquivo e:\n\n");
		while (!feof(fp)){
		fscanf(fp, "%s", &teste);
		if(!feof(fp)) printf("%s", teste);
	}*/ 
	
	printf("O conteudo escrito neste arquivo e:\n\n");
    while (fgets(teste, sizeof(teste), fp) != NULL) {
        printf("%s", teste);
    }
	

}

void trocaSenha(){
	system("cls");
	
	do{
	printf("DIGITE A SUA NOVA SENHA: ");
	scanf("%d", &novaSenha);
	printf("\nDIGITE NOVAMENTE: ");
	scanf("%d", &novaSenha2);
	
	if(novaSenha != novaSenha2){
		system("cls");
		printf("AS DUAS SENHAS DIGITADAS SAO DIFERENTES! DIGITE NOVAMENTE!\n");
	}
	
	}while(novaSenha != novaSenha2);
	
	if(novaSenha == novaSenha2){
		senha = novaSenha;
	}
	
	system("cls");
}


void menu(){
	system("cls");
	
	int opcao;
	printf("1. CODIFICAR");
	printf("\n2. DECODIFICAR");
	printf("\n3. TESTE");	
	printf("\n4. SENHA");
	printf("\n5. SAIR\n");

	scanf("%d", &opcao);
	

	switch(opcao){
		case 1:
			opcao1();
			break;
		case 2:
			opcao2();
			break;
		case 3:
			teste();
			break;
		case 4:
			trocaSenha();
			break;
		case 5:
			printf("FIM DO PROGRAMA...");
			break;
			
		default:
			printf("Valor Invalido!");
	}


}



int main(){
	int senhaDigitada;
	
	do{
	printf("Digite a Senha: ");
	scanf("%d", &senhaDigitada);
		
	
	if(senhaDigitada==senha){
		menu();
	}else{
		system("cls");
		printf("SENHA INCORRETA! Digite novamente!\n");
	}
	}while(senha!=senhaDigitada);

}
