#include "PatrolState.h"
#include "ChaseState.h"

void PatrolState::OnEnter(EnemyManager* manager)
{
}

void PatrolState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ˆ—
	// Œˆ‚ß‚ç‚ê‚½Œo˜H‚ð„‰ñ

// ‘JˆÚ
	// ƒvƒŒƒCƒ„[‚ðŒ©‚Â‚¯‚½‚ç’ÇÕó‘Ô‚É‘JˆÚ
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}
}

void PatrolState::OnExit(EnemyManager* manager)
{
}
