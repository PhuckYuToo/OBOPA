#include <iostream>
#include <ctime>
#include "GL/GLEW.h"
#include "GLFW/GLFW3.h"
#include "Map.h"

//Made by Can Ur

/* Vul een matrix (25x25) random met een cel.
 * Voor iedere volgende generatie bereken
 * het aantal buren: Cellen met <2 of >3 buren sterven.
 * Cellen met precies 2 of 3 buren overleven.
 * Lege cellen met 3 buren krijgen nieuwe cel.
 * Herhaal…
 * [XXXX]
 * [X] - Maak classes voor de verschillende entiteiten
 * [X] - Implementeer de standaardregels (hierboven) volgens 't strategy-pattern.
 * [X] - Maak 2 alternatieve implementaties van deze strategy
 */


//In Map.cpp kan je alternatieve regels e.v.t uitcommenten. (Regel 45 & 48)


static const int WINDOW_WIDTH = 700;
static const int WINDOW_HEIGHT = 640;
static const int MAP_SIZE = 80;
static const int EVOLUTION_DELAY = 2;

int main()
{
    srand(time(0));

    //OpenGL init / Window init
    GLFWwindow* window;
    if (!glfwInit()) return -1;
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game Of Life", NULL, NULL);
    if(!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    //Center window
    const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    glfwSetWindowPos(window, mode->width/2 - WINDOW_WIDTH/2, mode->height/2 - WINDOW_HEIGHT/2);

    //Game of Life Map / Array Creation
    Map map(MAP_SIZE, EVOLUTION_DELAY);

    //Perspective
    glMatrixMode(GL_PROJECTION);
    glOrtho(0, MAP_SIZE, 0.0, MAP_SIZE, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0, 0, 0, 1);

    //Loop
    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        map.draw();
        glFlush();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}