#include <iostream>
#include <string>
#include <vector>
#include <JvTime>

class GPS {
public:
    GPS(std::string location) : location(location) {}

    std::string location;
};

class Thing {
public:
    Thing(std::string type) : type(type) {}

    std::string type;
};

class Person {
public:
    Person(std::string name) : name(name) {}

    std::string name;
};

class Record {
public:
    Record(JvTime time, GPS location, Person person, Thing thing)
        : time(time), location(location), person(person), thing(thing) {}

    JvTime time;
    GPS location;
    Person person;
    Thing thing;
};
