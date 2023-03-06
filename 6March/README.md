## UAE Clock Module Draft

The UAE has a rich maritime history including pearling, trade, and fishing. A large part of transportation in the region was carried out through stunning sailing ships that are iconic symbols of the region. Traditional dhows have an elegance that I want to capture in this clock piece. Through the coordinated turns of the ships, and switching of the sail positions, life will be brought to the piece that makes it visually interesting as well through movement.  

### Diagram of Piece

![diagram](https://drive.google.com/uc?export=view&id=1lWjespmXUF6QXeGR8NDjv5zTVaDokTyo)

The ships floating on supports over the sandy bottom will be an artistic representation of the ships at sea. There will be two ships that are synchronized and feature cloth sails mounted to masts that can turn. Other elements could include pearl oysters on the bottom and maybe divers underwater. 


### Movement of Piece

![diagram](https://drive.google.com/uc?export=view&id=1h_xwuwsqjXJlz6GdAPiUSd-QeA7Wye9q)

To perform the task of movement there will be 4 motors, 2 for each ship. Two stepper motors will control the rotation of the ships so that they can turn precisely without hitting each other. In theory, these two motors could be combined into one for efficiency but the mechanism will be more complicated then and there will be less control of independent movement. These stepper motors will require a position switch so that the location of the ship is known and they are not rotated too far into each other. The ship model itself will also have a servo motor in the hull. A single control arm will move a pushrod attached to the base of both of the sail masts. This way both of the sails move at the same time and will not collide. 

The sails will be the most complicated mechanism as the rotational movement has to be translated to two other rotational axes. This will need a series of control rods and a way to translate linear movement from the control rod back to the rotational movement of the masts. 

#### Other features

As the clock will be in use at night, it might be nice to have lights to illuminate the ships. These could be controlled with a photoresistor.


