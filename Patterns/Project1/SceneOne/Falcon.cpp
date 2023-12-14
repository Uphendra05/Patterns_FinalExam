#include "Falcon.h"

Falcon::Falcon()
{
	renderer = Singleton::GetInstance().GetRenderer();
	shader = Singleton::GetInstance().GetDefaultShader();
}

Falcon::~Falcon()
{


}

void Falcon::Start()
{
	model = new Model("Models/Falcon/Falcon.ply");
	model->id = "Falcon";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(-2, -1, 0));
	model->transform.SetRotation(glm::vec3(10, 0, 0));
	model->transform.SetScale(glm::vec3(0.0f));

	renderer->AddModelsAndShader(model, shader);

	model->isVisible = true;


	//Scene Four

	_model = new Model(*model);

	_model->id = "FalconFour";
	SetGameObjectId(_model->id);
	_model->transform.SetPosition(glm::vec3(12, 6, 30));
	_model->transform.SetRotation(glm::vec3(-20, 90, 0));
	_model->transform.SetScale(glm::vec3(0.04f));

	renderer->AddModelsAndShader(_model, shader);





}

void Falcon::Update()
{


}

void Falcon::End()
{


}
