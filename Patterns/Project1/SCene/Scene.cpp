#include "Scene.h"

Scene::Scene()
{
}

Scene::~Scene()
{
}

void Scene::Start()
{

	SceneOne();
}

void Scene::Update()
{
}

void Scene::End()
{
}

void Scene::SceneOne()
{



	SceneTwo();
}

void Scene::SceneTwo()
{



	SceneThree();
}

void Scene::SceneThree()
{
	SceneFour();
}

void Scene::SceneFour()
{
	SceneFive();
}

void Scene::SceneFive()
{
	End();
}
