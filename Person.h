#pragma once

using namespace std;

class Person{
    public:
        Person();
        Person(float newWeight);

        ~Person();
        //overload the add operator
        float operator + (const Person& otherPerson);

    private:
    float mWeight;
    string mFirstName;
    float mAge;

};