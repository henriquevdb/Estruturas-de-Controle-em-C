#include<stdio.h>

int main(){
	
	int num,div=0,media=0,soma=0;
	
	printf("Escreva uma numero positivo: ");
	scanf("%d",&num);
	soma=soma+num;
	
	while(num!=0){
		if(num>0){
		printf("voce escreveu o numero %d\n",num);
		printf("Escreva um numero da sua media: ");
		scanf("%d",&num);
		div++;
		soma=soma+num;
	}
		else{
			printf("numero negativo tente novamente!!");
			scanf("%d",num);
		}
	}
	
	media=soma/div;
	
	printf("sua media e %d",media);
	
	return 0;
}
