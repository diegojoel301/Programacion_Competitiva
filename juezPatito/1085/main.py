def mostrar(v):
	out = str()
	for i in range(len(v)):
		out += str(v[i]) + " "
	print(out[0:len(out) - 1])

def verifica(v):
	for i in range(len(v) - 1):
		if v[i] < v[i + 1]:
			return False
	return True

def reverse(v, j):
	x = 1
	for i in range(j, len(v) - (len(v[j:len(v)]))//2):
		aux = v[len(v) - x]
		v[len(v) - x] = v[i]
		v[i] = aux
		x += 1

def sol():
	v = list(map(int, input().split()))
	aux = v
	v = v[::-1]

	n = len(v)
	out = str()

	for i in range(0, n):
		if not verifica(v):
			my = -1
			pmy = -1
			for j in range(i, n):
				if my < v[j]:
					my = v[j]
					pmy = j
			
			if pmy == i:
				continue

			if pmy != n - 1:
				reverse(v, pmy)
				out += str(pmy + 1) + " "
			reverse(v, i)
			out += str(i + 1) + " "
	out += "0"
	mostrar(aux)
	print(out)

while True:
	try:
		sol()
	except EOFError:
		break