#pragma once

#include "common/common.h"
#include "common/Scene/Geometry/Simple/Box/Box.h"

class AccelerationNode
{
public:
    virtual Box GetBoundingBox() = 0;
    virtual bool Trace(class Ray* inputRay, struct IntersectionState* outputIntersection) const = 0;
};