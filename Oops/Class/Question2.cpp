#include<iostream>
using namespace std;

class cricketer {
private:
    string name;
    int age;
    int num_of_testmatches;
    int avg_runs;

public:

    // SETTERS
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setTestmatch(int num_of_testmatches) {
        this->num_of_testmatches = num_of_testmatches;
    }

    void setAvgrun(int avg_runs) {
        this->avg_runs = avg_runs;
    }

    // GETTERS
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getTestmatch() {
        return num_of_testmatches;
    }

    int getAvgrun() {
        return avg_runs;
    }
};

int main() {
    cricketer akshat;

    akshat.setName("Akshat");
    akshat.setAge(20);
    akshat.setAvgrun(100);
    akshat.setTestmatch(30);

    cricketer cricketers[20] = { akshat };

    cout << cricketers[0].getAge();
}