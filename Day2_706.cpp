class MyHashMap {
public:
    int data[1000001];

    MyHashMap() {
        std::fill(data, data + 1000001, -1);
    }

    void put(int key, int val) {
        data[key] = val;
    }

    int get(int key) {
        return data[key];
    }

    void remove(int key) {
        data[key] = -1;
    }
};