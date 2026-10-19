#include<stdio.h>

int main(){
	
	int num;
	
	printf("Escreva uma numero: ");
	scanf("%d",&num);
	
	while(num>=0){
		printf("o numero %d e positivo\n\n",num);
		printf("Escreva uma numero: ");
		scanf("%d",&num);
	}
	
	printf("o numero %d e negativo",num);
	
	return 0;
}
