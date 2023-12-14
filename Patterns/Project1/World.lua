
SetGameObject("Asteroid")


BeginCommand("PARALLEL",1) 

MoveTo(-50,1,0,3)
 OrientTo(20,90,0,4)
 OrientTo(40,90,0,4)
 OrientTo(60,90,0,4)
 OrientTo(80,90,0,4)
OrientTo(120,90,0,4)
OrientTo(140,90,0,4)
OrientTo(160,90,0,4)
OrientTo(180,90,0,4)
OrientTo(200,90,0,4)
OrientTo(220,90,0,4)
OrientTo(240,90,0,4)
OrientTo(260,90,0,4)
OrientTo(280,90,0,4)
OrientTo(300,90,0,4)
OrientTo(320,90,0,4)
OrientTo(340,90,0,4)
OrientTo(360,90,0,4)


Endcommand(1)


SetGameObject("Falcon")


BeginCommand("SERIAL",2) 

MoveTo(1,1,0,0.2)
OrientTo(-20,0,0,0.2)



OrientTo(-40,0,0,0.2)

MoveTo(8,1,-20,.5)


OrientTo(40,0,0,0.2)
MoveTo(20,1,20,.5)
MoveTo(30,1,30,2)
MoveTo(300,1,300,3)

Endcommand(2)

SetGameObject("AsteroidTwo")

BeginCommand("PARALLEL",3) 

MoveTo(-50,1,0,3)
 OrientTo(20,90,0,4)
 OrientTo(40,90,0,4)
 OrientTo(60,90,0,4)
 OrientTo(80,90,0,4)
OrientTo(120,90,0,4)
OrientTo(140,90,0,4)
OrientTo(160,90,0,4)
OrientTo(180,90,0,4)
OrientTo(200,90,0,4)
OrientTo(220,90,0,4)
OrientTo(240,90,0,4)
OrientTo(260,90,0,4)
OrientTo(280,90,0,4)
OrientTo(300,90,0,4)
OrientTo(320,90,0,4)
OrientTo(340,90,0,4)
OrientTo(360,90,0,4)


Endcommand(3)





--MoveTo()
--FollowObject("Sphere2", 3, 1, 1, 5, 0,-2,0)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])
