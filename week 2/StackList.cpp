#include<iostream>
#include<vector>
using namespace std;

class Stack {
private:
	vector<int>data;

public:
	/**
	* Kiem tra stack rong O(1).
	*/
	bool isEmpty() {
		return data.empty();
	}
	//Them phan tu O(1)
	void push(int item) {
		data.push_back(item);
	}
	//Lay phan tu cuoi ra va xoa no O(1)
	int pop() {
		if (isEmpty()) {
			cout << "Stack rong!\n";
			return -1; 
		}
		int value = data.back(); //Lay phan tu cuoi
		data.pop_back(); //xoa no
		return value;
	}
	//Xem phan tu cuoi nhung khong xoa O(1)
	int top(){
		if (isEmpty()) {
			cout << "Stack rong!\n";
			return -1;  
		}
		return data.back();
	}
	//tra ve kich thuoc cua stack O(1)
	int size() {
		return data.size();
	}

};