#pragma once

#include "Core.h"

namespace GG {

	class GG_API Application
	{
	public: 
		Application();
		~Application();

		void Run();

	};

	// To be defined in CLIENT
	Application* CreateApplication();

}


