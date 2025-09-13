#pragma once
#include <string>
#include <memory>
#include <iostream>
#include "conio.h"

class GameManager;

class GameState
{
public:
	virtual ~GameState() = default;
	virtual void OnEnter(GameManager* manager) = 0;
	virtual void OnUpdate(GameManager* manager, float deltaTime) = 0;
	virtual void OnExit(GameManager* manager) = 0;
	virtual const std::string GetName() const = 0;
};

class GameManager
{
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;
public:
	GameManager() : isRunning(true), gameTime(0.0f) {}
	void ChangeState(std::unique_ptr<GameState> newState)
	{
		if (currentState)
		{
			currentState->OnExit(this);
		}
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}
	void Update(float deltaTime)
	{
		gameTime += deltaTime;
		if (currentState)
		{
			currentState->OnUpdate(this, deltaTime);
		}
	}
};