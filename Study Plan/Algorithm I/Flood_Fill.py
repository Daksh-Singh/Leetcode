class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        if image == None or image[sr][sc] == newColor:
            return image
        self.fill(image, sr, sc, image[sr][sc], newColor)
        return image
        
        
    def fill(self, image, row, column, initial, new_color):
        if row < 0 or row >= len(image) or column < 0 or column >= len(image[0])  or image[row][column] != initial:
            return
        
        image[row][column] = new_color
        self.fill(image, row + 1, column, initial, new_color)
        self.fill(image, row - 1,column , initial, new_color)
        self.fill(image, row, column + 1, initial, new_color)
        self.fill(image, row, column - 1, initial, new_color)
        