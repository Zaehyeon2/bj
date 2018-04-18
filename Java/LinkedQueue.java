import java.util.Scanner;

public class LinkedQueue<Integer> {
    private static SinglyLinkedList<java.lang.Integer> list = new SinglyLinkedList<>();

    public static int size() {
        return list.size();
    }

    public static boolean isEmpty() {
        return list.isEmpty();
    }

    public static void enqueue(java.lang.Integer element) {
        list.addLast(element);
    }

    public static java.lang.Integer first() {
        return list.first();
    }

    public static java.lang.Integer dequeue() {
        return list.removeFirst();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println("--------------------------------------------");
            System.out.println("0 = End, 1 = Enqueue, 2 = Dequeue, 3 = First");
            System.out.println("--------------------------------------------");
            System.out.print("Case : ");
            int Case = sc.nextInt();
            if (Case == 0) {
                System.out.println("Program is End!");
                break;
            } else if (Case == 1) {
                System.out.print("Element : ");
                int tmpi = sc.nextInt();
                java.lang.Integer ele = tmpi;
                enqueue(ele);
            } else if (Case == 2) {
                if (isEmpty()) System.out.println("No element in Queue");
                else System.out.println(dequeue());
            } else {
                if (isEmpty()) System.out.println("No element in Queue");
                else System.out.println(first());
            }
        }
        sc.close();
    }
}
