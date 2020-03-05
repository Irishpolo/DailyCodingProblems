package DailyCodingProblem;

public class Main {

    public static boolean k_check(int[] array){
        for (int i =0; i<array.length;i++){
            for (int j=0;j<array.length;j++){
                if (j!=i){
                    if ((array[i]+array[j])==17){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
	final int k = 17;
	int[] numbers = {10,15,3,7};
	boolean k_boolean = k_check(numbers);
	if (k_boolean){
        System.out.println("Two numbers in this array add up to "+k);
    }
	else {
        System.out.println("There are no pairs of numbers in this array which add up to " + k);
    }
    }
}
