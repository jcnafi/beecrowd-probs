local a, a, b = io.read("*n", "*n", "*n")
local A, A, B = io.read("*n", "*n", "*n")
local amount = a*b + A*B;

print("VALOR A PAGAR: R$ " .. string.format("%0.2f", amount))

