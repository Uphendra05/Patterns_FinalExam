#pragma once

#include "CommandGroup.h"
class CommandManager
{
public:
	CommandManager();
	~CommandManager();

	static CommandManager& GetInstance();


	void AddCommands(Command* command);
	void BeginCommandGroup();
	void BeginCommandGroup(const CommandGroupType& type = SERIES, const int &groupId =0);
	void EndCommandGroup(const int& groupId);

	void Start();
	void Update(float deltatime);

	std::vector<CommandGroup*> commandGroupList;


	bool isCommandExists(Command* command);
private:

	CommandGroup* currentCommandGroup = nullptr;
	
};


