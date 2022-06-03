#pragma once


#ifdef GG_PLATFORM_WINDOWS

extern GG::Application* GG::CreateApplication();

int main(int argc, char** argv) {
	printf("Good game Engine\n");
	GG::Log::Init();
	GG_CORE_WARN("Initialized Log!");
	int a = 5;
	GG_INFO("Hello Client Log! Var={0}", a);
	auto app = GG::CreateApplication();
	app->Run();
	delete app;
}
	
#endif
