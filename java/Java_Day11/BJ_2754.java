package Java_Day11;

import java.util.Scanner;
//어떤 사람의 C언어 성적이 주어졌을 때, 평점은 몇 점인지 출력하는 프로그램을 작성하시오.
//A+: 4.3, A0: 4.0, A-: 3.7
//B+: 3.3, B0: 3.0, B-: 2.7
//C+: 2.3, C0: 2.0, C-: 1.7
//D+: 1.3, D0: 1.0, D-: 0.7
//F: 0.0
public class BJ_2754 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String grade = sc.nextLine();

    if(grade.equals("A+"))
      System.out.println(4.3);
    else if(grade.equals("A0"))
      System.out.println(4.0);
    else if(grade.equals("A-"))
      System.out.println(3.7);
    else if(grade.equals("B+"))
      System.out.println(3.3);
    else if(grade.equals("B0"))
      System.out.println(3.0);
    else if(grade.equals("B-"))
      System.out.println(2.7);
    else if(grade.equals("C+"))
      System.out.println(2.3);
    else if(grade.equals("C0"))
      System.out.println(2.0);
    else if(grade.equals("C-"))
      System.out.println(1.7);
    else if(grade.equals("D+"))
      System.out.println(1.3);
    else if(grade.equals("D0"))
      System.out.println(1.0);
    else if(grade.equals("D-"))
      System.out.println(0.7);
    else if(grade.equals("F"))
      System.out.println(0.0);

  }
}
