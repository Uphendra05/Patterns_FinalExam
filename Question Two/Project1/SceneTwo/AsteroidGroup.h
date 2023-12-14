#pragma once
#include <iostream>
#include "../../src/GraphicsRender.h"
#include "../../src/LuaHandler.h"
#include "../../src/Singleton.h"
#include "../../src/GameObject.h"

class AsteroidGroup : public GameObject
{
public:

	AsteroidGroup();
	~AsteroidGroup();

	void Start();
	void Update(float deltaTime);
	void End();

	Model* _model;
	Model* _model1;
	Model* _model2;
	Model* asteroidOne;
	Model* asteroidTwo;
private:

	GraphicsRender* renderer;
	Shader* shader;


};

