import java.util.Locale;
import java.util.Scanner;

//Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, 
//calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a 
//nota C tem peso 5. Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
//
//Entrada
//O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).
//
//Sa�da
//Imprima a mensagem "MEDIA" e a m�dia do aluno conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e com um espa�o em branco antes e depois da igualdade. Assim como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error"."MEDIA" e a m�dia do aluno conforme exemplo abaixo, com 5 d�gitos ap�s o ponto decimal e com um espa�o em branco antes e depois da igualdade. Utilize vari�veis de dupla precis�o (double) e como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		double a, b, c;
		a = sc.nextDouble();
		b = sc.nextDouble();
		c = sc.nextDouble();

		System.out.printf("MEDIA = %.1f\n", (2 * a + 3 * b + 5 * c) / 10);

		sc.close();

	}

}
