#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;

	if (n % 2 == 0 || n <= 0) {
		cout << "So phan tu khong hop le!" << endl;
		return 0;
	}

	vector<int> arr(n);
	cout << "Nhap " << n << " so nguyen ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//sap xep mang.
	sort(arr.begin(), arr.end());
	//trung vi la phan tu o vi tri giua.
	int median = arr[n / 2];
	cout << "Trung vi la: " << median << endl;

	return 0;
}