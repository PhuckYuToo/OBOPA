//Copyrizzle Cizzle Urizzle

#include <iostream>
#include <thread>
#include "Concurrent_vector.h"
#include <queue>
#include <condition_variable>
#include <chrono>

//Canfuncties
void printLine() {
    std::cout << std::endl << "==============================================" << std::endl;
}
void printOpdr(int i) {
    printLine();
    std::cout << "Opdracht " << i << std::endl << "==============================================" << std::endl;
}


//Opdr. 1
Concurrent_vector<int> vec;

void sideThread() {
    for(int i = 0; i <= 25; i++) vec.add(i);
}


//Opdr. 2
int c = 0;
bool done = false;
std::queue<int> goods;

std::mutex mutex, mute;
std::condition_variable consFlag, prodFlag;

void producer() {
    for(int i = 0; i < 500; ++i) {
        {
            std::lock_guard<std::mutex> lock(mutex);
            goods.push(i);
            c++;
        }
        std::unique_lock<std::mutex> locker(mute);
        consFlag.notify_one();
        prodFlag.wait(locker);
    }
    done = true;
    consFlag.notify_one();
}

void consumer() {
    std::unique_lock<std::mutex> lock(mutex);
    while(!done) {
        consFlag.wait(lock);
        while(!goods.empty()) {
            std::lock_guard<std::mutex> guard(mute);
            goods.pop();
            c--;
        }
        prodFlag.notify_one();
    }
}

int main() {
    printOpdr(1);
    //Opdr. 1
    vec.add(2343789);

    std::thread thread2(sideThread);

    for(int i = 0; i >= -10; i--) vec.add(i);
    thread2.join();

    std::cout << std::endl;
    vec.print();

    printOpdr(2);
    //Opdr. 2
    for(int i = 0; i < 100; i++) {
        done = false;
        std::thread consumerThread(consumer);
        std::thread producerThread(producer);

        consumerThread.detach();
        producerThread.join();
        std::cout << "Net: " << c << std::endl;
    }
    return 0;
}