#pragma once
#include <string>
#include <memory>
#include <iostream>

// 前方宣言
class EnemyManager;

class EnemyState
{
public:
	virtual ~EnemyState() = default;
	// 初期化
	virtual void OnEnter(EnemyManager* manager) = 0;
	// 更新
	virtual void OnUpdate(EnemyManager* manager, float deltaTime) = 0;
	// 終了
	virtual void OnExit(EnemyManager* manager) = 0;
	// ステート名取得
	virtual const std::string GetName() const = 0;
};

class EnemyManager
{
	// 現在のステート
	std::unique_ptr<EnemyState> currentState;
	// 動作中フラグ
	bool isRunning = false;
	// 経過時間
	float gameTime = 0.0f;

public:
	// 時間リセット
	void TimeReset() { gameTime = 0.0f; }
	// 時間取得
	float GetTime() const { return gameTime; }
	// 動作中フラグをオンにして時間を0から
	EnemyManager() : isRunning(true), gameTime(0.0f) {}
	
	// ステートを変更して初期化関数実行
	void ChangeState(std::unique_ptr<EnemyState> newState)
	{
		if (currentState)
		{
			currentState->OnExit(this);
		}
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}

	// 更新関数
	void Update(float deltaTime)
	{
		if (currentState)
		{
			gameTime += deltaTime;
			currentState->OnUpdate(this, deltaTime);
		}
	}
};