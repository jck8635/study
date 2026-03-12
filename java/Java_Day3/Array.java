package Java_Day3;

import java.lang.String;
import java.util.Scanner;

public class Array {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    //배열에 숫자 5개를 저장 후 출력
    //그 배열의 합을 구하고 그 배열에서 가장 큰 값을 찾는다.
    int[] arr = new int[5];
    int sum = 0, max;

    for(int i = 0; i < 5; i++)
    {
      arr[i] = sc.nextInt();
      sc.nextLine();
      sum += arr[i];
    }

    max = arr[0];
    for(int i = 0; i < 5; i++)
    {
      System.out.println(arr[i]);
      if(arr[i] > max)
      {
        max = arr[i];
      }
    }

    System.out.println("입력한 5개의 숫자의 합은 " +sum);
    System.out.println("배열에서 가장 큰 값은 " +max);
  }
}
