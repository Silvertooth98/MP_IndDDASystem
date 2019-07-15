#include "EasyState.h"
#include "Engine/GameEngine.h"

EasyState::EasyState()
{
}

void EasyState::Enter(Difficulty& diff)
{
	ESTATEDIFF = EDifficulty::EASY_01;
	m_currentDiff = EASY01DIFF;
}

DifficultyState* EasyState::Update(Difficulty& diff, EStates State)
{
	switch (State)
	{
	case EStates::NONE:
		return nullptr;
		break;
	case EStates::EASY:
	{
		DifficultyState* es2 = new Easy02State();
		return es2;
		break;
	}
	case EStates::MEDIUM:
	{
		DifficultyState* ms = new MediumState();
		return ms;
		break;
	}
	case EStates::HARD:
	{
		DifficultyState* hs = new HardState();
		return hs;
		break;
	}
	default:
		return nullptr;
		break;
	}

	return nullptr;
}

void EasyState::Exit(Difficulty& diff)
{
	
}

EasyState::~EasyState()
{
}