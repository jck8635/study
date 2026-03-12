package Java_Day5;

import java.util.Scanner;

public class BJ_1330 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int A = sc.nextInt(), B = sc.nextInt();
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
