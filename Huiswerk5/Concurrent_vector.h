#pragma once

#include <vector>
#include <mutex>
#include <thread>

template<typename T>
class Concurrent_vector {
private:
    std::vector<T> vec;
    std::mutex mtx;
public:
    void add(T t) {
        std::lock_guard<std::mutex> lock(mtx);
        //std::cout << t << " | " << std::this_thread::get_id() << std::endl;
        vec.push_back(t);
    }
    T get(int i) {
        //std::lock_guard<std::mutex> lock(mtx);
        return vec[i];
    }
    void print() {
        //std::lock_guard<std::mutex> lock(mtx);
        for(auto& v : vec) std::cout << v << std::endl;
        std::cout << std::endl;
    }
};