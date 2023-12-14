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
	model->transform.SetScale(glm::vec3(0.04f));

	renderer->AddModelsAndShader(model, shader);
}

void Falcon::Update()
{


}

void Falcon::End()
{


}
