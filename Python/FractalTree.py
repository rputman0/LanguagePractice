import pygame, math
 
pygame.init()
(width,height) = (300,300)
window = pygame.display.set_mode((width,height))

pygame.display.set_caption('Fractal Trees w/recursion')
screen = pygame.display.get_surface()

white = [255,255,255]
blue = [0,0,255]

size = 9

def point(x,y):
    return (x,y)

def drawLine(point,nextPt):
    pygame.draw.line(screen,blue,point,nextPt,1)


def generateNewPt(point,angle,depth):
    return ( (point[0] + int(math.cos(math.radians(angle))*depth*size)),
              point[1] + int(math.sin(math.radians(angle))*depth*size))

#draw a fractal tree, with the trunk having two branches
#and each subsequent branch has two branches and gets smaller
def fractalTree(point,angle,depth):
    if(depth > 0): #base case
        newPos = generateNewPt(point,angle,depth)
        
        drawLine( (point[0],point[1]),(newPos) )

        fractalTree(newPos,angle-20,depth-1)
        fractalTree(newPos,angle+20,depth-1)
        
while True:
    for event in pygame.event.get():
        if(event.type == pygame.QUIT):
            pygame.quit()
            sys.exit()

    screen.fill(white)
    startingMiddlePos = (width/2,height-25)
    fractalTree(startingMiddlePos, -90, 7)

    pygame.display.update()

pygame.exitonclose()
