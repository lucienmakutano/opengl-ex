#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

// https://stackoverflow.com/questions/43200926/how-to-add-opengl-library-in-clion
// https://stackoverflow.com/questions/9336263/glfw-undefined-references
// https://github.com/KhronosGroup/Vulkan-Samples

int main() {
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "My window", nullptr, nullptr);
    if (window == nullptr) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    std::cout << gladLoadGL() << std::endl;
//    glViewport(0, 0, 800, 600);
//    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glfwSwapBuffers(window);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwMakeContextCurrent(window);

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
