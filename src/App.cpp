#include "Window.h"
#include "App.h"

App::App(Window& window)
	:
	window_(window),
	gfx_(window)
{
}

void App::Run()
{
	UpdateLogic();
	ComposeFrame();
	gfx_.EndFrame();
}

void App::UpdateLogic()
{

}

void App::ComposeFrame()
{
}
