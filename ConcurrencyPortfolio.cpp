#include <iostream>
#include <thread>

using namespace std;

void countUp() {
    for (int i = 0; i <= 20; i++) {
        cout << "Thread 1 counting up: " << i << endl;
    }
}

void countDown() {
    for (int i = 20; i >= 0; i--) {
        cout << "Thread 2 counting down: " << i << endl;
    }
}

int main() {
    thread thread1(countUp);

    thread1.join();

    thread thread2(countDown);

    thread2.join();

    cout << "Both threads have completed." << endl;

    return 0;
}
