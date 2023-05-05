from sympy import Matrix

l = [[6, 2, -3], [5, 1, 4], [2, 7, 1]]
l_mat = []

for i in range(len(l[0])):
	l_mat.append([l[0][i], l[1][i], l[2][i]])

mat = Matrix(l_mat)

print(abs(mat.det()))