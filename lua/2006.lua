local T = io.read("*n")
local ara = {}
local correct = 0

for i = 1, 5 do
    ara[i] = io.read("*n")
    if ara[i] == T then
        correct = correct + 1
    end
end

print(correct)
