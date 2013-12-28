import java.util.Scanner;

public class drawabox {
    public static void drawhline(int width, char hChar)
        {
            int i = 0;
            while(i++ < width)
            {
            System.out.printf("%c", hChar);
            }
        }
    public static void drawvline(int height, char hChar, int width, char wChar)
        {
            int i = 0;
            while(i++ < height)
            {
                 System.out.printf("%c", wChar);
                 drawhline(width - 2, ' ');
                 System.out.printf("%c\n", wChar);
            }
        }

    public static void main(String[] args) {
        Scanner readInput = new Scanner(System.in);
        System.out.print("Enter the height: ");
        int height = readInput.nextInt();
        System.out.print("Enter the width: ");
        int width = readInput.nextInt();

        int i = 0;
        int j = 0;

drawhline(width, '*');
System.out.print("\n");

drawvline(height, ' ', width, '|');

drawhline(width, '*');
System.out.print("\n");

  }
}
