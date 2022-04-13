#include <Hazel.h>

class Sandbox : public Hazel::Application {

};

int main() {
    Sandbox* sandbox = new Sandbox();
    sandbox->run();
    delete sandbox;
}