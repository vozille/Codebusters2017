import sys
sys.stdin = open("input1.txt", "r")
sys.stdout = open("output1.txt", "w")

# three cases, this is a bit complicated than ad hoc

def getDiagonal1(mat):
	return [mat[0][0], mat[1][1], mat[2][2]]
def getDiagonal2(mat):
	return [mat[0][2], mat[1][1], mat[2][0]]
def getCol1(mat):
	return [mat[0][0], mat[1][0], mat[2][0]]
def getCol2(mat):
	return [mat[0][1], mat[1][1], mat[2][1]]
def getCol3(mat):
	return [mat[0][2], mat[1][2], mat[2][2]]

for tc in range(int(input())):
    ch = input()
    mat = []
    empty_places = 0
    for i in range(3):
    	row1 = input()
    	row = [row1[0], row1[1], row1[2]]
    	mat.append(row)
    	empty_places += row.count('-')

    winner = 'No'
    #all filled
    if empty_places == 0:
    	winner = 'Game Over'

    #check if someone has won the game (rows)
    if len(set(mat[0])) == 1 and mat[0][0] != '-':
    	winner = 'Game Over'
    if len(set(mat[1])) == 1 and mat[1][0] != '-':
    	winner = 'Game Over'
    if len(set(mat[2])) == 1 and mat[2][0] != '-':
    	winner = 'Game Over'

    #check if someone has won the game (cols)
    if len(set(getCol1(mat))) == 1 and getCol1(mat)[0] != '-':
    	winner = 'Game Over'
    if len(set(getCol2(mat))) == 1 and getCol2(mat)[0] != '-':
    	winner = 'Game Over'
    if len(set(getCol3(mat))) == 1 and getCol3(mat)[0] != '-':
    	winner = 'Game Over'
    #check diagonals
    if len(set(getDiagonal1(mat))) == 1 and getDiagonal1(mat)[0] != '-':
    	winner = 'Game Over'
    if len(set(getDiagonal2(mat))) == 1 and getDiagonal2(mat)[0] != '-':
    	winner = 'Game Over'

    #check if possible to win
    #check rows
    if mat[0].count(ch) == 2 and mat[0].count('-') == 1:
    	winner = 'Yes'
    if mat[1].count(ch) == 2 and mat[1].count('-') == 1:
    	winner = 'Yes'
    if mat[2].count(ch) == 2 and mat[2].count('-') == 1:
    	winner = 'Yes'
    #check cols
    if getCol1(mat).count(ch) == 2 and getCol1(mat).count('-') == 1:
    	winner = 'Yes'
    if getCol2(mat).count(ch) == 2 and getCol2(mat).count('-') == 1:
    	winner = 'Yes'
    if getCol3(mat).count(ch) == 2 and getCol3(mat).count('-') == 1:
    	winner = 'Yes'
    #check diagonals
    if getDiagonal1(mat).count(ch) == 2 and getDiagonal1(mat).count('-') == 1:
    	winner = 'Yes'
    # if getDiagonal2(mat).count(ch) == 2 and getDiagonal2(mat).count('-') == 1:
    # 	winner = 'Yes'
    print(winner)