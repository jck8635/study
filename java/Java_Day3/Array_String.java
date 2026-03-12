package Java_Day3;

import java.util.Scanner;

public class Array_String {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    //문자열 하나를 입력받아 문자 하나씩 출력하는 for문
    String str = sc.nextLine();

    for(int i = 0; i < str.length(); i++)
    {
      System.out.println(str.charAt(i));
    }
  }
}
