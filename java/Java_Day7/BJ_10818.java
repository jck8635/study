package Java_Day7;

import java.util.Scanner;

public class BJ_10818 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt(), min = 1000000, max = -1000000;
    sc.nextLine();

    int[] num = new int[N];

    for(int i = 0; i < N; i++)
    {
      num[i] = sc.nextInt();
      if(num[i] > max)
      {
        max = num[i];
      }
      if(num[i] < min)
      {
        min = num[i];
      }
    }
    sc.nextLine();

    System.out.println(min+ " " +max);

  }
}
