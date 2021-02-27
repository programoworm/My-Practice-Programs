import random as r

class bst:
	def __init__(self,*args):
		if len(args)==0:
			self.data=None
			self.left=None
			self.right=None
		elif len(args)==1:
			self.data=args[0]
			self.left=None
			self.right=None

	def insert(self,data):
		if self.data is None:
			self.data=data
			self.left=None
			self.right=None
		else:
			if self.data>=data:
				if not self.left:
					self.left=bst(data)
				else:
					self.left.insert(data)
			elif self.data<data:
				if not self.right:
					self.right=bst(data)
				else:
					self.right.insert(data)
	
	def search(self,data):
		if self.data==data:
			print("Element is present in the tree")
		elif self.left and data<self.data:
			self.left.search(data)
		elif self.right and data>self.data:
			self.right.search(data)
		else:
			print("Element is not present in the tree")

	def print(self):
		if self.left:
			self.left.print()
		print(self.data)
		if self.right:
			self.right.print()

def main():
	n=int(input("Enter the number of elements in the tree: "))
	b=bst()
	for i in range(n):
		item=int(r.randrange(100))
		b.insert(item)
		print(str(item)+" Inserted")
	print("\nThe tree is:")
	b.print()
	item=int(input("Enter an element to search: "))
	b.search(item)
	
if __name__=='__main__':
	main()