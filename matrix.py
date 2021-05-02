def insert(adj, u, v):
     
    # Insert a vertex v to vertex u
    adj[u].append(v)
    return
 
# Function to display adjacency list
def printList(adj, V):
     
    for i in range(V):
        print(i, end = '')
         
        for j in adj[i]:
            print(' --> ' + str(j), end = '')
             
        print()
         
    print()
         
# Function to convert adjacency
# list to adjacency matrix
def convert(adj, V):
 
    # Initialize a matrix
    matrix = [[0 for j in range(V)]
                 for i in range(V)]
     
    for i in range(V):
        for j in adj[i]:
            matrix[i][j] = 1
     
    return matrix
  
# Function to display adjacency matrix
def printMatrix(adj, V):
     
    for i in range(V):
        for j in range(V):
            print(adj[i][j], end = ' ')
             
        print()
         
    print()
         
# Driver code
if __name__=='__main__':
V = 5
adjList = [[] for i in range(V)]);

insert(adjList,1, 8);
insert(adjList,1, 9);
insert(adjList,1, 11);
insert(adjList,1, 29);
insert(adjList,1, 51);
insert(adjList,1, 56);
insert(adjList,1, 60);
insert(adjList,1, 65);
insert(adjList,1, 69);
insert(adjList,1, 82);
insert(adjList,2, 21);
insert(adjList,2, 26);
insert(adjList,2, 67);
insert(adjList,2, 85);
insert(adjList,3, 6);
insert(adjList,3, 31);
insert(adjList,3, 38);
insert(adjList,3, 39);
insert(adjList,3, 49);
insert(adjList,3, 59);
insert(adjList,3, 60);
insert(adjList,3, 61);
insert(adjList,3, 64);
insert(adjList,3, 68);
insert(adjList,4, 8);
insert(adjList,4, 9);
insert(adjList,4, 10);
insert(adjList,4, 41);
insert(adjList,4, 43);
insert(adjList,4, 73);
insert(adjList,4, 76);
insert(adjList,5, 26);
insert(adjList,5, 27);
insert(adjList,5, 36);
insert(adjList,5, 41);
insert(adjList,5, 52);
insert(adjList,5, 60);
insert(adjList,5, 67);
insert(adjList,5, 70);
insert(adjList,6, 13);
insert(adjList,6, 14);
insert(adjList,6, 18);
insert(adjList,6, 29);
insert(adjList,6, 43);
insert(adjList,6, 59);
insert(adjList,6, 63);
insert(adjList,6, 76);
insert(adjList,6, 79);
insert(adjList,7, 13);
insert(adjList,7, 17);
insert(adjList,7, 20);
insert(adjList,7, 27);
insert(adjList,7, 33);
insert(adjList,7, 57);
insert(adjList,7, 69);
insert(adjList,7, 71);
insert(adjList,7, 82);
insert(adjList,7, 83);
insert(adjList,7, 84);
insert(adjList,8, 18);
insert(adjList,8, 27);
insert(adjList,8, 47);
insert(adjList,8, 65);
insert(adjList,9, 26);
insert(adjList,9, 30);
insert(adjList,9, 37);
insert(adjList,9, 63);
insert(adjList,9, 66);
insert(adjList,9, 72);
insert(adjList,9, 75);
insert(adjList,9, 81);
    insert(adjList,10, 11)
    insert(adjList,10, 36)
    insert(adjList,10, 39)
    insert(adjList,10, 43)
    insert(adjList,10, 46)
    insert(adjList,10, 70)
    insert(adjList,10, 73)
    insert(adjList,10, 78)
    insert(adjList,10, 82)
    insert(adjList,10, 84)
    insert(adjList,11, 12)
    insert(adjList,11, 17)
    insert(adjList,11, 24)
    insert(adjList,11, 36)
    insert(adjList,11, 47)
    insert(adjList,11, 53)
    insert(adjList,11, 69)
    insert(adjList,11, 73)
    insert(adjList,11, 83)
    insert(adjList,12, 16)
    insert(adjList,12, 21)
    insert(adjList,12, 36)
    insert(adjList,12, 43)
    insert(adjList,12, 56)
    insert(adjList,12, 72)
    insert(adjList,12, 74)
    insert(adjList,12, 76)
    insert(adjList,12, 79)
    insert(adjList,12, 81)
    insert(adjList,12, 83)
    insert(adjList,12, 84)
    insert(adjList,13, 16)
    insert(adjList,13, 21)
    insert(adjList,13, 27)
    insert(adjList,13, 36)
    insert(adjList,13, 40)
    insert(adjList,13, 51)
    insert(adjList,13, 70)
    insert(adjList,13, 75)
    insert(adjList,13, 85)
    insert(adjList,14, 19)
    insert(adjList,14, 37)
    insert(adjList,14, 41)
    insert(adjList,14, 42)
    insert(adjList,14, 49)
    insert(adjList,14, 52)
    insert(adjList,14, 58)
    insert(adjList,14, 64)
    insert(adjList,14, 66)
    insert(adjList,14, 68)
    insert(adjList,14, 74)
    insert(adjList,14, 76)
    insert(adjList,14, 78)
    insert(adjList,14, 85)
    insert(adjList,15, 20)
    insert(adjList,15, 21)
    insert(adjList,15, 27)
    insert(adjList,15, 35)
    insert(adjList,15, 36)
    insert(adjList,15, 45)
    insert(adjList,15, 66)
    insert(adjList,15, 80)
    insert(adjList,16, 28)
    insert(adjList,16, 45)
    insert(adjList,16, 52)
    insert(adjList,16, 63)
    insert(adjList,16, 84)
    insert(adjList,17, 19)
    insert(adjList,17, 25)
    insert(adjList,17, 30)
    insert(adjList,17, 42)
    insert(adjList,17, 53)
    insert(adjList,17, 60)
    insert(adjList,17, 84)
    insert(adjList,18, 22)
    insert(adjList,18, 30)
    insert(adjList,18, 41)
    insert(adjList,18, 43)
    insert(adjList,18, 48)
    insert(adjList,18, 52)
    insert(adjList,18, 53)
    insert(adjList,18, 58)
    insert(adjList,18, 59)
    insert(adjList,18, 64)
    insert(adjList,18, 67)
    insert(adjList,18, 79)
    insert(adjList,19, 24)
    insert(adjList,19, 37)
    insert(adjList,19, 38)
    insert(adjList,19, 40)
    insert(adjList,19, 42)
    insert(adjList,19, 47)
    insert(adjList,19, 61)
    insert(adjList,19, 71)
    insert(adjList,19, 74)
    insert(adjList,19, 75)
    insert(adjList,20, 31)
    insert(adjList,20, 33)
    insert(adjList,20, 38)
    insert(adjList,20, 42)
    insert(adjList,20, 50)
    insert(adjList,20, 61)
    insert(adjList,20, 66)
    insert(adjList,20, 83)
    insert(adjList,21, 25)
    insert(adjList,21, 30)
    insert(adjList,21, 58)
    insert(adjList,21, 60)
    insert(adjList,21, 65)
    insert(adjList,21, 77)
    insert(adjList,21, 82)
    insert(adjList,22, 37)
    insert(adjList,22, 53)
    insert(adjList,22, 59)
    insert(adjList,22, 64)
    insert(adjList,22, 65)
    insert(adjList,22, 73)
    insert(adjList,22, 80)
    insert(adjList,22, 82)
    insert(adjList,23, 35)
    insert(adjList,23, 39)
    insert(adjList,23, 40)
    insert(adjList,23, 54)
    insert(adjList,23, 71)
    insert(adjList,24, 34)
    insert(adjList,24, 41)
    insert(adjList,24, 46)
    insert(adjList,24, 62)
    insert(adjList,24, 70)
    insert(adjList,24, 74)
    insert(adjList,24, 80)
    insert(adjList,24, 81)
    insert(adjList,24, 82)
    insert(adjList,25, 26)
    insert(adjList,25, 31)
    insert(adjList,25, 47)
    insert(adjList,25, 50)
    insert(adjList,25, 65)
    insert(adjList,25, 67)
    insert(adjList,25, 80)
    insert(adjList,26, 28)
    insert(adjList,26, 32)
    insert(adjList,26, 51)
    insert(adjList,26, 64)
    insert(adjList,27, 33)
    insert(adjList,27, 34)
    insert(adjList,27, 40)
    insert(adjList,27, 44)
    insert(adjList,27, 51)
    insert(adjList,27, 54)
    insert(adjList,27, 80)
    insert(adjList,27, 84)
    insert(adjList,27, 85)
    insert(adjList,28, 29)
    insert(adjList,28, 32)
    insert(adjList,28, 36)
    insert(adjList,28, 41)
    insert(adjList,28, 51)
    insert(adjList,28, 54)
    insert(adjList,28, 59)
    insert(adjList,28, 66)
    insert(adjList,28, 82)
    insert(adjList,28, 83)
    insert(adjList,29, 65)
    insert(adjList,29, 69)
    insert(adjList,29, 72)
    insert(adjList,29, 74)
    insert(adjList,29, 77)
    insert(adjList,30, 42)
    insert(adjList,30, 43)
    insert(adjList,30, 53)
    insert(adjList,30, 64)
    insert(adjList,30, 77)
    insert(adjList,30, 78)
    insert(adjList,31, 35)
    insert(adjList,31, 50)
    insert(adjList,31, 76)
    insert(adjList,32, 48)
    insert(adjList,32, 54)
    insert(adjList,32, 56)
    insert(adjList,32, 57)
    insert(adjList,32, 58)
    insert(adjList,32, 60)
    insert(adjList,32, 75)
    insert(adjList,33, 60)
    insert(adjList,33, 63)
    insert(adjList,33, 67)
    insert(adjList,33, 71)
    insert(adjList,33, 75)
    insert(adjList,33, 77)
    insert(adjList,33, 79)
    insert(adjList,34, 41)
    insert(adjList,34, 42)
    insert(adjList,34, 44)
    insert(adjList,34, 51)
    insert(adjList,34, 53)
    insert(adjList,34, 66)
    insert(adjList,34, 67)
    insert(adjList,34, 76)
    insert(adjList,34, 77)
    insert(adjList,35, 38)
    insert(adjList,35, 49)
    insert(adjList,35, 50)
    insert(adjList,35, 55)
    insert(adjList,36, 51)
    insert(adjList,36, 58)
    insert(adjList,36, 62)
    insert(adjList,36, 74)
    insert(adjList,37, 53)
    insert(adjList,37, 60)
    insert(adjList,37, 61)
    insert(adjList,37, 65)
    insert(adjList,37, 68)
    insert(adjList,37, 78)
    insert(adjList,38, 47)
    insert(adjList,38, 49)
    insert(adjList,38, 50)
    insert(adjList,39, 42)
    insert(adjList,39, 56)
    insert(adjList,39, 68)
    insert(adjList,40, 59)
    insert(adjList,40, 60)
    insert(adjList,40, 65)
    insert(adjList,40, 68)
    insert(adjList,41, 57)
    insert(adjList,41, 68)
    insert(adjList,41, 69)
    insert(adjList,41, 82)
    insert(adjList,41, 85)
    insert(adjList,42, 44)
    insert(adjList,42, 49)
    insert(adjList,42, 50)
    insert(adjList,42, 58)
    insert(adjList,42, 75)
    insert(adjList,42, 79)
    insert(adjList,42, 84)
    insert(adjList,43, 52)
    insert(adjList,43, 71)
    insert(adjList,43, 78)
    insert(adjList,43, 80)
    insert(adjList,44, 48)
    insert(adjList,44, 52)
    insert(adjList,44, 62)
    insert(adjList,44, 66)
    insert(adjList,44, 81)
    insert(adjList,45, 48)
    insert(adjList,45, 65)
    insert(adjList,45, 68)
    insert(adjList,45, 73)
    insert(adjList,45, 74)
    insert(adjList,45, 83)
    insert(adjList,46, 50)
    insert(adjList,46, 57)
    insert(adjList,46, 65)
    insert(adjList,46, 69)
    insert(adjList,46, 80)
    insert(adjList,46, 81)
    insert(adjList,46, 82)
    insert(adjList,47, 52)
    insert(adjList,47, 66)
    insert(adjList,47, 67)
    insert(adjList,47, 68)
    insert(adjList,48, 52)
    insert(adjList,48, 54)
    insert(adjList,48, 66)
    insert(adjList,49, 53)
    insert(adjList,49, 59)
    insert(adjList,49, 84)
    insert(adjList,49, 85)
    insert(adjList,50, 53)
    insert(adjList,50, 57)
    insert(adjList,50, 61)
    insert(adjList,50, 65)
    insert(adjList,50, 67)
    insert(adjList,50, 69)
    insert(adjList,50, 73)
    insert(adjList,50, 81)
    insert(adjList,51, 65)
    insert(adjList,51, 67)
    insert(adjList,51, 68)
    insert(adjList,51, 84)
    insert(adjList,52, 54)
    insert(adjList,52, 55)
    insert(adjList,52, 61)
    insert(adjList,52, 63)
    insert(adjList,52, 64)
    insert(adjList,52, 78)
    insert(adjList,52, 80)
    insert(adjList,52, 85)
    insert(adjList,53, 56)
    insert(adjList,53, 59)
    insert(adjList,53, 64)
    insert(adjList,53, 65)
    insert(adjList,53, 73)
    insert(adjList,53, 76)
    insert(adjList,53, 77)
    insert(adjList,53, 81)
    insert(adjList,53, 83)
    insert(adjList,54, 62)
    insert(adjList,54, 67)
    insert(adjList,54, 72)
    insert(adjList,54, 76)
    insert(adjList,54, 78)
    insert(adjList,54, 80)
    insert(adjList,54, 83)
    insert(adjList,55, 83)
    insert(adjList,56, 63)
    insert(adjList,56, 67)
    insert(adjList,56, 71)
    insert(adjList,56, 84)
    insert(adjList,57, 58)
    insert(adjList,57, 64)
    insert(adjList,57, 73)
    insert(adjList,57, 77)
    insert(adjList,57, 80)
    insert(adjList,58, 79)
    insert(adjList,58, 81)
    insert(adjList,59, 67)
    insert(adjList,59, 68)
    insert(adjList,59, 71)
    insert(adjList,59, 81)
    insert(adjList,59, 83)
    insert(adjList,59, 84)
    insert(adjList,59, 85)
    insert(adjList,60, 67)
    insert(adjList,60, 73)
    insert(adjList,60, 76)
    insert(adjList,60, 80)
    insert(adjList,61, 68)
    insert(adjList,62, 64)
    insert(adjList,62, 69)
    insert(adjList,62, 81)
    insert(adjList,62, 84)
    insert(adjList,63, 69)
    insert(adjList,63, 73)
    insert(adjList,63, 75)
    insert(adjList,63, 81)
    insert(adjList,64, 83)
    insert(adjList,65, 80)
    insert(adjList,65, 83)
    insert(adjList,65, 84)
    insert(adjList,66, 76)
    insert(adjList,67, 71)
    insert(adjList,67, 72)
    insert(adjList,67, 74)
    insert(adjList,67, 82)
    insert(adjList,67, 85)
    insert(adjList,69, 71)
    insert(adjList,69, 75)
    insert(adjList,69, 77)
    insert(adjList,69, 85)
    insert(adjList,70, 73)
    insert(adjList,71, 72)
    insert(adjList,71, 75)
    insert(adjList,71, 76)
    insert(adjList,71, 77)
    insert(adjList,71, 79)
    insert(adjList,72, 74)
    insert(adjList,75, 83)
    insert(adjList,76, 81)
    insert(adjList,76, 82)
    insert(adjList,76, 84)
    insert(adjList,77, 81)
    insert(adjList,77, 83)
    insert(adjList,77, 84)
    insert(adjList,78, 83)
    insert(adjList,82, 83)
    insert(adjList,82, 84)
    
    # Display adj,acency lis
    print("Adjacency List: ")
    printList(adj,List, V)
    
    # Function call which returns
    # adjacency matrix after conversion
    adjMatrix = convert(adjList, V)
  
    # Display adjacency matrix
    print("Adjacency Matrix: ")
    printMatrix(adjMatrix, V)