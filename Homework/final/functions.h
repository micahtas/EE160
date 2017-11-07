void init_level(int level, int dir, int row, int col);

int next_dir(int dir, char ch);

int next_row(int dir, int row);

int next_col(int dir, int col);

int wall_check(int dir, int N, int E, int W, int S);

int found_center(int row, int col);
