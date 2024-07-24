#pragma once

#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/godot.hpp>

#include <cstdint>

class Movement : public godot::Node2D
{
    GDCLASS(Movement, godot::Node2D)

public:
    // Will be called by Godot when the class is registered
    // Use this to add properties to your class
    static void _bind_methods();

    void _process(double_t delta) override;

    // property setter
    void set_speed(float_t speed) { m_Speed = speed; }

    // property getter
    [[nodiscard]] float_t get_speed() const { return m_Speed; }

private:
    godot::Vector2 m_Velocity;

    // This will be a property later (look into _bind_methods)
    float_t m_Speed = 500.0f;
    void process_movement(double_t delta);
};
