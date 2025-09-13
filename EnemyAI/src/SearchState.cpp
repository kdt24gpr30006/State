#include "SearchState.h"
#include "ChaseState.h"
#include "PatrolState.h"

void SearchState::OnEnter(EnemyManager* manager)
{
	manager->TimeReset(); // ゲーム時間をリセット
}

void SearchState::OnUpdate(EnemyManager* manager, float deltaTime)
{
// 処理
	// 最後に見た位置を探索

// 遷移
	// プレイヤーを再発見したら追跡状態に遷移
	if (false)
	{
		manager->ChangeState(std::make_unique<ChaseState>());
	}

	// 一定時間たったらパトロール状態に遷移
	const float searchTime = 30.0f;
	if (manager->GetTime() > searchTime)
	{
		manager->ChangeState(std::make_unique<PatrolState>());
	}
}

void SearchState::OnExit(EnemyManager* manager)
{
}
