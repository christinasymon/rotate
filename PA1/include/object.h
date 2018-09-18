#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include "graphics_headers.h"

class Object
{
  public:
    Object();
    ~Object();
    void Update(unsigned int dt);
    void Render();
    void Pause(bool);
    glm::mat4 GetModel();
    glm::mat4 GetTranslate();
    void moonplanet(unsigned int);
    void Setoriginmatrix(glm::mat4);
 
 private:
    glm::mat4 model, origin, translate;    
    std::vector<Vertex> Vertices;
    std::vector<unsigned int> Indices;
    GLuint VB;
    GLuint IB;
    bool pause;
    float angle, angle1;
    unsigned int if_moon;
};

#endif /* OBJECT_H */
