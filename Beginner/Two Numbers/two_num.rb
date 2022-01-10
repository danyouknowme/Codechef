n = gets.to_i
n.times do
	input = gets.chomp
	a, b, turns = input.split.map(&:to_i)
	old_b = b
	if turns % 2 != 0
		a = a * (2 * (turns / 2.to_f).ceil)
		b = b * (2 * (turns / 2.to_f).floor)
		if b == 0
			b = old_b
		end
	else 
		a = a * (2 * turns / 2)
		b = b * (2 * turns / 2)
	end
	if a > b
	    puts a / b
	else
	    puts b / a
	end
end
