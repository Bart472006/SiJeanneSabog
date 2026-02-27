# Deadlock Prevention Program using Banker's Algorithm

print("="*60)
print("DEADLOCK PREVENTION USING BANKER'S ALGORITHM")
print("="*60)

# Step 1: Get number of processes and resources
processes = int(input("Enter number of processes: "))
resources = int(input("Enter number of resources: "))

# Step 2: Get available resources
print("\nEnter available resources:")
available = []
for i in range(resources):
    val = int(input(f"Resource {i}: "))
    available.append(val)

# Step 3: Get allocation matrix
print("\nEnter ALLOCATION matrix:")
allocation = []
for i in range(processes):
    print(f"Process {i}:")
    row = []
    for j in range(resources):
        val = int(input(f"  Resource {j}: "))
        row.append(val)
    allocation.append(row)

# Step 4: Get max matrix
print("\nEnter MAX matrix:")
maximum = []
for i in range(processes):
    print(f"Process {i}:")
    row = []
    for j in range(resources):
        val = int(input(f"  Resource {j}: "))
        row.append(val)
    maximum.append(row)

# Step 5: Calculate need matrix (max - allocation)
print("\n" + "="*60)
print("CALCULATING NEED MATRIX...")
need = []
for i in range(processes):
    row = []
    for j in range(resources):
        row.append(maximum[i][j] - allocation[i][j])
    need.append(row)

# Display all matrices
print("\n=== CURRENT SYSTEM STATE ===")
print("\nAllocation Matrix:")
for i in range(processes):
    print(f"P{i}: {allocation[i]}")

print("\nMax Matrix:")
for i in range(processes):
    print(f"P{i}: {maximum[i]}")

print("\nNeed Matrix:")
for i in range(processes):
    print(f"P{i}: {need[i]}")

print(f"\nAvailable Resources: {available}")

# Step 6: Check if system is in safe state
print("\n" + "="*60)
print("CHECKING SAFE STATE...")

work = available.copy()
finish = [False] * processes
safe_sequence = []

# Try to find a safe sequence
step = 1
while len(safe_sequence) < processes:
    found = False
    
    for i in range(processes):
        if not finish[i]:
            # Check if need <= work
            can_allocate = True
            for j in range(resources):
                if need[i][j] > work[j]:
                    can_allocate = False
                    break
            
            if can_allocate:
                print(f"\nStep {step}: Process P{i} can execute")
                print(f"  Work before: {work}")
                print(f"  Need: {need[i]}")
                
                # Add allocated resources back to work
                for j in range(resources):
                    work[j] += allocation[i][j]
                
                print(f"  Work after: {work}")
                
                finish[i] = True
                safe_sequence.append(f"P{i}")
                found = True
                step += 1
                break
    
    if not found:
        break

# Step 7: Display result
print("\n" + "="*60)
if len(safe_sequence) == processes:
    print("✓ SYSTEM IS IN SAFE STATE")
    print(f"Safe Sequence: {' → '.join(safe_sequence)}")
else:
    print("✗ SYSTEM IS IN UNSAFE STATE")
    print("Deadlock may occur if allocation continues!")

# Optional: Check if a specific request can be granted
print("\n" + "="*60)
check_request = input("Do you want to check a resource request? (yes/no): ").lower()

if check_request == "yes":
    print("\n=== CHECK RESOURCE REQUEST ===")
    p = int(input(f"Enter process number (0 to {processes-1}): "))
    
    if p < 0 or p >= processes:
        print("Invalid process number!")
    else:
        print("Enter requested resources:")
        request = []
        for j in range(resources):
            val = int(input(f"  Resource {j}: "))
            request.append(val)
        
        # Check if request is valid
        valid = True
        for j in range(resources):
            if request[j] > need[p][j]:
                print(f"Error: Request exceeds need for Resource {j}")
                valid = False
                break
            if request[j] > available[j]:
                print(f"Error: Request exceeds available for Resource {j}")
                valid = False
                break
        
        if valid:
            print("\nRequest can be granted (assuming it leads to safe state)")
        else:
            print("\nRequest cannot be granted!")

print("\nProgram completed!")