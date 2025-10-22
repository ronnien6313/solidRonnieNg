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

class Eagle: public Bird {};

// For demonstration
int main() {
    Eagle eagle;
    Ostrich ostrich;
    
    eagle.lay_egg();
    eagle.fly();

    ostrich.lay_egg();
    ostrich.fly();
}
