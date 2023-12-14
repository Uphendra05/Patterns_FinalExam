

function SceneOne( ... )
	


 SetGameObject("Asteroid")
 
 BeginCommand("PARALLEL",1) 
 
 MoveTo(-50,1,0,3)
 
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
  
 OrientTo(360,90,0,4)
 
 
 Endcommand(3)
end
---------------------------------------------------------
function SceneTwo( ... )
	
 SetGameObject("Asteroid")
    BeginCommand("SERIAL",1) 
     MoveTo(8, 2.0, -16,0)
     OrientTo(90, 90, 0,0)
      Endcommand(1)


    --SetGameObject("Asteroid")
    --BeginCommand("PARALLEL",1) 
    --
    --
    --
    --
    --MoveTo(30,2,80,18)
    --OrientTo(-360,360,0,18)
    --
    --Endcommand(1)
    --
    --SetGameObject("AsteroidTwo")
    --BeginCommand("PARALLEL",3) 
    --
    --MoveTo(-9,-9,-9,3)
    --OrientTo(0,360,0,1)
    --
    --
    --Endcommand(3)
    --
    -----------------------------------------------------------------------------
    --SetGameObject("Falcon")
    --BeginCommand("SERIAL",2) 
    --
    --MoveTo(-1,5,-1,1.9,0.2,0.9)
    --MoveTo(13,1,-27, 1,0.2,0.5)
    --
    --
    --Endcommand(2)
    --
    --
    --
    --SetGameObject("Falcon")
    --BeginCommand("PARALLEL",2) 
    --
    --
    --OrientTo(70,90,-40,2)
    --WaitForSeconds(2)
    --OrientTo(60,70,-30,.3)
    --WaitForSeconds(.2)
    --OrientTo(-60,70,30,.9)
    --
    --
    --Endcommand(2)
    -----------------------------------------------------------------------------------
    --SetGameObject("Fighter")
    --BeginCommand("SERIAL",2) 
    --
    --WaitForSeconds(2)
    --
    --MoveTo(-1,5,-5,1.9)
    --MoveTo(13,1,-29, 1)
    --
    --
    --
    --Endcommand(2)
    --
    --
    --SetGameObject("Fighter")
    --BeginCommand("PARALLEL",2) 
    --
    --WaitForSeconds(2)
    --OrientTo(90,-60,0,2)
    --WaitForSeconds(2)
    --OrientTo(70,-60,0,.3)
    --WaitForSeconds(.2)
    --OrientTo(70,-10,30,.3)
    --
    --Endcommand(2)
    --
    ----------------------------------------
    --
    --
    --SetGameObject("FighterTwo")
    --BeginCommand("SERIAL",2) 
    --
    --WaitForSeconds(2)
    --MoveTo(0,-1,-13,1.9)
    --
    --MoveTo(13,-1,-29, 1)
    --
    --
    --
    --Endcommand(2)
    --
    --
    --SetGameObject("FighterTwo")
    --BeginCommand("PARALLEL",2) 
    --
    --WaitForSeconds(2)
    --OrientTo(90,-60,0,2)
    --WaitForSeconds(2)
    --OrientTo(70,-60,0,.3)
    --WaitForSeconds(.2)
    --OrientTo(70,-10,30,.3)
    --
    --Endcommand(2)
    --
    --------------------------------------------
    --
    --SetGameObject("FighterThree")
    --BeginCommand("SERIAL",2) 
    --
    --WaitForSeconds(2)
    --
    --MoveTo(-1,2,-2, 1.9)
    --MoveTo(13,2,-29, 1)
    --
    --
    --
    --Endcommand(2)
    --
    --
    --SetGameObject("FighterThree")
    --BeginCommand("PARALLEL",2) 
    --
    --WaitForSeconds(2)
    --OrientTo(90,-60,0,2)
    --WaitForSeconds(2)
    --OrientTo(70,-60,0,.3)
    --WaitForSeconds(.2)
    --OrientTo(70,-10,30,.3)
    --
    --Endcommand(2)
    --
    ---------------------------------------------------
    --
    --SetGameObject("FighterFour")
    --BeginCommand("SERIAL",2) 
    --
    --WaitForSeconds(2)
    --
    --MoveTo(-1,5,-9,1.9)
    --MoveTo(13,5,-29, 1)
    --
    --
    --
    --Endcommand(2)
    --
    --
    --SetGameObject("FighterFour")
    --BeginCommand("PARALLEL",2) 
    --
    --WaitForSeconds(2)
    --OrientTo(90,-60,0,2)
    --WaitForSeconds(2)
    --OrientTo(70,-60,0,.3)
    --WaitForSeconds(.2)
    --OrientTo(70,-10,30,.3)
    --
    --Endcommand(2)

end


