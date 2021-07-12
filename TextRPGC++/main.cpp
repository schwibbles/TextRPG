#include <iostream>
#include <Windows.h>

#include "selection.h"
#include "enemyHandler.h"

int main(int argc, char* argv[]) {

	//Selection mySelection;
	//mySelection.race_select().getName();
	//mySelection.class_select().getName();
	
	randEnemy myEnemy;
	Race testRace = myEnemy.randomRace();
	Class_ testClass = myEnemy.randomClass();
	string testName = myEnemy.randomName(testRace);
	vector<Move> testMoves = myEnemy.randomMoves(testRace);

	cout << "Race: " << testRace.getName() << endl;
	cout << "Class: " << testClass.getName() << endl;
	cout << "Name: " << testName << endl;
	cout << "Moves: ";
	for (int i = 0; i < testMoves.size(); i++) {
		testMoves[i].printName();
		(i != testMoves.size() - 1) ? (cout << ", ") : (cout << "\n");
	}

	return 0;
}