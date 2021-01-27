#ifndef TEMPORALITY_MESH_COMPONENT_HPP
#define TEMPORALITY_MESH_COMPONENT_HPP

#include <Temporality/Config.hpp>
#include <Temporality/Scene/Component.hpp>
#include <Temporality/Mesh.hpp>

#include <memory>
#include <vector>

namespace Temporality {

class TEMPORALITY_ENGINE_API MeshComponent : public Component
{
public:
    DISALLOW_COPY_AND_ASSIGN(MeshComponent)

    MeshComponent() = default;

    virtual ~MeshComponent() = default;

    void SetMesh(std::shared_ptr<Mesh> mesh);
    
    void Render(RenderContext * ctx) override;

private:

    std::shared_ptr<Mesh> _mesh;

}; // class MeshComponent

} // namespace Temporality

#endif // TEMPORALITY_MESH_COMPONENT_HPP