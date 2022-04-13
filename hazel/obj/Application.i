# 1 "src/Application.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/Application.cpp"
# 1 "src/Application.h" 1
       

namespace Hazel {
    class Application {
    public:
        Application();
        ~Application();

        void run();
    };
}
# 2 "src/Application.cpp" 2

namespace Hazel {
    Application::Application() {}

    Application::~Application() {}

    void Application::run() {
        while(true);
    }
}
