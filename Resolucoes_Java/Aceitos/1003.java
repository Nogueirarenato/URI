import java.util.Scanner;

//Leia dois valores inteiros, no caso para vari�veis A e B. A seguir, calcule a soma entre elas e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel.
//
//Entrada
//O arquivo de entrada cont�m 2 valores inteiros.
//
//Sa�da
//Imprima a mensagem "SOMA" com todas as letras mai�sculas, com um espa�o em branco antes e depois da igualdade seguido pelo valor correspondente � soma de A e B. Como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".
//

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int a;
		int b;
		a = sc.nextInt();
		b = sc.nextInt();
		System.out.printf("SOMA = %d\n", (a + b));

		sc.close();

	}

}
