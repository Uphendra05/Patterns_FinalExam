#pragma once
#include <iostream>
#include "../../src/GraphicsRender.h"
#include "../../src/LuaHandler.h"
#include "../../src/Singleton.h"
#include "../../src/GameObject.h"

class Fighter : public GameObject
{
public:

	Fighter();
	~Fighter();

	void Start();
	void Update();
	void End();

	Model* _model2;
	Model* _model3;
	Model* _model4;


	Model* _model5;
	Model* _model6;
	Model* _model7;

private:

	GraphicsRender* renderer;
	Shader* shader;
};

