#include "GameState.h"
#include "TitleState.h"

int main()
{
	std::unique_ptr<GameManager> gameManager = std::make_unique<GameManager>();
	gameManager->ChangeState(std::make_unique<TitleState>());
	const float deltaTime = 0.1f;
	while (true)
	{
		gameManager->Update(deltaTime);
	}
	return 0;
}