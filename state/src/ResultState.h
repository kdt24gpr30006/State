#pragma once
#include "GameState.h"
#include "TitleState.h"

class ResultState : public GameState
{
public:
	void OnEnter(GameManager* manager)
	{
		std::cout << "リザルト" << std::endl;
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
		std::cout << "リザルト終了" << std::endl;
	}
	const std::string GetName() const
	{
		std::system("cls");
		return "Result";
	}
};