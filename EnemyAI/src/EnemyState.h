#pragma once
#include <string>
#include <memory>
#include <iostream>

// �O���錾
class EnemyManager;

class EnemyState
{
public:
	virtual ~EnemyState() = default;
	// ������
	virtual void OnEnter(EnemyManager* manager) = 0;
	// �X�V
	virtual void OnUpdate(EnemyManager* manager, float deltaTime) = 0;
	// �I��
	virtual void OnExit(EnemyManager* manager) = 0;
	// �X�e�[�g���擾
	virtual const std::string GetName() const = 0;
};

class EnemyManager
{
	// ���݂̃X�e�[�g
	std::unique_ptr<EnemyState> currentState;
	// ���쒆�t���O
	bool isRunning = false;
	// �o�ߎ���
	float gameTime = 0.0f;

public:
	// ���ԃ��Z�b�g
	void TimeReset() { gameTime = 0.0f; }
	// ���Ԏ擾
	float GetTime() const { return gameTime; }
	// ���쒆�t���O���I���ɂ��Ď��Ԃ�0����
	EnemyManager() : isRunning(true), gameTime(0.0f) {}
	
	// �X�e�[�g��ύX���ď������֐����s
	void ChangeState(std::unique_ptr<EnemyState> newState)
	{
		if (currentState)
		{
			currentState->OnExit(this);
		}
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}

	// �X�V�֐�
	void Update(float deltaTime)
	{
		if (currentState)
		{
			gameTime += deltaTime;
			currentState->OnUpdate(this, deltaTime);
		}
	}
};