import java.util.Scanner;

public class problem {

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);        
      int n = sc.nextInt();
      long a = sc.nextLong();
      long b = sc.nextLong();
      long min_x = a, min_y = b;
      for(int i = 1; i < n ; i++)
      {
      a = sc.nextLong();
      b = sc.nextLong();
      min_x = Math.min(min_x, a);
      min_y = Math.min(min_y, b);
      }
      System.out.println(min_x*min_y);
}
}
