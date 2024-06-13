#include <unordered_set>
#include <vector>
#include <cstdlib>

class RandomizedSet {
public:
    std::unordered_set<int> s1;
    std::vector<int> values;

    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (s1.find(val) != s1.end()) {
            return false;
        }
        s1.insert(val);
        values.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (s1.find(val) == s1.end()) {
            return false;
        }
        s1.erase(val);
        auto it = std::find(values.begin(), values.end(), val);
        if (it != values.end()) {
            values.erase(it);
        }
        return true;
    }
    
    int getRandom() {
        int rand_index = std::rand() % values.size();
        return values[rand_index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
