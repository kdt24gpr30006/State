#include "SearchState.h"
#include "ChaseState.h"
#include "PatrolState.h"

void SearchState::OnEnter(EnemyManager* manager)
{
	manager->TimeReset(); // �Q�[�����Ԃ����Z�b�g
}

void SearchState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ����
	// �Ō�Ɍ����ʒu��T��

// �J��
	// �v���C���[���Ĕ���������ǐՏ�ԂɑJ��
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}

	// ��莞�Ԃ�������p�g���[����ԂɑJ��
	const float searchTime = 30.0f;
	if (manager->GetTime() > searchTime)
	{
		manager->ChangeState(std::make_unique<PatrolState>());
	}
}

void SearchState::OnExit(EnemyManager* manager)
{
}
