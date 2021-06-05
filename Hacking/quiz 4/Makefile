# This message is obfuscated, you'll have to run 'make' with the right targets to see it!

X1 := i
X2 := f
X3 := a
X4 := m
X5 := -
X6 := l
X7 := g
X8 := y

Y1 := ${X4}
Y2 := ${X1}
Y3 := ${X6}
Y4 := ${X2}
Y5 := ${X5}
Y6 := ${X3}
Y7 := ${X8}
Y8 := ${X7}

default:
	$(info The default target does nothing.)

first:
	@touch .i-want-the-flag

second:
	@if [ -f .i-want-the-flag ]; then echo "The flag is: ${Y2}${Y1}${Y5}${Y6}${Y5}${Y4}${Y3}${Y6}${Y8}"; rm .i-want-the-flag; fi
