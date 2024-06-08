#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> sol(vector<string> products) {
    map<string, vector<string>> final;

    vector<string> food = {"Sprite", "Pizza", "Pudinhara"};
    vector<string> electronics = {"Motorola3G", "Samsung", "Iphone"};
    vector<string> health = {"Iodex", "Toothpaste", "Lux"};

    for (auto it : products) {
        if (find(food.begin(),food.end(),it) != food.end()) {
            final["food"].push_back(it);
        } else if (find(electronics.begin(),electronics.end(),it) != electronics.end()) {
            final["electronics"].push_back(it);
        } else if (find(health.begin(),health.end(),it) != health.end()) {
            final["health"].push_back(it);
        }
    }

    return final;
}

int main() {
    vector<string> products = {"Sprite", "Pizza", "Motorola3G", "Samsung", "Iphone", "Iodex", "Pudinhara", "Toothpaste", "Lux"};
    map<string, vector<string>> ans = sol(products);

    for (auto it : ans) {
        cout << it.first << ": ";
        for (auto k : it.second) {
            cout << k << " ";
        }
        cout <<endl;
    }

    return 0;
}
