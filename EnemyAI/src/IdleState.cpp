#include "IdleState.h"
#include "PatrolState.h"
#include "ChaseState.h"

void IdleState::OnEnter(EnemyManager* manager)
{
	// ゲーム時間をリセット
	manager->TimeReset();

	std::cout << "アイドル状態" << std::endl;
}

void IdleState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// 処理
	// その場で待機し周辺を警戒

// 遷移
	// 一定時間たったらパトロール状態に遷移
	const float idleTime = 30.0f;
	if (manager->GetTime() > idleTime)
	{
		manager->ChangeState(std::make_unique<PatrolState>());
	}

	// プレイヤーを見つけたら追跡状態に遷移
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}

}

void IdleState::OnExit(EnemyManager* manager)
{
	std::cout << "アイドル状態終了" << std::endl;
}
