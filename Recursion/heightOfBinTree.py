class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

def heightTree(Node root):
    if root.data == None:
        return 0
    return (1 + max(heightTree(root.left), heightTree(root.right)))
