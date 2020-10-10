""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""
inorder_list = []
def inorder1(root):
    if not root: 
        return
    inorder1(root.left)
    inorder_list.append(root.data)
    inorder1(root.right)
    
def check_binary_search_tree_(root):
    inorder1(root)
    for i in range(1, len(inorder_list)):
        if inorder_list[i] <= inorder_list[i - 1]: return False
    return True
    