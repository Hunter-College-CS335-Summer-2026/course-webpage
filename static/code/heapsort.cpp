/**
 * @file heapsort.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Shows examples of how to use `std::make_heap` and `std::priority_queue`
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <algorithm>
#include <iostream>
#include <ostream>
#include <queue>
#include <string>
#include <vector>


/**
 * @brief Holds data items and priority of the data
 * 
 * @tparam T The type of data stored in the node
 */
template <typename T>
struct HeapNode {
    T data;                 /**< Item being stored in current node */
    int priority;           /**< Numeric priority used to position this node within the heap */
    
    /**
     * @brief Overload the greater than operator to allow comparing two nodes based on priority
     * 
     * @param other Other object which current object is being compared to
     * @return true Current item's priority is greater
     * @return false Otherwise
     */
    bool operator>(const HeapNode<T>& other) const {
        return this->priority > other.priority;
    }
    /**
     * @brief Overload the less than operator to allow comparing two nodes based on priority
     * 
     * @param other Other object which current object is being compared to
     * @return true Current item's priority is lower
     * @return false Otherwise
     */
    bool operator<(const HeapNode<T>& other) const {
        return this->priority < other.priority;
    }
};

/**
 * @brief Implementation of Heapsort using C++ standard library
 * 
 * @tparam T Data types with defined comparison operators (< and >)
 * @param items Vector of items being sorted
 * @return std::vector<T> Sorted vector (ascending order)
 */
template <typename T>
std::vector<T> heapSort(std::vector<T> items) {
    // heapify or heapRebuild
    std::make_heap(items.begin(), items.end());
    for (auto i = items.end(); i > items.begin(); i--){
        // pop and bubbledown (i - 1)
        std::pop_heap(items.begin(), i);
    }
    return items;
}

/**
 * @brief Ability to print a Vector to an output stream
 * 
 * @tparam T Datatype of items stored in Vector
 * @param os Stream being printed to
 * @param items Vector which is to be printed
 * @return std::ostream& Stream after printing the Vector content
 */
template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> items) {
    for (T item : items) {
        os << item << " ";
    }
    os << std::endl;
    return os;
}


int main() {
    // heapSort usage (same example as slides)
    std::vector<int> nums = {6,3,5,9,2,10};
    std::cout << "Before:" << nums;
    std::cout << "After:" << heapSort(nums);

    // Same example as Project 1
    std::vector<std::string> tasks = {
        "Publish Project",
        "Prepare Slides",
        "Finish Project Instructions",
        "Research Future Topics",
        "World Cup!",
        "Make Quiz",
    };
    std::vector<int> priorities = { 2, 3, 1, 4, 6, 5 };
    // Create a priority queue with max-heap
    std::priority_queue<HeapNode<std::string>> max_pq;
    // Pack tasks and priorities into HeapNode and push to the max_pq
    std::cout << "Unsorted Tasks with Priorities:" << std::endl;
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << " => " << tasks[i] << " (Priority: " << priorities[i] << ")" << std::endl;
        max_pq.push(HeapNode<std::string>{tasks[i],priorities[i]});
    }
    std::cout << std::endl;
    // Print each item as it gets popped (max priority comes out first)
    std::cout << "Sorted Tasks:" << std::endl;
    while (!max_pq.empty()) {
        std::cout << "  => " << max_pq.top().data << std::endl;
        max_pq.pop();
    }
}
