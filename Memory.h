#ifndef MEMORY_H
#define MEMORY_H

#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

class Memory {
private:
    vector<string> experiences;

public:
    void addExperience(string exp) {
        experiences.push_back(exp);
    }

    string recallRandom() {
        if (experiences.empty()) return "No memories yet.";
        int index = rand() % experiences.size();
        return experiences[index];
    }
};

#endif