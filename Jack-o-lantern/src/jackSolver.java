import java.util.Scanner;

public class jackSolver {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int frst = in.nextInt();
        int scnd = in.nextInt();
        int thrd = in.nextInt();
        int ans = (frst * scnd * thrd);
        System.out.println(ans);
        in.close();
    }
}
