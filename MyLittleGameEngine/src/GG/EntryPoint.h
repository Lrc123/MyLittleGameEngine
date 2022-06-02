#pragma once


#ifdef GG_PLATFORM_WINDOWS

extern GG::Application* GG::CreateApplication();

int main(int argc, char** argv) {
	printf("Good game Engine\n");
	auto app = GG::CreateApplication();
	app->Run();
	delete app;
}
	
#endif
