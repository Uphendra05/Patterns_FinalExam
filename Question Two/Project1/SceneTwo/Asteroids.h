#pragma once
#include <iostream>
#include "../../src/GraphicsRender.h"
#include "../../src/LuaHandler.h"
#include "../../src/Singleton.h"
#include "../../src/GameObject.h"

class Asteroids : public GameObject
{

public:
	Asteroids();
	~Asteroids();

	void Start();
	void Update();
	void End();

private:


	GraphicsRender* renderer;
	Shader* shader;
};

