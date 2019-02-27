#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>

using namespace std;//

class LRUCache {
public:
    size_t capacity;
    list<int> vs;
    unordered_map<int, pair<int, list<int>::iterator>> cache;


    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    void change(unordered_map<int, pair<int, list<int>::iterator>> :: iterator it) {
        int key = it->first;
        vs.erase(it->second.second);
        vs.push_front(key);
        it->second.second = vs.begin();
    }


    int get(int key) {
        auto it = cache.find(key);
        if (it == cache.end()) {
            return - 1;
        }
        int value = it->second.first;
        change(it);
        return value;
    }

    void put(int key, int value) {
        auto it = cache.find(key);
        if (it == cache.end()){
            if (cache.size() == this->capacity) {
                cache.erase(vs.back());
                vs.pop_back();
            }
                vs.push_front(key);
        }
        else {
            change(it);
        }
        cache[key] = {value, vs.begin()};
    }
};


