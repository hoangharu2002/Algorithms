import numpy as np

## This tutorial will show how to calculate the Euclidean distance
point_1 = np.array([1, 1, 1])
point_2 = np.array([1, 2, 3])

# Method 1: Using linalg.norm() from numpy
d = np.linalg.norm(point_2 - point_1)
print(d)    # float type

# Method 2: Using dot() from numpy
dis_vector = point_2 - point_1
accum_metrix = np.dot(dis_vector.T, dis_vector)

print(np.sqrt(accum_metrix))

# Method 3: Using square() and sum()
sum_sqp