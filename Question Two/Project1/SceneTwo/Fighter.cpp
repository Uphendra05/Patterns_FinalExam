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
{
	model = new Model("Models/Fighter/Fighter.ply");
	model->id = "Fighter";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(5, 6, 13));
	model->transform.SetRotation(glm::vec3(40, 0, 0));
	model->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(model, shader);

	_model2 = new Model(*model);
	_model2->id = "FighterTwo";
	SetGameObjectId(_model2->id);
	_model2->transform.SetPosition(glm::vec3(0, 8, 13));
	_model2->transform.SetRotation(glm::vec3(40, 0, 0));
	_model2->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model2, shader);

	_model3 = new Model(*model);
	_model3->id = "FighterThree";
	SetGameObjectId(_model3->id);
	_model3->transform.SetPosition(glm::vec3(-1, 7, 13));
	_model3->transform.SetRotation(glm::vec3(40, 0, 0));
	_model3->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model3, shader);


	_model4 = new Model(*model);
	_model4->id = "FighterFour";
	SetGameObjectId(_model4->id);
	_model4->transform.SetPosition(glm::vec3(4, 0, 13));
	_model4->transform.SetRotation(glm::vec3(40, 0, 0));
	_model4->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model4, shader);



}

void Fighter::Update()
{
}

void Fighter::End()
{
}
