#include "EnemyState.h"
#include "IdleState.h"
#include <iostream>

int main()
{
	EnemyManager enemy;
	enemy.ChangeState(std::make_unique<IdleState>());
	// ゲームループの例
	float deltaTime = 0.0016f;
	while(true)
	{
		std::cout << enemy.GetTime() << std::endl;
		enemy.Update(deltaTime);
	}
	return 0;
}
