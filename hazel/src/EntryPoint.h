#pragma once

extern Hazel::Application* Hazel::createApplication();

int main() {
    Hazel::Log::init();
    HZ_CORE_WARN("warn info");
    HZ_INFO("info {0}", 6);

    auto app = Hazel::createApplication();
    app->run();
    delete app;
}