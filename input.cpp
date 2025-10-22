#include <iostream>

class Keyboard : public InputDevice {
public:
    std::string getInput() {
        return "User input from keyboard";
    }
};

class Mouse : public InputDevice {
public:
    std::string getInput() {
        return "User input from mouse";
    }
};

class InputDevice {
    public:
        virtual std::string getInput() = 0;
        virtual ~InputDevice() = default;
};

// Right now this code assumes that input will come from the keyboard, 
// but we would like to be able to create an InputProcessor that 
// accepts input from the mouse (and potentially other input devices
// in the future). Note that each InputProcessor only needs to deal
// with one device.
class InputProcessor {
public:
    void processInput() {
        std::unique_ptr<InputDevice> device;
    }
};

// For demonstration
int main() {
    InputProcessor processor;
    processor.processInput();
}
