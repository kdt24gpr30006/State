#include "IdleState.h"
#include "PatrolState.h"
#include "ChaseState.h"

void IdleState::OnEnter(EnemyManager* manager)
{
	// �Q�[�����Ԃ����Z�b�g
	manager->TimeReset();

	std::cout << "�A�C�h�����" << std::endl;
}

void IdleState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// ����
	// ���̏�őҋ@�����ӂ��x��

// �J��
	// ��莞�Ԃ�������p�g���[����ԂɑJ��
	const float idleTime = 30.0f;
	if (manager->GetTime() > idleTime)
	{
		manager->ChangeState(std::make_unique<PatrolState>());
	}

	// �v���C���[����������ǐՏ�ԂɑJ��
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}

}

void IdleState::OnExit(EnemyManager* manager)
{
	std::cout << "�A�C�h����ԏI��" << std::endl;
}
