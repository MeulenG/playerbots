#pragma once
#include "playerbot/strategy/Value.h"

namespace ai {
    class ArenaTargetValue : public UnitCalculatedValue
    {
    public:
        ArenaTargetValue(PlayerbotAI* ai) : UnitCalculatedValue(ai, "arena target") {}
        ArenaTargetValue(PlayerbotAI* ai, std::string name) : UnitCalculatedValue(ai, name) {}

    public:
        virtual Unit* Calculate() override;
    };
}