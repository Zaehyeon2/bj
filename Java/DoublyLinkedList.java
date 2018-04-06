// Made By TheKinGoD

import java.util.*;

public class DoublyLinkedList {

  private static class Node<String> {
    private String element;
    private Node<String> prev;
    private Node<String> next;
    public Node(String e, Node<String> p, Node<String> n) {
      element = e; prev = p; next = n;
    }
    public String getElement() { return element; }
    public Node<String> getPrev() { return prev; }
    public Node<String> getNext() { return next; }
    public void setPrev(Node<String> p) { prev = p; }
    public void setNext(Node<String> n) { next = n; }
  }

  private static Node<String> header;
  private static Node<String> trailer;
  private static int size = 0;

  public static int size() { return size; }
  public static boolean isEmpty() { return size == 0; }

  public static String first( ) {
    if (isEmpty()) return null;
    return header.getNext().getElement();
  }

  public static String last( ) {
    if (isEmpty()) return null;
    return trailer.getPrev().getElement();
  }

  public static void addFirst(String e) {
    addBetween(e, header, header.getNext());
  }

  public static void addLast(String e) {
    addBetween(e, trailer.getPrev(), trailer);
  }

  public static String removeFirst( ) {
    if (isEmpty()) return null;
    return remove(header.getNext());
  }

  public static String removeLast( ) {
    if (isEmpty()) return null;
    return remove(trailer.getPrev());
  }

  private static void addBetween(String e, Node<String> predecessor, Node<String> successor) {
    Node<String> newest = new Node<>(e, predecessor, successor);
    predecessor.setNext(newest);
    successor.setPrev(newest);
    size++;
  }

  private static String remove(Node<String> node) {
    Node<String> predecessor = node.getPrev( );
    Node<String> successor = node.getNext( );
    predecessor.setNext(successor);
    successor.setPrev(predecessor);
    size--;
    return node.getElement( );
  }

  public static void PrintAll(){
    if (isEmpty()) {
      System.out.println("No Element in List!");
      return;
    }
    System.out.println("------------------------------------------------");
    Node<String> tmp = header;
    for(int i = 0; i < size(); i++){
      tmp = tmp.getNext();
      System.out.println("DoublyLinkedList[" + i + "] = " + tmp.getElement());
    }
  }

  public static String removing(int idx){
    if (idx < 0 || idx > size() - 1) {
      System.out.println("Over/UnderFlow!");
      return null;
    }
    Node<String> tmp = header;
    for(int i = 0; i <= idx; i++){
      tmp = tmp.getNext();
    }
    remove(tmp);
    return tmp.getElement();
  }

  public static void insertion(int idx, String e){
    if (idx > size() || idx < 0) {
      System.out.println("Over/UnderFlow!");
      return;
    }
    Node<String> tmp = header;
    for(int i = 0; i < idx; i++){
      tmp = tmp.getNext();
    }
    addBetween(e, tmp, tmp.getNext());
  }

  public static void main(String[] args) {
    header = new Node<>(null, null, null);
    trailer = new Node<>(null, header, null);
    header.setNext(trailer);
    Scanner sc = new Scanner(System.in);
    while (true) {
      System.out.println("------------------------------------------------");
      System.out.println("0 = End, 1 = Insert, 2 = Removing, 3 = Print All");
      System.out.println("------------------------------------------------");
      System.out.print("Case : ");
      int Case = sc.nextInt();
      if (Case == 0){
        System.out.println("Program is END!");
        break;
      }
      else if (Case == 1){
        System.out.print("String : ");
        String text = sc.next();
        System.out.print("Index : ");
        int idx = sc.nextInt();
        insertion(idx, text);
      }
      else if (Case == 2){
        System.out.print("Index : ");
        int idx = sc.nextInt();
        removing(idx);
      }
      else {
        PrintAll();
      }
    }
  }
}
