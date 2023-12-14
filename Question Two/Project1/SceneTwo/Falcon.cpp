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
	model->transform.SetPosition(glm::vec3(-2, 6, 3));
	model->transform.SetRotation(glm::vec3(40, 90, 0));
	model->transform.SetScale(glm::vec3(0.02f));

	renderer->AddModelsAndShader(model, shader);

	model->isVisible = true;
}

void Falcon::Update()
{


}

void Falcon::End()
{


}
