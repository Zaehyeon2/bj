import java.util.Scanner;
import java.lang.*;

public class SinglyLinkedList<Integer> {

    private static class Node<Integer> {     // Node
        private Integer element;                   // element
        private Node<Integer> next;            // nextnode

        public Node(Integer e, Node<Integer> n) {  // setNode
            element = e;
            next = n;
        }

        public Integer getElement() {              // Get Element
            return element;
        }

        public Node<Integer> getNext() {       // Get Next Node
            return next;
        }

        public void setNext(Node<Integer> n) { // Set Next Node
            next = n;
        }
    }
    private static Node<java.lang.Integer> head = null;// Initial LinkedList
    private static Node<java.lang.Integer> tail = null;// Initial LinkedList
    private static int size = 0;             // Initial LinkedList

    public SinglyLinkedList(){}

    public static int size() {               // Get Size
        return size;
    }

    public static boolean isEmpty() {        // Empty = true, Not Empty = false
        return size() == 0;
    }

    public static java.lang.Integer first() {              // Get First Element
        if (isEmpty()) {return null;}                    // Empty check
        return head.getElement();
    }

    public static java.lang.Integer last() {               // Get Last Element
        if (isEmpty()) return null;              // Empty check
        else return tail.getElement();
    }

    public static void addFirst(java.lang.Integer e) { // Add to First
        head = new Node<>(e, head);            // Make Head
        if (size == 0) {
            tail = head;
        }
        size++;
    }

    public static void addLast(java.lang.Integer e) { // Add to Last
        Node<java.lang.Integer> newest = new Node<>(e, null); // Make Last Node
        if (isEmpty()) {
            head = newest;
        }
        else {
            tail.setNext(newest);
        }
        size++;
        tail = newest;
    }

    public static java.lang.Integer removeFirst(){
        if (isEmpty()) return null;// Remove First Node
        java.lang.Integer ret = head.getElement();
        head = head.getNext();
        size--;
        if (size == 0) {
            tail = null;
        }
        return ret;
    }
    /*------------------------------------------------------
    |                 여기까지가 기본으로 준 함수                 |
    |_____________________________________________________*/
    public static void insertion(java.lang.Integer e, int idx){ // Add to Index
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
        Node<java.lang.Integer> tmp = head;
        for(int i = 0; i < idx - 1; i++){                    // Go to Index - 1
            tmp = tmp.getNext();
        }
        Node<java.lang.Integer> insert = new Node<>(e, tmp.getNext()); // Make New Node
        tmp.setNext(insert);                                 // Input New Node to Index
        size++;
    }

    public static java.lang.Integer removing(int idx){                        // Remove Index's Node
        if (isEmpty()){                                      // Empty Check
            System.out.println("No Element in Linked List!");
            return null;
        }
        if (idx < 0 || idx > size - 1) {                     // Check Over/UnderFlow
            System.out.println("List Over/UnderFlow!");
            return null;
        }
        if (idx == 0){
            removeFirst();
            return null;
        }
        Node<java.lang.Integer> tmp = head;
        for(int i = 0; i < idx - 1; i++){                    // Go to Index - 1
            tmp = tmp.getNext();
        }
        java.lang.Integer ret = tmp.getNext().getElement();
        if (idx == size - 1) {                               // If New Node == Last
            tmp.setNext(null);
            size--;
            return ret;
        }
        tmp.setNext(tmp.getNext().getNext());                // Else Linked Next Next Node
        size--;
        if (isEmpty()) {
            tail = null;
        }
        return ret;
    }

    public static void pall(){                             // Print All Element
        if (isEmpty()){                                      // Check Empty
            System.out.println("No Element in Linked List!");
            return;
        }
        Node<java.lang.Integer> tmp = head;
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
                int tmpi = sc.nextInt();
                java.lang.Integer text = tmpi;
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
