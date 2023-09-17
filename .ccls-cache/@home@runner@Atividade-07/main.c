//1
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//   char c='a';
//   char *pc=&c;
//   printf("a) endereço de c %p\n",&c);
//   printf("b) valor de pc %c\n",*pc);
//   printf("c) endereço de pc %p\n",&pc);
//   return 0;
// }
//2
// #include <stdio.h>
// #include <stdlib.h>
// int main(void){
//   int inteiro;
//   float real;
//   char caract = 'a';

//   printf("Informe o valor inteiro : ");
//   scanf("%d",&inteiro);
//   printf("Informe o valor real ");
//   scanf("%.2f",&real);

//   printf("O valor do inteiro : %d\n",inteiro);
//   printf("O valor do número real é : %f\n",real);
//   printf("O valor do caracter é  : %c\n",caract);
//   int *inter=&inteiro;
//   *inter =12;
//   float *flo=&real;
//   *flo =2.5;
//   char *chare=&caract;
//   *chare ='c';
//   printf("O valor do inteiro modificado é : %d\n",inteiro);
//   printf("O valor do número real modificado é : %lf\n",real);
//   printf("O valor do caracter modificado é : %c",caract);
//   return 0;
// }
//3
// #include <stdio.h>
// #include <stdlib.h>
// int main (void){
//   int num1,num2;
//   printf("Informe o num 1 : ");
//   scanf("%d",&num1);
//   printf("Informe o num 2 : ");
//   scanf("%d",&num2);
//   int *num_1=&num1;
//   int *num_2=&num2;
//   printf("O valor da variavel num 1 é : %p",&num1);
//   printf("O valor da variavel num 2 é : %p",&num2);
// }
//4
// o 4 eu não consegui fazer.
//
// #include <stdio.h>
// #include <stdlib.h>
// int trocar(int *a, int *b){
//   int temp=*a;
//   *a=*b;
//   *b=temp;
// }
// int main (){
//   int num1,num2;
//   printf("Digite o primeiro número inteiro: ");
//   scanf("%d", &num1);
//   printf("Digite o segundo número inteiro: ");
//   scanf("%d", &num2);
//   trocarValores(&num1, &num2);
//   printf("Valores após a troca:\n");
//   printf("Primeiro número: %d\n", num1);
//   printf("Segundo número: %d\n", num2);
//   return 0;
// }
//5
// #include <stdio.h>
// #include <stdlib.h>
// int dobrar(int numero){
//   return 2* numero ;
// }
// int main(void){
//   int A,B;
  
//   printf("Informe o valor de A : ");
//   scanf("%d",&A);
//   printf("Informe o valor de B : ");
//   scanf("%d",&B);
//   int dobroA= dobrar(A);
//   int dobroB= dobrar(B);
//   int soma=dobroA+dobroB;

//   printf("O dobro de A : %d",dobroA);
//   printf("O dobro de B: %d\n",dobroB);
//   printf("A soma deles: %d",soma);
//   return 0;
// }
//6
// #include <stdio.h>
// #include <stdlib.h>
// int calcularSoma(int *A,int B){
//   *A=*A+B;

// }
// int main (void){
//   int A, B;
//     printf("Digite o valor de A: ");
//     scanf("%d", &A);
//     printf("Digite o valor de B: ");
//     scanf("%d", &B);
//     printf("Valores de A e B antes da função:\n");
//     printf("A: %d\n", A);
//     printf("B: %d\n", B);
//     calcularSoma(&A, B);
//     printf("Valores de A e B após a função:\n");
//     printf("A: %d\n", A);
//     printf("B: %d\n", B);
//     return 0;
// }