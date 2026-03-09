package Java_Day6;

import java.util.Scanner;

// Java 미니 프로그램 (콘솔 계산기)
public class Calculating {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num1, num2, result = 0;
    String oper;

    //사용자에게 첫 번째 숫자, 두 번째 숫자, 연산자를 입력받는다
    System.out.print("숫자1: ");
    num1 = sc.nextInt();
    System.out.print("숫자2: ");
    num2 = sc.nextInt();
    sc.nextLine();
    System.out.print("연산자: ");
    oper = sc.nextLine();

    //연산자의 값에 따라 if문을 수행 결과를 저장
    if(oper.equals("+"))
    {
      result = num1 + num2;
    }
    else if(oper.equals("-"))
    {
      result = num1 - num2;
    }
    else if(oper.equals("*"))
    {
      result = num1 * num2;
    }
    else if(oper.equals("/"))
    {
      result = num1 / num2;
    }

    //결과를 사용자에게 보여준다.
    System.out.println();
    System.out.println("결과: " +result);


  }
}
