package Assignment;
import java.util.Scanner;
public class FindPowerofNumber {
public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	int i = s.nextInt();
	int power = s.nextInt();
	int answer = 1;
	while(power>=1){
		answer = answer*i;
		power--;
	}
	System.out.println(answer);
	}
}
