#include <GG.h>

class Sandbox : public GG::Application {
public:
    Sandbox() {}
    ~Sandbox() {}
};

GG::Application* GG::CreateApplication() {
    return new Sandbox();
}
