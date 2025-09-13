#pragma once
#include "GameState.h"
#include "ResultState.h"

class InGameState : public GameState
{
public:
	void OnEnter(GameManager* manager)
	{
		std::cout << "ƒQ[ƒ€" << std::endl;
	}
	void OnUpdate(GameManager* manager, float deltaTime)
	{
		if (_getch() != NULL)
		{
			manager->ChangeState(std::make_unique<ResultState>());
		}
	}
	void OnExit(GameManager* manager)
	{
		std::cout << "ƒQ[ƒ€I—¹" << std::endl;
	}
	const std::string GetName() const
	{
		std::system("cls");
		return "InGame";
	}
};