function SceneThree( ... )
	

   SetGameObject("Fighter")
   BeginCommand("SERIAL",2) 
   
   
   --  8, 11.0f, -13

   MoveTo(8, 1.0, -13,1)


   --MoveTo(13,1,-29, 1)
   
   
   
   Endcommand(2)
   
   
   SetGameObject("Fighter")
   BeginCommand("PARALLEL",2) 
   
   
   OrientTo(90,0,20,2)
   WaitForSeconds(.4)
   MoveTo(8, -1.0, -33,1)
   
   Endcommand(2)

   --------------


   SetGameObject("FighterTwo")
   BeginCommand("SERIAL",2) 
   
   MoveTo(8, 0.0, -11,1)
   
   
   
   Endcommand(2)
   
   
   SetGameObject("FighterTwo")
   BeginCommand("PARALLEL",2) 
   
  
   OrientTo(90,0 ,10,.3)
   WaitForSeconds(.4)
   MoveTo(17,0.0,-23,1)
   Endcommand(2)
   --
   --------------------------------------------
   --
   SetGameObject("FighterThree")
   BeginCommand("SERIAL",2) 
   
  
   
  
   MoveTo(5, 1.0, -33,2)
   
   
   
   Endcommand(2)
   
   
   SetGameObject("FighterThree")
   BeginCommand("PARALLEL",2) 
   
  
   OrientTo(90,0 ,10,.3)

   
   Endcommand(2)
   
   ---------------------------------------------------
   --
   SetGameObject("FighterFour")
   BeginCommand("SERIAL",2) 
   
  
    
   MoveTo(8,0.0,-23,4)
  
   
   
   
   Endcommand(2)
   
   
   SetGameObject("FighterFour")
   BeginCommand("PARALLEL",2) 
   
   
    OrientTo(90,0 ,10,.3)
 
   
   Endcommand(2)


   SetGameObject("AsteroidSceneThree")
   BeginCommand("PARALLEL",2) 
   
   
    MoveTo(0,-20 ,0, 4)
 
   
   Endcommand(2)

end



function SceneFour( ... )
	
  SetGameObject("AsteroidTwoSceneFour") 
  BeginCommand("PARALLEL",1) 
 
  MoveTo(0,20 ,20, 14) 
  OrientTo(360,90,0,4) 
  OrientTo(270,90,0,4) 
  Endcommand(1)

  SetGameObject("AsteroidThreeSceneFour") 
  BeginCommand("PARALLEL",1) 
 
  MoveTo(0,20 ,20, 14) 
  
  OrientTo(270,90,0,4) 
  Endcommand(1)

  SetGameObject("AsteroidFourSceneFour") 
  BeginCommand("PARALLEL",1) 
 
   MoveTo(0,-20 ,20, 14) 

  Endcommand(1)

  SetGameObject("FalconFour") 
  BeginCommand("SERIAL",1) 
 
  MoveTo(16, -2 ,-20, 2) 

  Endcommand(1)

  SetGameObject("FalconFour") 
  BeginCommand("PARALLEL",1) 

  OrientTo(-60,90,0,.5)
  WaitForSeconds(.7)
  MoveTo(-30, -3 ,-20, 2) 

  OrientTo(-90,90,0,.5)
  WaitForSeconds(.2)

  OrientTo(-20,90,0,.5)

  Endcommand(1)

   SetGameObject("AsteroidFiveSceneFour") 
  BeginCommand("PARALLEL",1) 

  WaitForSeconds(1)
  MoveTo(20, 20 ,0, 2) 

  OrientTo(-60,90,0,.5)
  

  OrientTo(-20,90,0,.5)


  SetGameObject("FighterSceneFour") 
  BeginCommand("SERIAL",1) 

  
  --MoveTo(20, 20 ,0, 2) 


  Endcommand(1)

  SetGameObject("FighterSceneFour")
  BeginCommand("PARALLEL",1) 

   MoveTo(5, 0 ,-30, 2)
   WaitForSeconds(1.5)
   OrientTo(0,0,-360,1)
   MoveTo(7, 3 ,-32, 1) 

   Endcommand(1)

    SetGameObject("FighterSceneFourTwo")
  BeginCommand("PARALLEL",1) 

   MoveTo(5, -2 ,-30, 2)
   

   

    Endcommand(1)

    SetGameObject("FighterSceneFourThree")
    BeginCommand("PARALLEL",1) 

     MoveTo(5, 8 ,-30, 2)
   

   

   Endcommand(1)
 
end




--SceneOne()
--SceneTwo()
--SceneThree()
SceneFour()
--MoveTo()
--FollowObject("Sphere2", 3, 1, 1, 5, 0,-2,0)   --(targetName, speed, acceleration, deceleration, distance, follow offset[x,y,z])
