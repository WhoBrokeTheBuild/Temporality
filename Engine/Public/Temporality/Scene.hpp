#ifndef SCENE_H
#define SCENE_H

#include <Temporality/Axis.hpp>
#include <Temporality/Config.hpp>
#include <Temporality/GameObject.hpp>
#include <Temporality/Mesh.hpp>
#include <Temporality/Skybox.hpp>
//#include <Temporality/Shader.hpp>

#include <memory>
#include <unordered_map>

class Scene : public GameObject
{
public:

    Scene() = default;
    virtual ~Scene() = default;
    
    virtual void Start() {}
    virtual void Pause() {}
    virtual void Resume() {}

    virtual void Update(float dt);
    virtual void Render();

    bool LoadScene(std::string filename);

    // Ui Options.
    static void Options();

    GameObject* AddGameObject(std::string name, std::unique_ptr<GameObject> gameObject);
    GameObject* AddGameObject();
    GameObject* AddGameObject(std::string name);
    GameObject* AddGameObject(std::unique_ptr<GameObject> gobj);

    void CreateSkybox(std::vector<std::string> faces);
    Skybox* GetSkybox() { return _mSkybox.get(); }

private:
    glm::mat4 _mSceneTransform = glm::mat4(1);

    std::unique_ptr<Skybox> _mSkybox;
};

#endif // SCENE_H