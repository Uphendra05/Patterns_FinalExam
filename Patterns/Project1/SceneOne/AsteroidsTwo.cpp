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
	model->transform.SetPosition(glm::vec3(83, -1, -20));
	model->transform.SetRotation(glm::vec3(0, 90, 0));
	model->transform.SetScale(glm::vec3(0.011f));
	renderer->AddModelsAndShader(model, shader);

	// Scene Four 

	_model = new Model(*model);
	_model->id = "AsteroidTwoSceneFour";
	SetGameObjectId(_model->id);
	_model->transform.SetPosition(glm::vec3(-1, 8, 12));
	_model->transform.SetRotation(glm::vec3(0, 90, 0));
	_model->transform.SetScale(glm::vec3(0.040f));
	renderer->AddModelsAndShader(_model, shader);


	asteroidOne = new Model("Models/Asteroid/AsteroidThree.ply");
	asteroidOne->id = "AsteroidThreeSceneFour";
	SetGameObjectId(asteroidOne->id);
	asteroidOne->transform.SetPosition(glm::vec3(18, 0, 10));
	asteroidOne->transform.SetRotation(glm::vec3(90, 90, 0));
	asteroidOne->transform.SetScale(glm::vec3(0.009f));
	renderer->AddModelsAndShader(asteroidOne, shader);

	asteroidTwo = new Model("Models/Asteroid/AsteroidFour.ply");
	asteroidTwo->id = "AsteroidFourSceneFour";
	SetGameObjectId(asteroidTwo->id);
	asteroidTwo->transform.SetPosition(glm::vec3(15, -5, -14));
	asteroidTwo->transform.SetRotation(glm::vec3(90, 90, 0));
	asteroidTwo->transform.SetScale(glm::vec3(0.005f));
	renderer->AddModelsAndShader(asteroidTwo, shader);

	asteroidTwo = new Model("Models/Asteroid/AsteroidFour.ply");
	asteroidTwo->id = "AsteroidFourSceneFour";
	SetGameObjectId(asteroidTwo->id);
	asteroidTwo->transform.SetPosition(glm::vec3(15, -5, -14));
	asteroidTwo->transform.SetRotation(glm::vec3(90, 90, 0));
	asteroidTwo->transform.SetScale(glm::vec3(0.005f));
	renderer->AddModelsAndShader(asteroidTwo, shader);

	asteroidThree = new Model("Models/Asteroid/AsteroidFour.ply");
	asteroidThree->id = "AsteroidFiveSceneFour";
	SetGameObjectId(asteroidThree->id);
	asteroidThree->transform.SetPosition(glm::vec3(20, -10, 0));
	asteroidThree->transform.SetRotation(glm::vec3(90, 90, 0));
	asteroidThree->transform.SetScale(glm::vec3(0.002f));
	renderer->AddModelsAndShader(asteroidThree, shader);
}

void AsteroidsTwo::Update()
{
}

void AsteroidsTwo::End()
{
}
