//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	     int k = 0;
  while (k < n) {
    if (arr[k] == 0) {

      break;
    } else {
      k = k + 1;
    }
  }

  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (arr[j] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;

    }

    j++;

  }

	}
};