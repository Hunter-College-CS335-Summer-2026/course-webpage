/**
 * @file iterator.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Showing how iterators make treversal universal (try replacing all `list` with `list`)
 * @date 2026-06-15
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <list>
#include <chrono>

int main()
{
    // declares and initializes a container to contain the numbers 0-9999, and times how long it takes.
    const auto t1_start = std::chrono::high_resolution_clock::now();
    std::list<int> nums;
    for(int i=0; i<10000; i++) {
        nums.push_back(i);
    }
    const auto t1_end = std::chrono::high_resolution_clock::now();
    int t1 = std::chrono::duration <double, std::micro> (t1_end - t1_start).count();
    std::cout << "Initializing container took " << t1 << " microseconds" << std::endl;
    // removes every element which is divisible by 5 from the container (which happens to be every 5th
    // element), and times how long it takes.
    const auto t2_start = std::chrono::high_resolution_clock::now();
    auto it = nums.begin();
    while (it != nums.end()) {
        if (*it % 5 == 0) {
            it = nums.erase(it); 
        } else {
            it++; 
        }
    }
    const auto t2_end = std::chrono::high_resolution_clock::now();
    int t2 = std::chrono::duration <double, std::micro> (t2_end - t2_start).count();
    std::cout << "Removing every 5th element took " << t2 << " microseconds" << std::endl;
}
