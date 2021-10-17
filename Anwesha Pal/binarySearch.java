/*this is a binary search program .it will work when the array is already sorted in ascending order .this program will give the index of the target element
 and if the target element is not present in the array then it will return -1
 */
public class binarySearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array= {2,3,10,58,64,96,100,450};
		int target=3;
		System.out.println(bisearch(array,target));

	}
	static int bisearch(int[] arr, int target)
	{
		int start=0;
		int end=arr.length-1;
		while(start<=end)
		{
			int mid=start+(end-start)/2;
			if(arr[mid]>target)
			{
				end=mid-1;
			
			}
			else if(arr[mid]<target)
			{
				start=mid+1;
				
			}
			else
			{
				return mid;
			}
		}
		return -1;
	}

}
