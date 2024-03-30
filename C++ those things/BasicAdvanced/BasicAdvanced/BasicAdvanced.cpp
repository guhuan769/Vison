#include <iostream>
#include <vector>

const int kBoardSize = 15; // 五子棋标准棋盘大小
enum class Player {
    kNone,
    kPlayer1,
    kPlayer2
};

// 打印棋盘
void PrintBoard(const std::vector<std::vector<Player>>& board) {
    std::cout << "  ";
    for (int i = 0; i < kBoardSize; ++i) {
        std::cout << i % 10 << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < kBoardSize; ++i) {
        std::cout << i % 10 << " ";
        for (int j = 0; j < kBoardSize; ++j) {
            if (board[i][j] == Player::kPlayer1) {
                std::cout << "X ";
            }
            else if (board[i][j] == Player::kPlayer2) {
                std::cout << "O ";
            }
            else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}

// 检查是否有玩家获胜
bool CheckWin(const std::vector<std::vector<Player>>& board, Player player) {
    // 检查行、列、对角线
    for (int i = 0; i < kBoardSize; ++i) {
        for (int j = 0; j < kBoardSize; ++j) {
            // 检查水平方向
            if (j <= kBoardSize - 5 &&
                board[i][j] == player && board[i][j + 1] == player &&
                board[i][j + 2] == player && board[i][j + 3] == player &&
                board[i][j + 4] == player) {
                return true;
            }
            // 检查垂直方向
            if (i <= kBoardSize - 5 &&
                board[i][j] == player && board[i + 1][j] == player &&
                board[i + 2][j] == player && board[i + 3][j] == player &&
                board[i + 4][j] == player) {
                return true;
            }
            // 检查对角线（从左上到右下）
            if (i <= kBoardSize - 5 && j <= kBoardSize - 5 &&
                board[i][j] == player && board[i + 1][j + 1] == player &&
                board[i + 2][j + 2] == player && board[i + 3][j + 3] == player &&
                board[i + 4][j + 4] == player) {
                return true;
            }
            // 检查对角线（从右上到左下）
            if (i >= 4 && j <= kBoardSize - 5 &&
                board[i][j] == player && board[i - 1][j + 1] == player &&
                board[i - 2][j + 2] == player && board[i - 3][j + 3] == player &&
                board[i - 4][j + 4] == player) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<std::vector<Player>> board(kBoardSize, std::vector<Player>(kBoardSize, Player::kNone));
    int turn = 0; // 轮数计数器
    int x, y; // 玩家下棋的坐标
    Player currentPlayer = Player::kPlayer1; // 当前玩家
    bool game_over = false;

    while (!game_over) {
        PrintBoard(board);
        std::cout << "Player " << (currentPlayer == Player::kPlayer1 ? "1 (X)" : "2 (O)") << ", enter your move (row and column): ";
        std::cin >> x >> y;

        // 检查输入的合法性
        if (x < 0 || x >= kBoardSize || y < 0 || y >= kBoardSize || board[x][y] != Player::kNone) {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }

        board[x][y] = currentPlayer; // 放置棋子
        // 检查是否获胜
        if (CheckWin(board, currentPlayer)) {
            PrintBoard(board);
            std::cout << "Player " << (currentPlayer == Player::kPlayer1 ? "1 (X)" : "2 (O)") << " wins!" << std::endl;
            game_over = true;
            continue;
        }

        // 检查是否平局
        if (++turn == kBoardSize * kBoardSize) {
            PrintBoard(board);
            std::cout << "The game is a draw." << std::endl;
            break;
        }
        // 切换玩家
        currentPlayer = (currentPlayer == Player::kPlayer1) ? Player::kPlayer2 : Player::kPlayer1;
    }
    return 0;
}
