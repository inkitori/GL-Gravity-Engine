#pragma once

#include <string>
#include <GLFW/glfw3.h>

#include "CelestialEngine.h"

class Application
{
public:
	Application(std::string applicationName);
	void Run();
	void Load();
	void Start();
	void Update();
	void Render();

	GLFWwindow *window;

private:
	std::string applicationName;

	CelestialEngine engine;

	double previousTime = 0.0;

	void framebuffer_size_callback(GLFWwindow *window, int width, int height);
	void processInput(GLFWwindow *window);

	const unsigned int scrWidth = 1920;
	const unsigned int scrHeight = 1080;
};