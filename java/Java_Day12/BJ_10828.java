package Java_Day12;

//stack 직접 구현 해보기
class MyStack {
  private int[] stack;
  private int top;

  public MyStack(int size) {
    stack = new int[size];
    top = -1;
  }

  public void push(int value) {
    if(top == stack.length -1)
    {
      System.out.println("Stack Overflow");
      return;
    }
    stack[++top] = value;
  }

  public int top() {
    if(isEmpty()) {
      return -1;
    }
    return stack[top];
  }

  public int pop() {
    if(isEmpty()) {
      return -1;
    }
    return stack[top--];
  }

  public boolean isEmpty() {
    return top == -1;
  }

  public int size() {
    return top + 1;
  }
}

public class BJ_10828 {
  public static void main(String[] args) {
    MyStack n = new MyStack(10);

    n.push(1);
    System.out.println(n.top());
    System.out.println(n.size());
    n.push(2);
    System.out.println(n.top());
    System.out.println(n.size());
    n.push(3);
    System.out.println(n.top());
    System.out.println(n.size());

    System.out.println(n.pop());
    System.out.println(n.top());
    System.out.println(n.size());

  }
}
