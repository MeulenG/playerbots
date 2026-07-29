#include "playerbot/playerbot.h"
#include "playerbot/strategy/values/ArenaTargetValue.h"
#include "Entities/Unit.h"

using namespace ai;

Unit* ArenaTargetValue::Calculate()
{
    // When the arena gates open
    // the bot should loop through the enemy team and target the first enemy
    if (bot->InArena()) {
        for (auto const& playerPair : AI_VALUE(std::list<ObjectGuid>, "possible targets"))
        {
            printf("ArenaTargetValue::Calculate() - Checking possible target: %s\n", playerPair.GetString().c_str());
            if (ai->GetUnit(playerPair)->IsPlayer())
            {
                return ai->GetUnit(playerPair);
            }
        }
    }
    return nullptr;
}
