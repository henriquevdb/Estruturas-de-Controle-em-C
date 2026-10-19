#include<stdio.h>

int main(){
	
	int num, adicao=0, produto=1;
	
	printf("Escreva um numero: ");
	scanf("%d",&num);
		if(num%2==0){
			adicao=adicao+num;
		}
		else{
			produto=produto*num;
		}
	
	while(num!=0){
		
		printf("Escreva um numero: ");
		scanf("%d",&num);
		
		if(num%2==0){
			adicao=adicao+num;
		}
		else{
			produto=produto*num;
		}
	}
	
	printf("sua adicao de pares e %d\n",adicao);
	printf("seu produto de impares e %d",produto);
	
	return 0;
}
