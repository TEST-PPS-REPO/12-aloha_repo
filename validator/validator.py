inp = input()
spt = inp.split(' ')
assert len(spt) == 3
for i in spt:
    ii = int(i)
    assert 0 <= ii <= 10