package meanModeCalc;

import java.util.Arrays;

public class ModeCalc {
	public static int calcMode(int[] givenArr) {
		if(givenArr.length == 0) {
			return -1; // There are no elements in the array.
		}
		else {
			Arrays.sort(givenArr);
			int mode = givenArr[0];
			int modeMaxCount = 1;
			int modeVal = mode;
			int count = 0;
			for(int i = 0; i < givenArr.length; i++) {
				System.out.print(givenArr[i] + " ");
				if(givenArr[i] == modeVal) {
					count++;
				}
				else {
					count = 1;
					modeVal = givenArr[i];
				}
				if(count > modeMaxCount) {
					mode = modeVal;
					modeMaxCount = count;
				}
			}
			System.out.println();
			return mode;
		}
	}
	public static void main(String[] args) {
		int[] test = {1, 1, 1, 1, 1, 2, 2, 2, 3, 3};
		System.out.println(ModeCalc.calcMode(test));

		// Output: 1
		// Program by Joseph Jennings: @JosephTJennings
	}
}
