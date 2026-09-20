#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main()
{
    // Screen size
    const int width = 80;
    const int height = 40;

    // Cube vertices
    float vertices[8][3] = {

        {-1, -1, -1},
        { 1, -1, -1},
        { 1,  1, -1},
        {-1,  1, -1},

        {-1, -1,  1},
        { 1, -1,  1},
        { 1,  1,  1},
        {-1,  1,  1}
    };


    // Cube edges
    int edges[12][2] = {

        {0,1},
        {1,2},
        {2,3},
        {3,0},

        {4,5},
        {5,6},
        {6,7},
        {7,4},

        {0,4},
        {1,5},
        {2,6},
        {3,7}
    };


    float angle = 0;


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


        // Store projected points
        int projected[8][2];


        // Rotation
        for (int i = 0; i < 8; i++)
        {
            float x = vertices[i][0];
            float y = vertices[i][1];
            float z = vertices[i][2];


            // Rotate around Y axis
            float rotatedX =
                x * cos(angle) -
                z * sin(angle);

            float rotatedZ =
                x * sin(angle) +
                z * cos(angle);


            // Rotate around X axis
            float rotatedY =
                y * cos(angle) -
                rotatedZ * sin(angle);


            float finalZ =
                y * sin(angle) +
                rotatedZ * cos(angle);


            // Move cube away from camera
            finalZ += 5;


            // Perspective projection
            float scale = 30 / finalZ;


            int screenX =
                width / 2 +
                rotatedX * scale;


            int screenY =
                height / 2 -
                rotatedY * scale;


            projected[i][0] = screenX;
            projected[i][1] = screenY;
        }


        // Draw edges
        for (int i = 0; i < 12; i++)
        {
            int x1 = projected[edges[i][0]][0];
            int y1 = projected[edges[i][0]][1];

            int x2 = projected[edges[i][1]][0];
            int y2 = projected[edges[i][1]][1];


            // Number of points between vertices
            int steps = 50;


            for (int j = 0; j <= steps; j++)
            {
                float t = (float)j / steps;


                int x =
                    x1 + (x2 - x1) * t;

                int y =
                    y1 + (y2 - y1) * t;


                if (
                    x >= 0 &&
                    x < width &&
                    y >= 0 &&
                    y < height
                )
                {
                    screen[y][x] = '#';
                }
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
        angle += 0.05;


        // Small delay
        usleep(30000);
    }


    return 0;
}
