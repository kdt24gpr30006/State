#include "AttackState.h"
#include "ChaseState.h"

void AttackState::OnEnter(EnemyManager* manager)
{
}

void AttackState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ˆ—
	// ƒvƒŒƒCƒ„[‚ÉUŒ‚‚ðs‚¤
	// UŒ‚Œã‚ÍƒN[ƒ‹ƒ_ƒEƒ“

// ‘JˆÚ
	// UŒ‚”ÍˆÍ‚©‚ço‚½‚ç’ÇÕó‘Ô‚É‘JˆÚ
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}
}

void AttackState::OnExit(EnemyManager* manager)
{
}
