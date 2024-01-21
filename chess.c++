#include <iostream>
#include <vector>

using namespace std;

// Define chess pieces
enum class PieceType {
    EMPTY,
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING
};

// Define chess colors
enum class Color {
    WHITE,
    BLACK
};

// Define a chess piece
struct ChessPiece {
    PieceType type;
    Color color;
};

// Define the chess board
const int BOARD_SIZE = 8;
ChessPiece board[BOARD_SIZE][BOARD_SIZE];

// Initialize the chess board
void initializeBoard() {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = {PieceType::EMPTY, Color::WHITE};
        }
    }

    // Place pawns
    for (int i = 0; i < BOARD_SIZE; ++i) {
        board[1][i] = {PieceType::PAWN, Color::WHITE};
        board[6][i] = {PieceType::PAWN, Color::BLACK};
    }

    // Place other pieces
    board[0][0] = {PieceType::ROOK, Color::WHITE};
    board[0][7] = {PieceType::ROOK, Color::WHITE};
    board[7][0] = {PieceType::ROOK, Color::BLACK};
    board[7][7] = {PieceType::ROOK, Color::BLACK};

    board[0][1] = {PieceType::KNIGHT, Color::WHITE};
    board[0][6] = {PieceType::KNIGHT, Color::WHITE};
    board[7][1] = {PieceType::KNIGHT, Color::BLACK};
    board[7][6] = {PieceType::KNIGHT, Color::BLACK};

    board[0][2] = {PieceType::BISHOP, Color::WHITE};
    board[0][5] = {PieceType::BISHOP, Color::WHITE};
    board[7][2] = {PieceType::BISHOP, Color::BLACK};
    board[7][5] = {PieceType::BISHOP, Color::BLACK};

    board[0][3] = {PieceType::QUEEN, Color::WHITE};
    board[0][4] = {PieceType::KING, Color::WHITE};
    board[7][3] = {PieceType::QUEEN, Color::BLACK};
    board[7][4] = {PieceType::KING, Color::BLACK};
}

// Display the chess board
void displayBoard() {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            switch (board[i][j].type) {
                case PieceType::EMPTY:
                    cout << ".";
                    break;
                case PieceType::PAWN:
                    cout << (board[i][j].color == Color::WHITE ? "P" : "p");
                    break;
                case PieceType::ROOK:
                    cout << (board[i][j].color == Color::WHITE ? "R" : "r");
                    break;
                case PieceType::KNIGHT:
                    cout << (board[i][j].color == Color::WHITE ? "N" : "n");
                    break;
                case PieceType::BISHOP:
                    cout << (board[i][j].color == Color::WHITE ? "B" : "b");
                    break;
                case PieceType::QUEEN:
                    cout << (board[i][j].color == Color::WHITE ? "Q" : "q");
                    break;
                case PieceType::KING:
                    cout << (board[i][j].color == Color::WHITE ? "K" : "k");
                    break;
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    initializeBoard();

    int moveCounter = 0;

    while (true) {
        displayBoard();

        // Your move logic goes here

        // For simplicity, let's assume alternating moves between white and black
        // In a real chess game, you'd need a way to input moves and validate them

        // Increment move counter
        moveCounter++;

        // Exit the loop after a certain number of moves (for demonstration purposes)
        if (moveCounter >= 10) {
            cout << "Game Over. Maximum moves reached." << endl;
            break;
        }
    }

    return 0;
}
