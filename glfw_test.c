#include <GLFW/glfw3.h>
#include <GL/gl.h>

int main() {
    // 初始化 GLFW
    if (!glfwInit()) {
        return -1;
    }

    // 创建一个窗口和 OpenGL 上下文
    GLFWwindow* window = glfwCreateWindow(640, 480, "GLFW Test", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // 设置当前上下文
    glfwMakeContextCurrent(window);

    // 循环，直到用户关闭窗口
    while (!glfwWindowShouldClose(window)) {
        // 清除屏幕
        glClear(GL_COLOR_BUFFER_BIT);

        // 交换前后缓冲区
        glfwSwapBuffers(window);

        // 处理事件
        glfwPollEvents();
    }

    // 清理并关闭 GLFW
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
