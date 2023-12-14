
SetGameObject("Asteroid")
BeginCommand("PARALLEL",1) 

MoveTo(30,2,80,18)
OrientTo(-360,360,0,18)

Endcommand(1)

SetGameObject("AsteroidTwo")
BeginCommand("PARALLEL",3) 

MoveTo(-9,-9,-9,3)
OrientTo(0,360,0,1)


Endcommand(3)

---------------------------------------------------------------------------
SetGameObject("Falcon")
BeginCommand("SERIAL",2) 

MoveTo(-1,5,-1,1.9,0.2,0.9)
MoveTo(13,1,-27, 1,0.2,0.5)


Endcommand(2)



SetGameObject("Falcon")
BeginCommand("PARALLEL",2) 


OrientTo(70,90,-40,2)
WaitForSeconds(2)
OrientTo(60,70,-30,.3)
WaitForSeconds(.2)
OrientTo(-60,70,30,.9)


Endcommand(2)
---------------------------------------------------------------------------------
SetGameObject("Fighter")
BeginCommand("SERIAL",2) 

WaitForSeconds(2)

MoveTo(-1,5,-5,1.9)
MoveTo(13,1,-29, 1)

--FollowObject("Falcon", 10, 2, 2, 1, -13,15,-13)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])


Endcommand(2)


SetGameObject("Fighter")
BeginCommand("PARALLEL",2) 

WaitForSeconds(2)
OrientTo(90,-60,0,2)
WaitForSeconds(2)
OrientTo(70,-60,0,.3)
WaitForSeconds(.2)
OrientTo(70,-10,30,.3)

Endcommand(2)

--------------------------------------


SetGameObject("FighterTwo")
BeginCommand("SERIAL",2) 

WaitForSeconds(2)
--0, 8, 13
MoveTo(0,-1,-13,1.9)

MoveTo(13,-1,-29, 1)

--FollowObject("Falcon", 10, 2, 2, 1, -13,15,-13)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])


Endcommand(2)


SetGameObject("FighterTwo")
BeginCommand("PARALLEL",2) 

WaitForSeconds(2)
OrientTo(90,-60,0,2)
WaitForSeconds(2)
OrientTo(70,-60,0,.3)
WaitForSeconds(.2)
OrientTo(70,-10,30,.3)

Endcommand(2)

------------------------------------------

SetGameObject("FighterThree")
BeginCommand("SERIAL",2) 

WaitForSeconds(2)

MoveTo(-1,2,-2, 1.9)
MoveTo(13,2,-29, 1)

--FollowObject("Falcon", 10, 2, 2, 1, -13,15,-13)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])


Endcommand(2)


SetGameObject("FighterThree")
BeginCommand("PARALLEL",2) 

WaitForSeconds(2)
OrientTo(90,-60,0,2)
WaitForSeconds(2)
OrientTo(70,-60,0,.3)
WaitForSeconds(.2)
OrientTo(70,-10,30,.3)

Endcommand(2)

-------------------------------------------------

SetGameObject("FighterFour")
BeginCommand("SERIAL",2) 

WaitForSeconds(2)

MoveTo(-1,5,-9,1.9)
MoveTo(13,5,-29, 1)

--FollowObject("Falcon", 10, 2, 2, 1, -13,15,-13)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])


Endcommand(2)


SetGameObject("FighterFour")
BeginCommand("PARALLEL",2) 

WaitForSeconds(2)
OrientTo(90,-60,0,2)
WaitForSeconds(2)
OrientTo(70,-60,0,.3)
WaitForSeconds(.2)
OrientTo(70,-10,30,.3)

Endcommand(2)



--MoveTo()
--FollowObject("Sphere2", 3, 1, 1, 5, 0,-2,0)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])
