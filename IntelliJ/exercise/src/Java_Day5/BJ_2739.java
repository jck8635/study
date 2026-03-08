package Java_Day5;

import java.util.Scanner;

public class BJ_2739 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    for(int i = 1; i <= 9; i++)
    {
      for(int j= 1; j <= 9; j++)
      {
        System.out.println(i+ " * " + j + " = " + i * j);
      }
    }
  }
}
