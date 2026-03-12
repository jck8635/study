package Java_Day8;

import java.util.Scanner;

//문제 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
public class BJ_1330 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int A, B;
    A = sc.nextInt();
    B = sc.nextInt();
    sc.nextLine();

    if(A > B)
    {
      System.out.println(">");
    }
    else if(A < B)
    {
      System.out.println("<");
    }
    else
    {
      System.out.println("==");
    }
  }
}
