import numpy as np
from fractions import Fraction
from math import gcd
from functools import reduce

def simplify_vector(vector):
    """Simplify a vector so that all elements are in their simplest fraction form."""
    fractions = [Fraction(value).limit_denominator() for value in vector]
    # Find the greatest common divisor of the denominators
    common_denominator = reduce(gcd, [frac.denominator for frac in fractions])
    # Scale the fractions to have a common denominator and simplify
    simplified_vector = [frac * common_denominator for frac in fractions]
    # Find the GCD of the numerators to further simplify the vector
    common_numerator_gcd = reduce(gcd, [frac.numerator for frac in simplified_vector])
    return [frac / common_numerator_gcd for frac in simplified_vector]

# Define the matrix
A = np.array([[8, -8, -2],
              [4, -3, -2],
              [3, -4, 1]])

# Compute eigenvalues and eigenvectors
eigenvalues, eigenvectors = np.linalg.eig(A)

# Convert eigenvalues to fractions
eigenvalues_frac = [Fraction(value).limit_denominator() for value in eigenvalues]

# Convert eigenvectors to their simplest fractional form
eigenvectors_frac = [simplify_vector(vec) for vec in eigenvectors.T]

# Print eigenvalues in fractional form
print("Eigenvalues in fractional form:")
for val in eigenvalues_frac:
    print(val)

# Print eigenvectors in their simplest fractional form
print("\nEigenvectors in simplest fractional form (column-wise):")
for vec in eigenvectors_frac:
    print("[", end="")
    print(", ".join(map(str, vec)), end="")
    print("]")
