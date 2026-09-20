#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main()
{
    // Terminal screen
    const int width = 80;
    const int height = 40;

    // Circle radius
    float radius = 10.0f;

    // Rotation angle
    float angle = 0.0f;

    while (true)
    {
        // Screen buffer
        char screen[height][width];

        // Fill screen with spaces
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                screen[y][x] = ' ';
            }
        }


        // Create 3D circle points
        for (int i = 0; i < 360; i++)
        {
            // Convert degrees to radians
            float theta = i * 3.14159f / 180.0f;


            // Circle in 3D
            float x = radius * cos(theta);
            float y = radius * sin(theta);
            float z = 0;


            // Rotate circle around Y axis
            float rotatedX =
                x * cos(angle) -
                z * sin(angle);

            float rotatedZ =
                x * sin(angle) +
                z * cos(angle);


            // Move circle away from camera
            float depth = rotatedZ + 20;


            // Perspective projection
            float scale = 30 / depth;


            // 3D -> 2D
            int screenX =
                width / 2 +
                rotatedX * scale;


            int screenY =
                height / 2 -
                y * scale;


            // Check screen boundaries
            if (
                screenX >= 0 &&
                screenX < width &&
                screenY >= 0 &&
                screenY < height
            )
            {
                screen[screenY][screenX] = '#';
            }
        }


        // Clear terminal
        cout << "\033[2J\033[H";


        // Print screen
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                cout << screen[y][x];
            }

            cout << '\n';
        }


        // Increase rotation
        angle += 0.03f;


        // Small delay
        usleep(30000);
    }

    return 0;
}
