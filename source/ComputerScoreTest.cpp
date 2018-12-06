#include "AI.h"
#include "Rule.h"
#include "ChessBoard.h"
#include <iostream>

using namespace std;

int main() {

	ChessBoard chessboard;
	Chess chess1;
	Chess chess2;
	AI ai;

	chess1.setColour(0);
	chess1.setPosition(14, 14);

	chess2.setColour(0);
	chess2.setPosition(9, 11);

	int state[15][15] = {
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//0  15
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//1  14
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//2  13
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//3  12
		0 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//4  11
		0 ,0 ,0 ,0 ,0 ,0 ,1 ,1 ,0 ,2 ,0 ,0 ,0 ,0 ,0,//5  10
		0 ,0 ,0 ,0 ,0 ,0 ,2 ,2 ,1 ,2 ,0 ,0 ,0 ,0 ,0,//6  9
		0 ,0 ,0 ,0 ,0 ,0 ,1 ,1 ,2 ,1 ,0 ,0 ,0 ,0 ,0,//7  8
		0 ,0 ,0 ,0 ,0 ,0 ,2 ,2 ,1 ,0 ,1 ,0 ,0 ,0 ,0,//8  7
		0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//9  6
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//10 5
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//11 4
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//12 3
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//13 2
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//14 1
	//  0  1  2  3  4  5  6  7  8  9  10 11 12 13 14
	//  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O
	};
	//5 10
	//11 9

	int state1[15][15] = {
		0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0,//0  15
		2 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,2,//1  14
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//2  13
		2 ,0 ,0 ,3 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,3 ,0 ,0 ,2,//3  12
		0 ,0 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,7 ,0 ,0 ,0 ,0,//4  11
		0 ,0 ,0 ,0 ,0 ,6 ,0 ,1 ,0 ,7 ,0 ,0 ,0 ,0 ,0,//5  10
		0 ,0 ,0 ,0 ,0 ,0 ,6 ,1 ,7 ,0 ,0 ,0 ,0 ,0 ,0,//6  9
		0 ,0 ,0 ,1 ,1 ,1 ,1 ,0 ,2 ,0 ,2 ,2 ,0 ,0 ,0,//7  8
		0 ,0 ,0 ,0 ,0 ,0 ,5 ,1 ,1 ,0 ,0 ,0 ,0 ,0 ,0,//8  7
		0 ,0 ,0 ,0 ,0 ,6 ,0 ,2 ,0 ,2 ,0 ,0 ,0 ,0 ,0,//9  6
		0 ,0 ,0 ,0 ,7 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//10 5
		2 ,0 ,0 ,3 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,3 ,0 ,0 ,2,//11 4
		0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,//12 3
		2 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,2,//13 2
		0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0,//14 1
	//  0  1  2  3  4  5  6  7  8  9  10 11 12 13 14
	//  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O
	};

	chessboard.setChessFlag(state1);

	int k;
	k = ai.cumputeScore(chessboard, chess1);
	cout << k << endl;

	//int p;
	//p = ai.cumputeScore(chessboard, chess2);
	//cout << p << endl;

	return 0;
}