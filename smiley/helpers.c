#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing.
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            if (image[row][col].rgbtRed == 0x00
                && image[row][col].rgbtGreen == 0x00
                && image[row][col].rgbtBlue == 0x00)
            {
                // Change all black pixels to blue.
                image[row][col].rgbtBlue = 0xff;
            }
        }
    }
}