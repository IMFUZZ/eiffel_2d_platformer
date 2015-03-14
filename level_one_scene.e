note
	description: "Summary description for {LEVEL_ONE_SCENE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LEVEL_ONE_SCENE

inherit
	BASIC_SCENE
	redefine
		make, calculate_logic
	end

create
	make

feature  -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_manager:GAME_LIB_CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This is the constructor of the class "LEVEL_ONE_SCENE", It initiates and
		-- creates all the variables specific to that scene. By default, the game is not
		-- paused.
		local
			layer1,layer2,layer3,layer4,layer5,layer6,layer7:DRAWABLE
			text1:TEXT
		do
			Precursor {BASIC_SCENE}(a_manager, a_audio_manager)

			paused:= false

			-- / Creation of the physic controller /
			create physic_controller.make(a_manager)
			physic_controller.add_object (player)

			-- / Creation of different layers /
			create layer1.make_with_alpha ("ressources/images/moon.png",[500,150])
			create layer2.make_with_alpha ("ressources/images/white2.png",[0,300])
			create layer4.make_with_alpha ("ressources/images/tree_loop_1_a.png",[-1,150])
			create layer5.make_with_alpha ("ressources/images/tree_loop_1_b.png",[799,150])
			create layer6.make_with_alpha ("ressources/images/tree_loop_2_a.png",[-1,0])
			create layer7.make_with_alpha ("ressources/images/tree_loop_2_b.png",[799,0])

			layer2.set_ratio ([5,1])
			layer2.set_relative_to_player (true)

			layer4.set_ratio ([2,1])
			layer4.set_relative_to_player (true)
			layer4.set_is_looping(true)

			layer5.set_ratio ([2,1])
			layer5.set_relative_to_player (true)
			layer5.set_is_looping(true)

			layer6.set_ratio ([3,1])
			layer6.set_relative_to_player (true)
			layer6.set_is_looping(true)

			layer7.set_ratio ([3,1])
			layer7.set_relative_to_player (true)
			layer7.set_is_looping(true)

			-- / Creation of different text objects /
			create text1.make_text([0,0],"Pre-Alpha 0.1",255,255,255)

			-- / insertions of the text object in text_list /
			text_list.extend (text1)

			-- / insertions of the text object in background /
			background.extend (layer1)
			background.extend (layer4)
			background.extend (layer5)
			background.extend (layer6)
			background.extend (layer7)
			background.extend (layer2)

			-- / insertions of the text object in drawables /
			drawables.extend (player)
		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	calculate_logic(a_manager:GAME_LIB_CONTROLLER;a_controller1:CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This function calculates any logic between elements such as physics, and
		-- interaction caused by inputs. For the level 1, it handles what controls the
		-- movement, physic, and collision of the main player.
		do
			Precursor {BASIC_SCENE}(a_manager, a_controller1,a_audio_manager)
			-- / Setting what controls the movement of the main player /
			player.set_shift (a_controller1.shift)
			player.set_up (a_controller1.up)
			player.set_left (a_controller1.left)
			player.set_right (a_controller1.right)
			player.set_down (a_controller1.down)
			if player.is_grounded then
				player.set_jump (a_controller1.jump)
			end
			-- / update the main player /
			player.update(a_manager)
			-- / calculates collisions in the scene (walls and floor) /
			physic_controller.calculate_collision (a_manager)
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	gravity:INTEGER
	physic_controller:PHYSIC
	paused:BOOLEAN

end
