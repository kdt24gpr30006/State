#pragma once
#include "EnemyState.h"

class PatrolState : public EnemyState
{
public:
	void OnEnter(EnemyManager* manager);
	void OnUpdate(EnemyManager* manager, float deltaTime);
	void OnExit(EnemyManager* manager);
	const std::string GetName() const { return "PatrolState"; }
};