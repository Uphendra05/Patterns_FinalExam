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
	/*model = new Model("Models/Asteroid/Asteroid.ply");
	model->id = "Asteroid";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(50, -1, 0));
	model->transform.SetRotation(glm::vec3(0, 90, 0));
	model->transform.SetScale(glm::vec3(0.034f));
	renderer->AddModelsAndShader(model, shader);*/

	//Scene Three

	/*_model = new Model("Models/Asteroid/Asteroid.ply");
	_model->id = "AsteroidSceneThree";
	SetGameObjectId(_model->id);
	_model->transform.SetPosition(glm::vec3(17, 27.0, -13));
	_model->transform.SetRotation(glm::vec3(0, 90, 0));
	_model->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(_model, shader);*/


	


	


}

void Asteroids::Update()
{
}

void Asteroids::End()
{
}
