#include "PatrolState.h"
#include "ChaseState.h"

void PatrolState::OnEnter(EnemyManager* manager)
{
}

void PatrolState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ����
	// ���߂�ꂽ�o�H������

// �J��
	// �v���C���[����������ǐՏ�ԂɑJ��
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}
}

void PatrolState::OnExit(EnemyManager* manager)
{
}
