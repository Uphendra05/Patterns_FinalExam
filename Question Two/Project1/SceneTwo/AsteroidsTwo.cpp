#include "AsteroidsTwo.h"

AsteroidsTwo::AsteroidsTwo()
{
	renderer = Singleton::GetInstance().GetRenderer();
	shader = Singleton::GetInstance().GetDefaultShader();
}

AsteroidsTwo::~AsteroidsTwo()
{
}

void AsteroidsTwo::Start()
{
	model = new Model("Models/Asteroid/AsteroidTwo.ply");
	model->id = "AsteroidTwo";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(10, 0.3f, -25));
	model->transform.SetRotation(glm::vec3(0, 90, 0));
	model->transform.SetScale(glm::vec3(0.003f));
	renderer->AddModelsAndShader(model, shader);


}

void AsteroidsTwo::Update()
{
}

void AsteroidsTwo::End()
{
}
