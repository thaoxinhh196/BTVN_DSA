#include <iostream>
#include <vector>
using namespace std;

class QueueVector {
private:
    vector<int> data;

public:
    bool isEmpty() {
        return data.empty();
    }

    void enqueue(int item) {
        data.push_back(item);          // Thêm vào cuối  O(1)
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue rong!\n";
            return -1;
        }
        int value = data[0];
        data.erase(data.begin());      // Xóa đầu O(n)
        return value;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue rong!\n";
            return -1;
        }
        return data[0];
    }

    int size() {
        return data.size();
    }
};
