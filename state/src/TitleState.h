#pragma once
#include "GameState.h"
#include "MainMenuState.h"

class TitleState : public GameState
{
public:
	void OnEnter(GameManager* manager)
	{
		std::cout << "タイトル" << std::endl;
	}
	void OnUpdate(GameManager* manager, float deltaTime)
	{
		if (_getch() != NULL)
		{
			manager->ChangeState(std::make_unique<MainMenuState>());
		}
	}
	void OnExit(GameManager* manager)
	{
		std::cout << "タイトル終了" << std::endl;
	}
	const std::string GetName() const
	{
		std::system("cls");
		return "Title";
	}
};