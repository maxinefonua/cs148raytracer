#pragma once

#include "common/common.h"

class Renderer : public std::enable_shared_from_this<Renderer>
{
public:
    Renderer(std::shared_ptr<class Scene> scene, std::shared_ptr<class Sampler> sampler);
    
    glm::vec3 ComputeSampleColor(const struct IntersectionState& intersection) const;
private:
    std::shared_ptr<class Scene> storedScene;
    std::shared_ptr<class Sampler> storedSampler;
};