a,b,c = map(int,raw_input().split())
while(1):
	if c-b == b-a:
		print "AP " +str(c+c-b)
	else:
		print "GP "+str(c*(c/b))
 
	a,b,c = map(int,raw_input().split())
	if( a== 0 and b==0 and c==0):
		break 
