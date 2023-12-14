#include "AsteroidGroup.h"

AsteroidGroup::AsteroidGroup()
{
	renderer = Singleton::GetInstance().GetRenderer();
	shader = Singleton::GetInstance().GetDefaultShader();
}

AsteroidGroup::~AsteroidGroup()
{
}

void AsteroidGroup::Start()
{
	model = new Model("Models/AsteroidGroup/AsteroidGroupOne.ply");
	model->id = "AsteroidGroupOne";
	SetGameObjectId(model->id);
	model->transform.SetPosition(glm::vec3(190, -1, 40));
	model->transform.SetRotation(glm::vec3(0, 90, 0));
	model->transform.SetScale(glm::vec3(0.024f));
	renderer->AddModelsAndShader(model, shader);

	 _model = new Model(*model);
	_model->id = "AsteroidGroupOne";
	SetGameObjectId(_model->id);
	_model->transform.SetPosition(glm::vec3(10, -17, 80));
	_model->transform.SetRotation(glm::vec3(0, 90, 0));
	_model->transform.SetScale(glm::vec3(0.014f));
	renderer->AddModelsAndShader(_model, shader);

	
	_model2 = new Model(*model);
	_model2->id = "AsteroidGroupOne";
	SetGameObjectId(_model2->id);
	_model2->transform.SetPosition(glm::vec3(10, 17, 80));
	_model2->transform.SetRotation(glm::vec3(0, -90, 0));
	_model2->transform.SetScale(glm::vec3(0.014f));
	renderer->AddModelsAndShader(_model2, shader);



	asteroidOne = new Model("Models/Asteroid/AsteroidThree.ply");
	asteroidOne->id = "AsteroidGroupOne";
	SetGameObjectId(asteroidOne->id);
	asteroidOne->transform.SetPosition(glm::vec3(20, -3, -15));
	asteroidOne->transform.SetRotation(glm::vec3(90, 90, 0));
	asteroidOne->transform.SetScale(glm::vec3(0.004f));
	renderer->AddModelsAndShader(asteroidOne, shader);

	asteroidTwo = new Model("Models/Asteroid/AsteroidFour.ply");
	asteroidTwo->id = "AsteroidGroupOne";
	SetGameObjectId(asteroidTwo->id);
	asteroidTwo->transform.SetPosition(glm::vec3(10, 4, -15));
	asteroidTwo->transform.SetRotation(glm::vec3(90, 90, 0));
	asteroidTwo->transform.SetScale(glm::vec3(0.002f));
	renderer->AddModelsAndShader(asteroidTwo, shader);


	/*model->isVisible = false;
		_model->isVisible = false;
		_model2->isVisible = false;*/
}

void AsteroidGroup::Update(float deltaTime)
{
	 model->transform.position.x -= 20 * deltaTime;
	_model->transform.position.x -= 10 * deltaTime;
   _model2->transform.position.x -= 5 * deltaTime;
	asteroidOne->transform.position.x -= 30 * deltaTime;
	asteroidTwo->transform.position.x -= 50 * deltaTime;


}

void AsteroidGroup::End()
{
}
