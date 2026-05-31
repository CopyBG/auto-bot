#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void update(float dt) {
        PlayLayer::update(dt);
        
        if (Mod::get()->getSettingValue<bool>("enabled") && m_player1) {
            if (m_player1->m_isGrounded) {
                pushButton(PlayerButton::Jump);
            }
        }
    }
};
