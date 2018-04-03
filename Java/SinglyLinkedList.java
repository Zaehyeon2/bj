import java.util.Scanner;

public class SinglyLinkedList {
  private static class Node<Integer> {     // Node
    private int element;                   // element
    private Node<Integer> next;            // nextnode

    public Node(int e, Node<Integer> n) {  // setNode
      element = e;
      next = n;
    }

    public int getElement() {              // Get Element
      return element;
    }

    public Node<Integer> getNext() {       // Get Next Node
      return next;
    }

    public void setNext(Node<Integer> n) { // Set Next Node
      next = n;
    }
  }

  private static Node<Integer> head = null;// Initial LinkedList
  private static Node<Integer> tail = null;// Initial LinkedList
  private static int size = 0;             // Initial LinkedList

  public SinglyLinkedList(){}

  public static int size() {               // Get Size
    return size;
  }

  public static boolean isEmpty() {        // Empty = true, Not Empty = false
    return size() == 0;
  }

  public static int first() {              // Get First Element
    if (isEmpty()) return 0;               // Empty check
    return head.getElement();
  }

  public static int last() {               // Get Last Element
    if (isEmpty()) return 0;               // Empty check
    return tail.getElement();
  }

  public static void addFirst(Integer e) { // Add to First
    head = new Node<>(e, head);            // Make Head
    if (size == 0) {
      tail = head;
    }
    size++;
  }

  public static void addLast(Integer e) { // Add to Last
    Node<Integer> newest = new Node<>(e, null); // Make Last Node
    if (isEmpty()) {
      head = newest;
    }
    else {
      tail.setNext(newest);
    }
    size++;
    tail = newest;
  }

  public static void removeFirst(){        // Remove First Node
    if (isEmpty()) return;
    head = head.getNext();
    size--;
    if (size == 0) {
      tail = null;
    }
  }
  /*------------------------------------------------------
  |                 여기까지가 기본으로 준 함수                 |
  |_____________________________________________________*/
  public static void insertion(Integer e, int idx){ // Add to Index
    if (idx > size || idx < 0) {                    // Check Over/UnderFlow
      System.out.println("List Over/UnderFlow!");
      return;
    }
    if (idx == size){
      addLast(e);
      return;
    }
    if (idx == 0){
      addFirst(e);
      return;
    }
    Node<Integer> tmp = head;
    for(int i = 0; i < idx - 1; i++){                    // Go to Index - 1
      tmp = tmp.getNext();
    }
    Node<Integer> insert = new Node<>(e, tmp.getNext()); // Make New Node
    tmp.setNext(insert);                                 // Input New Node to Index
    size++;
  }

  public static void removing(int idx){                  // Remove Index's Node
    if (isEmpty()){                                      // Empty Check
      System.out.println("No Element in Linked List!");
      return;
    }
    if (idx < 0 || idx > size - 1) {                     // Check Over/UnderFlow
      System.out.println("List Over/UnderFlow!");
      return;
    }
    if (idx == 0){
      removeFirst();
      return;
    }
    Node<Integer> tmp = head;
    for(int i = 0; i < idx - 1; i++){                    // Go to Index - 1
      tmp = tmp.getNext();
    }
    if (idx == size - 1) {                               // If New Node == Last
      tmp.setNext(null);
      size--;
      return;
    }
    tmp.setNext(tmp.getNext().getNext());                // Else Linked Next Next Node
    size--;
    if (isEmpty()) {
      tail = null;
    }
  }

  public static void pall(){                             // Print All Element
    if (isEmpty()){                                      // Check Empty
      System.out.println("No Element in Linked List!");
      return;
    }
    Node<Integer> tmp = head;
    System.out.println("LinkedList[0] = "  + tmp.getElement()); // Print First Element
    for(int i = 0; i < size - 1; i++){                          // Searching all index
      tmp = tmp.getNext();
      System.out.println("LinkedList[" + (i + 1) + "] = " + tmp.getElement()); // Print Index, Element
    }
  }

  public static void main(String[] args) {                                     // Main
    Scanner sc = new Scanner(System.in);
    while (true) {
      System.out.println("------------------------------------------------");
      System.out.println("0 = End, 1 = Insert, 2 = Removing, 3 = Print All");
      System.out.println("------------------------------------------------");
      System.out.print("Case : ");
      int Case = sc.nextInt();
      if (Case == 0) {
        System.out.println("Program is End!");
        break;
      }
      else if (Case == 1) {
        System.out.print("Element : ");
        int text = sc.nextInt();
        System.out.print("Index : ");
        int idx = sc.nextInt();
        insertion(text, idx);
      }
      else if (Case == 2) {
        System.out.print("Index : ");
        int idx = sc.nextInt();
        removing(idx);
      }
      else {
        System.out.println("------------------------------------------------");
        pall();
        }
    }
  sc.close();
  }
}
