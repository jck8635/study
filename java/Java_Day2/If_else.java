package Java_Day2;

import java.util.Scanner;

public class If_else {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    /*
    if문 점수 입력 후 90 이상 A, 80 이상 B, 70 이상 C, 60 이상 D, 그 이하는 F를 출력하기

    int score = sc.nextInt();
    sc.nextLine();

    if(score >= 90)
    {
      System.out.println("A");
    }
    else if(score >= 80)
    {
      System.out.println("B");
    }
    else if(score >= 70)
    {
      System.out.println("C");
    }
    else if(score >= 60)
    {
      System.out.println("D");
    }
    else
    {
      System.out.println("F");
    }

     */
    /*
    숫자를 입력하여 짝수 홀수를 판별하는 if문

    int num = sc.nextInt();
    sc.nextLine();

    if(num % 2 == 0)
    {
      System.out.println("짝수입니다.");
    }
    else
    {
      System.out.println("홀수입니다.");
    }
    */

    // 세 수 중 가장 큰 값을 출력하는 if문
    int num1, num2, num3;
    num1 = sc.nextInt();
    num2 = sc.nextInt();
    num3 = sc.nextInt();
    sc.nextLine();

    if(num1 >= num2)
    {
      if(num1 >= num3)
      {
        System.out.println("가장 큰 값은 " +num1);
      }
      else
      {
        System.out.println("가장 큰 값은 " +num3);
      }
    }
    else
    {
      if(num2 > num3)
      {
        System.out.println("가장 큰 값은 " +num2);
      }
      else
      {
        System.out.println("가장 큰 값은 " + num3);
      }
    }
  }
}
