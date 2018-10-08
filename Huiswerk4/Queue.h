#pragma once

#include <vector>
#include <iostream>

template <typename T>
class Queue {
protected:
    int len;
    T* list;
public:
    Queue() {
        len = 0;
        list = new T[len];
        std::cout << "New Queue made." << std::endl << std::endl;
    }
    void print() {
        std::cout << std::endl;
        for(int i = 0; i < len; i++) std::cout << list[i] << std::endl;
    }
    void put(const T &t) {
        len++;
        T* copy = new T[len];
        for(int i = 0; i < len - 1; ++i) copy[i] = list[i];
        copy[len-1] = t;
        delete[] list;
        list = new T[len];
        for(int i = 0; i < len; i++) list[i] = copy[i];
        std::cout << "Added element: " << t << std::endl;
        delete[] copy;
    }
    T get() {
        T obj = list[0];
        for(int i = 1; i < len; i++) list[i-1] = list[i];
        len--;
        T* copy = new T[len];
        for(int i = 0; i < len; i++) copy[i] = list[i];
        delete[] list;
        list = new T[len];
        for(int i = 0; i < len; i++) list[i] = copy[i];
        delete[] copy;
        return obj;
    }
    int size() {
        return len;
    }
};