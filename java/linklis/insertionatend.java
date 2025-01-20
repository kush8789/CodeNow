package linklis;
import java.util.Scanner;

public class insertionatend {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)){
        LinkedList list = new LinkedList();
        System.out.print("Enter the number of elements in the LinkedList: ");
        int n = sc.nextInt();
        System.out.println("Enter the elements of the LinkedList: ");
        for (int i = 0; i < n; i++) {
            int value = sc.nextInt();
            list.insertAtEnd(value);
        }
        System.out.print("Enter the value to be inserted at the end: ");
        int x = sc.nextInt();
        list.insertAtEnd(x);
        System.out.print("Modified LinkedList: ");
        list.printList();
        sc.close();
    }
    }
}
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
class LinkedList {
    Node head;

    LinkedList() {
        head = null;
    }

    public void insertAtEnd(int d) {
        Node newNode = new Node(d);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    public void printList() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
}