local A, B, C = io.read("*n", "*n", "*n")
print("TRIANGULO: " .. string.format("%0.3f", (0.5*A*C)));
print("CIRCULO: " .. string.format("%0.3f", (3.14159*C*C)));
print("TRAPEZIO: " .. string.format("%0.3f", (A+B)*C/2));
print("QUADRADO: " .. string.format("%0.3f", B*B));
print("RETANGULO: " .. string.format("%0.3f", A*B));
