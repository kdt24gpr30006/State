#pragma once
#include "GameState.h"
#include "TitleState.h"

class ResultState : public GameState
{
public:
	void OnEnter(GameManager* manager)
	{
		std::cout << "���U���g" << std::endl;
	}
	void OnUpdate(GameManager* manager, float deltaTime)
	{
		if (_getch() != NULL)
		{
			manager->ChangeState(std::make_unique<TitleState>());
		}
	}
	void OnExit(GameManager* manager)
	{
		std::cout << "���U���g�I��" << std::endl;
	}
	const std::string GetName() const
	{
		std::system("cls");
		return "Result";
	}
};