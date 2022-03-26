def rotate( arr, n):
    arr.reverse();
    k =i= n%len(arr) +1
    l = len(arr) -1
    while(k<l):
        
    
        arr[k],arr[l] = arr[l],arr[k]
        l-=1
        k+=1
    
    l =0
    i=i-1
    while(l<i):
    
        arr[l],arr[i] = arr[i],arr[l]
        l+=1
        i-=1
    
    return arr
    



#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        rotate(a, n)
        print(*a)

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends