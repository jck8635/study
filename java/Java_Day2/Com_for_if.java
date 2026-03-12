package Java_Day2;

import java.util.Scanner;

public class Com_for_if {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // 숫자 N 입력하여 N까지의 3의 배수 출력하고 개수도 마지막에 같이 출력하는 for if문 결합
    int N = sc.nextInt();
    int num = 0;
    sc.nextLine();

    for(int i = 1; i <= N; i++)
    {
      if(i % 3 == 0)
      {
        System.out.println(i);
        num++;
      }
    }
    System.out.println(num);
  }
}
