#include "ChaseState.h"
#include "PatrolState.h"
#include "AttackState.h"

void ChaseState::OnEnter(EnemyManager* manager)
{
}

void ChaseState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ����
	// �v���C���[�Ɍ������Ĉړ�

// �J��
	// �v���C���[������������p�g���[����ԂɑJ��
	if (false)
	{
		manager->ChangeState(std::make_unique<PatrolState>());
	}
	// �U���͈͂ɓ�������U����ԂɑJ��
	if(false)
	{
		manager->ChangeState(std::make_unique<AttackState>());
	}
}

void ChaseState::OnExit(EnemyManager* manager)
{
}
