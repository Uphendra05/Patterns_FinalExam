#include "Asteroids.h"

Asteroids::Asteroids()
{
	renderer = Singleton::GetInstance().GetRenderer();
	shader = Singleton::GetInstance().GetDefaultShader();
}

Asteroids::~Asteroids()
{
}

void Asteroids::Start()
{
	model = new Model("Models/Asteroid/Asteroid.ply");
	model->id = "Asteroid";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(50, -1, 0));
	model->transform.SetRotation(glm::vec3(0, 90, 0));
	model->transform.SetScale(glm::vec3(0.034f));
	renderer->AddModelsAndShader(model, shader);


}

void Asteroids::Update()
{
}

void Asteroids::End()
{
}
