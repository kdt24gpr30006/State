#include "AttackState.h"
#include "ChaseState.h"

void AttackState::OnEnter(EnemyManager* manager)
{
}

void AttackState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ����
	// �v���C���[�ɍU�����s��
	// �U����̓N�[���_�E��

// �J��
	// �U���͈͂���o����ǐՏ�ԂɑJ��
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}
}

void AttackState::OnExit(EnemyManager* manager)
{
}
