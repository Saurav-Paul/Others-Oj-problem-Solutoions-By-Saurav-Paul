from __future__ import print_function

def main():
	s = str(raw_input())
	
	a = ['']*len(s)
	track = 0
	cnt = 1
	for i in range(1,len(s)):
		if (s[i]==s[i-1]):
			cnt += 1
		else:
			a[track]=str('('+str(cnt)+', '+s[i-1]+')')
			track += 1
			cnt = 1
	a[track] = str('('+str(cnt)+', '+s[len(s)-1]+')')
	track += 1
	for i in range(0,track):
		print(a[i],end=' ')	
		
		

if __name__ == '__main__' :
	main()
