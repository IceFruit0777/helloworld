#pragma once

namespace Hazel {
    class Application {
    public:
        Application();
        ~Application();

        void run();
    };

    Application* createApplication();
}