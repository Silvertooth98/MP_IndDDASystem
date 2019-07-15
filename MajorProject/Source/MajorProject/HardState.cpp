#include "HardState.h"
#include "Engine/GameEngine.h"

HardState::HardState()
{
}

void HardState::Enter(Difficulty& diff)
{
	ESTATEDIFF = EDifficulty::HARD_01;
	m_currentDiff = HARD01DIFF;
}

DifficultyState* HardState::Update(Difficulty& diff, EStates State)
{
	switch (State)
	{
	case EStates::NONE:
		return nullptr;
		break;
	case EStates::EASY:
	{
		DifficultyState* es = new EasyState();
		return es;
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
		DifficultyState* hs2 = new Hard02State();
		return hs2;
		break;
	}
	default:
		return nullptr;
		break;
	}

	return nullptr;
}

void HardState::Exit(Difficulty& diff)
{
}

HardState::~HardState()
{
}
