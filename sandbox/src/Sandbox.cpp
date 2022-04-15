#include <Hazel.h>

class Sandbox : public Hazel::Application {

};

Hazel::Application* Hazel::createApplication() {
    return new Sandbox();
}