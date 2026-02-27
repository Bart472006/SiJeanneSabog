def main():
    # Initialize variables
    alloc = [[0 for _ in range(10)] for _ in range(10)]
    max_claim = [[0 for _ in range(10)] for _ in range(10)]
    need = [[0 for _ in range(10)] for _ in range(10)]
    avail = [0] * 10
    work = [0] * 10
    total = [0] * 10
    finish = ['n'] * 10
    
    # Get input
    print("Enter the no. of processes and resources:", end=" ")
    n, m = map(int, input().split())
    
    print("Enter the claim matrix:")
    for i in range(n):
        row = list(map(int, input().split()))
        for j in range(m):
            max_claim[i][j] = row[j]
    
    print("Enter the allocation matrix:")
    for i in range(n):
        row = list(map(int, input().split()))
        for j in range(m):
            alloc[i][j] = row[j]
    
    print("Resource vector:", end=" ")
    total_input = list(map(int, input().split()))
    for i in range(m):
        total[i] = total_input[i]
    
    # Calculate available resources
    for i in range(m):
        avail[i] = 0
    
    for i in range(n):
        for j in range(m):
            avail[j] += alloc[i][j]
    
    # Calculate work (available resources)
    for i in range(m):
        work[i] = avail[i]
    
    for j in range(m):
        work[j] = total[j] - work[j]
    
    # Calculate need matrix
    for i in range(n):
        for j in range(m):
            need[i][j] = max_claim[i][j] - alloc[i][j]
    
    # Banker's Algorithm
    count = 0
    while count != n:
        for i in range(n):
            c = 0
            for j in range(m):
                if need[i][j] <= work[j] and finish[i] == 'n':
                    c += 1
            
            if c == m:
                print(f"All the resources can be allocated to Process {i+1}")
                print("\nAvailable resources are:", end=" ")
                
                for k in range(m):
                    work[k] += alloc[i][k]
                    print(f"{work[k]:4d}", end="")
                
                print()
                finish[i] = 'y'
                print(f"\nProcess {i+1} executed?: {finish[i]}")
                count += 1
    
    print("\nSystem is in safe mode")
    print("The given state is safe state")

if __name__ == "__main__":
    main()