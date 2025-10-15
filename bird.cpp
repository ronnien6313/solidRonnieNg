#include <iostream>

class Bird {
public:
    virtual void fly() {
        std::cout << "Bird is flying\n";
    };
    
    virtual void lay_egg() {
        std::cout << "Egg";
    }
};

class Ostrich : public Bird {
public:
    void fly() override {
        throw std::runtime_error("Ostriches can't fly!");
    }
};