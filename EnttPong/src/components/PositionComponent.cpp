///
/// PositionComponent.cpp
/// EnttPong
///
/// MIT LICENSE.
/// Refer to LICENSE.txt for more details.
///

#include "PositionComponent.hpp"

namespace ep
{
	PositionComponent::PositionComponent(int initialX, int initialY)
		:m_x(initialX), m_y(initialY)
	{
	}

	PositionComponent& PositionComponent::operator=(const PositionComponent &)
	{
		return *this;
	}
}