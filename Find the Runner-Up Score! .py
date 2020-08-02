if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    arr = sorted(arr)
    i = -1

    while True :
        if(arr[i] != arr[i-1]):
            print(arr[i-1])
            break
        i -= 1
