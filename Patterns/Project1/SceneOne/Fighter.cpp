#include "Fighter.h"

Fighter::Fighter()
{
	renderer = Singleton::GetInstance().GetRenderer();
	shader = Singleton::GetInstance().GetDefaultShader();
}

Fighter::~Fighter()
{
}

void Fighter::Start()
{/*
	model = new Model("Models/Fighter/Fighter.ply");
	model->id = "Fighter";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(8, 11.0f, -13));
	model->transform.SetRotation(glm::vec3(40, 0, 0));
	model->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(model, shader);

	_model2 = new Model(*model);
	_model2->id = "FighterTwo";
	SetGameObjectId(_model2->id);
	_model2->transform.SetPosition(glm::vec3(8, 7.0f, -10));
	_model2->transform.SetRotation(glm::vec3(40, -20, 0));
	_model2->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model2, shader);

	_model3 = new Model(*model);
	_model3->id = "FighterThree";
	SetGameObjectId(_model3->id);
	_model3->transform.SetPosition(glm::vec3(-1, 11.0, 13));
	_model3->transform.SetRotation(glm::vec3(40, 0, 0));
	_model3->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model3, shader);


	_model4 = new Model(*model);
	_model4->id = "FighterFour";
	SetGameObjectId(_model4->id);
	_model4->transform.SetPosition(glm::vec3(4, 0, 13));
	_model4->transform.SetRotation(glm::vec3(40, 0, 0));
	_model4->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model4, shader);*/

	//Scene Four
	_model5  = new Model("Models/Fighter/Fighter.ply");
	_model5->id = "FighterSceneFour";
	SetGameObjectId(_model5->id);
	_model5->transform.SetPosition(glm::vec3(50, 2, 35));
	_model5->transform.SetRotation(glm::vec3(90, 45, 0));
	_model5->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model5, shader);

	_model6 = new Model(*_model5);
	_model6->id = "FighterSceneFourTwo";
	SetGameObjectId(_model6->id);
	_model6->transform.SetPosition(glm::vec3(15, -2, 35));
	_model6->transform.SetRotation(glm::vec3(90, 25, 0));
	_model6->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model6, shader);

	_model7 = new Model(*_model5);
	_model7->id = "FighterSceneFourThree";
	SetGameObjectId(_model7->id);
	_model7->transform.SetPosition(glm::vec3(50, 10, 70));
	_model7->transform.SetRotation(glm::vec3(90, 45, 0));
	_model7->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model7, shader);

}

void Fighter::Update()
{
}

void Fighter::End()
{
}
