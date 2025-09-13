#pragma once
#include "GameState.h"
#include "InGameState.h"

class MainMenuState : public GameState
{
public:
	void OnEnter(GameManager* manager)
	{
		std::cout << "���C�����j���[" << std::endl;
	}
	void OnUpdate(GameManager* manager, float deltaTime)
	{
		if (_getch() != NULL)
		{
			manager->ChangeState(std::make_unique<InGameState>());
		}
	}
	void OnExit(GameManager* manager)
	{
		std::cout << "���C�����j���[�I��" << std::endl;
	}
	const std::string GetName() const
	{
		std::system("cls");
		return "MainMenu";
	}
};