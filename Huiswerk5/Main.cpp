//Copyrizzle Cizzle Urizzle

#include <iostream>
#include <thread>
#include "Concurrent_vector.h"
#include <queue>
#include <condition_variable>

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

std::mutex mute;
std::condition_variable flag;

void producer() {
    for(int i = 0; i < 500; ++i) {
        goods.push(i);
        c++;
    }
    flag.notify_all();
    done = true;
}

void consumer() {
    std::unique_lock<std::mutex> lock(mute);
    while(!done) {
        flag.wait(lock);
        while(!goods.empty()) {
            goods.pop();
            c--;
        }
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
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();
    std::cout << "Net: " << c << std::endl;

    return 0;
}