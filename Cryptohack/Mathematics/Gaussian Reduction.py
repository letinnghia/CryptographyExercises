import numpy as np 

v1 = np.array([846835985, 9834798552])
v2 = np.array([87502093, 123094980])

def gauss_reduction(v1, v2):
    while True:
        if np.linalg.norm(v2) < np.linalg.norm(v1):
            v1, v2 = v2 , v1
        m = round(np.inner(v1, v2)// np.inner(v1, v1))
        if m == 0:
            return np.inner(v1,v2) 
        v2 = v2 - m*v1

print(gauss_reduction(v1, v2))