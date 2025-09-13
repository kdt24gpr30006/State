#include "ChaseState.h"
#include "PatrolState.h"
#include "AttackState.h"

void ChaseState::OnEnter(EnemyManager* manager)
{
}

void ChaseState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ˆ—
	// ƒvƒŒƒCƒ„[‚ÉŒü‚©‚Á‚ÄˆÚ“®

// ‘JˆÚ
	// ƒvƒŒƒCƒ„[‚ðŒ©Ž¸‚Á‚½‚çƒpƒgƒ[ƒ‹ó‘Ô‚É‘JˆÚ
	if (false)
	{
		manager->ChangeState(std::make_unique<PatrolState>());
	}
	// UŒ‚”ÍˆÍ‚É“ü‚Á‚½‚çUŒ‚ó‘Ô‚É‘JˆÚ
	if(false)
	{
		manager->ChangeState(std::make_unique<AttackState>());
	}
}

void ChaseState::OnExit(EnemyManager* manager)
{
}
