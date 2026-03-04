package Java_Day1;

import java.util.Scanner;

public class Variables {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String name = sc.nextLine();
    int hour = sc.nextInt();
    double score = sc.nextDouble();
    sc.nextLine();

    char grade = 'A';

    System.out.println(name + "님, 배송이 시작됩니다. " + hour + "시에 방문 예정입니다.");
    System.out.println(name + "님, 배송이 완료되었습니다.");

    name = sc.nextLine();
    System.out.println(name + "님의 평균 점수는 " + score + "점입니다.");
    System.out.println(name + "님의 학점은 " + grade + "입니다.");

    boolean pass = true;
    System.out.println("이번 시험에 합격했나요? " + pass);

    double d = 3.14123456789;
    float f = 3.14123456789F;
    System.out.println(d);
    System.out.println(f);

    long l = 1000000000000L;
    l = 1_000_000_000_000L;
    System.out.println(l);
  }
}
