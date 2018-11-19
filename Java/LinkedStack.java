// Made by TheKinGoD

import java.util.Scanner;

public class LinkedStack<Integer> {

  private static SinglyLinkedList<java.lang.Integer> list = new SinglyLinkedList<>(); // an empty list
  public LinkedStack() { } // new stack relies on the initially empty list
  public static int size() { return list.size(); }
  public static boolean isEmpty() { return list.isEmpty(); }
  public static void push(java.lang.Integer element) { list.addFirst(element); }
  public static java.lang.Integer top() { return list.first(); }
  public static java.lang.Integer pop() { return list.removeFirst(); }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    while (true) {
      System.out.println("-----------------------------------");
      System.out.println("0 = End, 1 = Push, 2 = Pop, 3 = Top");
      System.out.println("-----------------------------------");
      System.out.print("Case : ");
      int Case = sc.nextInt();
      if (Case == 0) {
        System.out.println("Program is End!");
        break;
      }
      else if (Case == 1) {
        System.out.print("Element : ");
        int tmpi = sc.nextInt();
        java.lang.Integer ele = tmpi;
        push(ele);
      }
      else if (Case == 2) {
        if(isEmpty()) System.out.println("No element in Stack");
        else System.out.println(pop());
      }
      else {
        if(isEmpty()) System.out.println("No element in Stack");
        else System.out.println(top());
      }
    }
    sc.close();
  }
}
