local A = io.read("*n");
local B = io.read("*n");
local C = io.read("*n");

A = A * 2.0
B = B * 3.0
C = C * 5.0

local MEDIA = (A+B+C)/10.0

print("MEDIA = " .. string.format("%0.1f", MEDIA))
