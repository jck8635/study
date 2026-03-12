package Java_Day2;

import java.util.Scanner;

public class For_while {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    /*
    1~100까지의 합을 출력하는 for문
    int sum = 0;
    for(int i = 1 i <= 100; i++)
    {
      sum += i;
    }

    System.out.println(sum);
     */
    /*
    구구단 출력 for문
    int mul;
    for(int i = 1; i < 10; i++)
    {
      for(int j = 1; j < 10; j++)
      {
        mul = i * j;
        System.out.println(i + " * " + j + " = " + mul);
      }
    }
     */

    /*
    1~N 까지 홀수만 출력하는 for문

    int N = sc.nextInt();
    sc.nextLine();

    for(int i = 1; i <= N; i++)
    {
      if(i % 2 == 1)
      {
        System.out.println(i);
      }
    }

    for(int i = 1; i <= N; i += 2)
    {
      System.out.println(i);
    }
    */

    //1~N까지의 홀수만 출력 while문을 사용
    int N = sc.nextInt();
    sc.nextLine();

    int i = 1;
    while(i <= N)
    {
      if(i % 2 == 1)
      {
        System.out.println(i);
      }

      i++;
    }
  }
}
