# Given values
k = 1.38e-23  # Boltzmann constant (J/K)
T = 300  # Temperature (K)
q = 1.6e-19  # Electron charge (C)
Is = 1e-12  # Saturation current (A)
Vd = 0.7  # Diode voltage (V)
n = 1  # Ideality factor

# Calculate thermal voltage (V_T)
Vt = (k * T) / q

# Calculate diode current (I_D)
Id = Is * (pow(2.718, (Vd / (n * Vt))) - 1)

print(Id);
