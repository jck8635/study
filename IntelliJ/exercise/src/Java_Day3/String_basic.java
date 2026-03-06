package Java_Day3;

public class String_basic {
  public static void main(String[] args) {
    java.lang.String s = "hello";

    //문자열 길이 출력
    System.out.println(s.length());
    //첫 번째 문자 출력
    System.out.println(s.charAt(0));

    //for문을 통해 문자열 전체 문자 하나씩 출력
    for(int i = 0; i < s.length(); i++)
    {
      System.out.println(s.charAt(i));
    }
  }
}
