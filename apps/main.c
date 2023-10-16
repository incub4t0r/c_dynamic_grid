#include <stdio.h>
#include <stdlib.h>
#include "grid.h"

void
shoot_line(grid_t *grid)
{
    // for each x and y index, scan in each cardinal direction to see how far the point can see without being blocked.
    for (int y_idx = 0; y_idx < grid->capacity; y_idx ++)
    {
        int current_value = 0;
        for (int x_idx = 0; x_idx < grid->capacity; x_idx++)
        {
            current_value = grid->points[y_idx][x_idx].value;
            // shoot in each direction
            int x_dir = 0;
            int y_dir = 1;
            int tmp = 0;
            for (int dir_itr = 0; dir_itr < 4; dir_itr++)
            {
                int direction_view = 0;
                for (int step = 0; step < grid->capacity; step++)
                {
                    int extend_x = x_dir * step;
                    int extend_y = y_dir * step;
                    int next_x = (extend_x + x_idx);
                    int next_y = (extend_y + y_idx);
                    if (next_x != x_idx || next_y != y_idx)
                    {
                        // do your code here for line shooting
                    }
                }
                tmp = x_dir;
                x_dir = -y_dir;
                y_dir = tmp;
            }
        }
    }
}