int main() {
	int arr[8] = {2,6,1,8,12,89,17,3};
	int n = 8;
	for (int i = 1; i < n; i++) {
		int curr = arr[i];
		int j = i - 1;
		while (arr[j] > curr and j >= 0) {
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = curr;

	}
	for (int i = 0; i < n; i++) {
		cout<<arr[i]<<" ";
	}
}
