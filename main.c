#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//case
	
	int exe;
	
	//exe1
	int x1;
	char nome1[20];
	
	//exe2
	int telefone2;
	char nome2[20],endereco2[40];
	
	//exe3
	int idade3;
	char nome3[20],sexo3;
	
	//exe4
	
	char nome4[20];
	 
	//exe5
	int numeroint;
	
	//exe6
	float valor;
	//exe7
	float kw,kwcada,kwtotal,kwdesconto,salariomin;
	//exe8
	float preco,precodesconto;
	//exe9
	float valor1,valorjuros;
	int xx;
	//exe10
	float salarioliq,valhoraaula,inss;
	int auladada;
	
	
	
	//exe11
	int interc,interf,cont;
	
	
	
	//exe12
	int xf;
	
	
	
	//exe13
	int xz,soma;
	
	
	//exe14
	int v1,v2,so;
	
	//exe15
	int num;
	//exe16
	int number;
	//exe17
	int nn,xi,prod=1;
	
	//exe18
		int ca=8,cb=9,cc=12;
		char modelo;
		float km,kmtotal;
	
	
do{
	printf("\t\t\nLista de exercícios\n"); 
	printf("Digite 1 para exercício 1\n"); 
	printf("Digite 2 para exercício 2\n"); 
	printf("Digite 3 para exercício 3\n");
	printf("Digite 4 para exercício 4\n");
	printf("Digite 5 para exercício 5\n");
	printf("Digite 6 para exercício 6\n");
	printf("Digite 7 para exercício 7\n");
	printf("Digite 8 para exercício 8\n");
	printf("Digite 9 para exercício 9\n");
	printf("Digite 10 para exercício 10\n");
	printf("Digite 11 para exercício 11\n");
	printf("Digite 12 para exercício 12\n");
	printf("Digite 13 para exercício 13\n");
	printf("Digite 14 para exercício 14\n");
	printf("Digite 15 para exercício 15\n");
	printf("Digite 16 para exercício 16\n");
	printf("Digite 17 para exercício 17\n");
	printf("Digite 18 para exercício 18\n");
	printf("Digite 0 para SAIR\n");

	scanf("%d", &exe);

	switch(exe){
	
	case 1:
		
		
		printf("Digite o nome: ");
		scanf("%s",&nome1); 
		printf("\n");
			
		for(x1=1;x1<=10;x1++){
			
			
			printf("%s \n",nome1);
			printf("\n");
			
		}
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 2:
		printf("Digite o nome: \n");
		scanf("%s",&nome2);
		fflush(stdin);
		
		printf("Digite o endereco: \n");
		scanf("%s",&endereco2); 
		fflush(stdin);
		
		printf("Digite o telefone: \n");
		scanf("%d",&telefone2); 
		fflush(stdin);
		
		printf("\n %s \n",nome2);
		printf("\n");
		
		printf("\n %s \n",endereco2);
		printf("\n");
		
		printf("\n %d \n",telefone2);
		printf("\n");
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 3:
		printf("Digite o nome: \n");
		scanf("%s",&nome3);
		fflush(stdin);
		
		printf("Informe sexo(F/M): \n");
		scanf("%c",& sexo3);
		fflush(stdin);
		
		printf("Digite a idade: \n");
		scanf("%d",&idade3);
		fflush(stdin);
		
		if(sexo3 == 'f'|| sexo3== 'F' && idade3<25){
			printf("\n%s \n",nome3);
			printf("\nACEITA \n");
			
		}else{
			printf("\nNAO ACEITA \n");
		}
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 4:
	
		printf("Digite o nome: \n");
		scanf("%s",&nome4);
		int contador4 = strlen(nome4);
		
		printf("\nSeu nome tem:%d letras! \n",contador4);
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 5:
		
		printf("Digite um numero: \n");
		scanf("%d",&numeroint);
		
		int na = numeroint - 1;
		int	ns = numeroint + 1;
		
		printf("\nAntecessor:%d Sucessor:%d \n",na,ns);
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 6:
		
		printf("Digite um valor: \n");
		scanf("%f",&valor);
		
		float reajuste = valor+(valor/10);
		
		printf("\nValor com reajuste:%2.f\n",reajuste);
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 7:
		
		
		printf("Digite o salario minino: \n");
		scanf("%f",&salariomin);
		
		printf("Digite a quantidade de KW gasta: \n");
		scanf("%f",&kw);
		
		
		kwcada=(salariomin/7)/100;
		
		kwtotal=kwcada*kw;
		
		kwdesconto=kwtotal-(kwtotal*0.1);
		
		
		printf("Com o salario minimo de %.2f \n",salariomin);
		printf("O valor de cada KW e %.2f \n",kwcada);
		printf("O valor total de KW e %.2f \n",kwtotal);
		printf("O valor total de KW com desconto de 10 porcento e %.2f \n",kwdesconto);
		
				
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 8:
	
		printf("Informe o preco do produto \n");
		scanf("%f",&preco);
		
		precodesconto=preco-(preco*0.09);
		
		printf("O valor do produto com desconto e %.2f \n",precodesconto);
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 9:
		
	
	
		printf("Digite um valor \n");
		scanf("%f",&valor1);
		
		valorjuros=valor1+(valor1*0.15);
		
		for(xx=0;xx<5;xx++){
			
			printf("O valor com juros do mes %.2f \n",valorjuros);
			
			valorjuros+=(valor1*0.15);		
			
			
		}
		
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 10:
		
		
		printf("Digite o valor da hora aula \n");
		scanf("%f",&valhoraaula);
		
		printf("Digite a quantidade de aulas dadas no mes \n");
		scanf("%d",&auladada);
		
		salarioliq=valhoraaula*auladada;
		
		inss=salarioliq-(salarioliq*0.08);
		
		printf("O salario liquido foi de %.2f \n",inss);
		
		
	
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 11:
	
		printf("Digite dois numeros \n");
		scanf("%d %d",&interc,&interf);
		
		for(cont=interc;cont<interf;cont++){
			
			float rest=cont%2;
			
			if(rest==0){
				
				printf("%d \n",cont);
				
			}
			
			
			
			
		}
		
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 12:
	
				
		for(xf=15;xf<=200;xf++){
			
			float raiz = sqrt(xf);
			
			printf("A raiz de %d e %.2f \n",xf,raiz);
			
			
		}
		
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 13:
		
		
		for(xz=1;xz<=100;xz++){
			
			soma+=xz;
				
			
		}
		
		printf("A soma total dos numero e %d \n",soma);
		
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 14:

		printf("Digite um valor \n");
		scanf("%d",&v1);
		
		printf("Digite um valor \n");
		scanf("%d",&v2);
		
		so=v1+v2;
		
		if(so>10){
			printf("A soma de %d e %d foi de %d \n",v1,v2,so);
			
		}
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 15:
		
		printf("Informe um numero: \n");
		scanf("%d",&num);
		
		
		if (num>0)
 			printf("A raiz quadrada de %d e %.2f \n",num,sqrt(num));
		else
			printf("O quadrado do numero %d e:%.2f \n",num,pow(num,2));
			
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 16:
		
		
		printf("Digite um numero: \n");
		scanf("%d",&number);
		
		if(number>=20 && number<=80){
				
			printf("Parabens \n");
		}else{
			
			printf("Fora do intervalo \n");
			
		}
		
		
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 17:
	
		
		printf("Digite um numero \n");
		scanf("%d",&nn);
		
			
		
		for(xi=1;xi<=nn;xi++){
			
			printf("%d \n",xi);
			prod=prod*xi;
			
		}
		
		printf("O produto total dos numero e %d \n",prod);
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	case 18:
		
		fflush(stdin);
		
		printf("Escolha o modelo (a,b,c) \n");
		scanf("%c",&modelo);
		
		fflush(stdin);
		
		printf("Digite o km percorrido \n");
		scanf("%f",&km);
		
				
		if(modelo=='a'||modelo=='A'){
			
			kmtotal=km*ca;
			
			printf("Consumo total foi de %.2f \n",kmtotal);
			
			
		}
		else if(modelo=='b'||modelo=='B'){
			
			kmtotal=km*cb;
			
			printf("Consumo total foi de %.2f \n",kmtotal);
			
			
		}
		else if(modelo=='c'||modelo=='C'){
			
			kmtotal=km*cc;
			
			printf("Consumo total foi de %.2f \n",kmtotal);
			
			
		}
		
		
		
		
		
			
			
		
		
		
		
		
		
	
		system("pause");

		system("cls || clear");
	
	break;
	
	
	case 0:

		system("cls || clear");

	break;

	default:

		system("cls || clear"); 
		printf("tente novamente\n");

	
	
	}
	
	
	
	
	}while(exe);
	
	
	system("pause");
	
	return 0;
}
