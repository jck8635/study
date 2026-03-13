package Java_Day10;

import java.util.Scanner;
//요리를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.
//시간은 0~24 분은 0~60까지 나타낼 수 있다.
public class BJ_2525 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int A = sc.nextInt(), B = sc.nextInt(), C = sc.nextInt();

    if(B+C >= 60)
    {
      A = A + ((B + C) / 60);
      if(A >= 24)
      {
        A -= 24;
      }
    }

    B = (B + C) % 60;

    System.out.println(A+ " " +B);
  }
}
