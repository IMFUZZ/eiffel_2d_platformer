note
	description: "Summary description for {SCENE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	BASIC_SCENE

feature  -- | DEFERRED CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_manager:GAME_LIB_CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- Represent the deferred constructor of an abstract class
		-- representing the model for a scene which contains the
		-- list of backgrounds, drawables, texts and gui elements.
		do
			transition_counter := 0
			change_scene := false
			create player.make (
				"ressources/images/walk_animation.png", -- **** WHY THE F*CK, CHANGE THAT NOW! ****
				[a_manager.screen_surface.width.as_integer_32//2,
				a_manager.screen_surface.height.as_integer_32//2+125])
			create background.make
			create drawables.make
			create text_list.make
			create gui_list.make
			create main_background.make(
				a_manager.screen_surface.width.as_integer_32,
				a_manager.screen_surface.height.as_integer_32)
		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	update(a_manager:GAME_LIB_CONTROLLER;controller1:CONTROLLER;a_audio_manager:AUDIO_PLAYER;a_current_scene_index:CELL[INTEGER_8])
		-- This is the main loop of the scene which launch the
		-- drawing and calculation of the scene elements.
		do
			if not change_scene then
				draw_main_background(a_manager,255)
				draw_background(a_manager)
				calculate_logic(a_manager,controller1,a_audio_manager)
				draw_drawables(a_manager)
				draw_text(a_manager)
				draw_gui(a_manager)
			else
				draw_transition(a_manager)
			end
		end
	calculate_logic(a_manager:GAME_LIB_CONTROLLER;a_controller1:CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This function calculates any logic between elements
		-- such as physics, and interaction caused by inputs.
		do
		end
	draw_text(a_manager:GAME_LIB_CONTROLLER)
		-- This function launch a loop which print each text
		-- element contained within the scene.
		do
			across text_list as la_text loop
				a_manager.screen_surface.draw_surface (
					la_text.item.l_text_surface,-- The CURRENT TEXT inside the list
					la_text.item.origin.x, -- The X coordinates where it will be drawn (the text coordinate itself)
					la_text.item.origin.y)	-- The Y coordinates where it will be drawn (the text coordinate itself)
			end
		end
	draw_background(a_manager:GAME_LIB_CONTROLLER)
		-- This function launch a loop which print each background
		-- element contained within the scene.
		do
			across background as la_background loop
				if la_background.item.is_relative_to_player then
					la_background.item.origin.x :=
						la_background.item.origin.x-(player.mouvement.x * la_background.item.ratio.x)//3
					la_background.item.origin.y :=
						la_background.item.origin.y-(player.mouvement.y * la_background.item.ratio.y)//3
				--	la_background.item.update(a_manager)  ** I WANT TO PUT IT THERE, HAS TO FIX ERRORS (STUPID CLOUDS) **
				end
				a_manager.screen_surface.draw_sub_surface (
					la_background.item, -- The CURRENT DRAWABLE inside the list
					0, 0,  -- The X and Y origin where it will be printed on the screen
					la_background.item.origin.x+la_background.item.mouvement.x, -- The X origin from the image
					la_background.item.origin.y+la_background.item.mouvement.y, -- The Y origin from the image
					la_background.item.width, -- The WIDTH taken from the image
					la_background.item.height) -- The HEIGHT taken from the image
				la_background.item.update(a_manager)
			end
		end
	draw_drawables(a_manager:GAME_LIB_CONTROLLER)
		-- This function launch a loop which print each actor
		-- element contained within the scene.
		do
			across drawables as la_drawables loop
				a_manager.screen_surface.draw_surface (
				la_drawables.item.sprite, -- The SPRITE argument of the drawable inside the list  ** THIS IS STUPID :( CHANGE IT! **
				la_drawables.item.origin.x, -- The X coordinates where it will be drawn (the drawable coordinate itself)
				la_drawables.item.origin.y)	-- The Y coordinates where it will be drawn (the drawable coordinate itself)
			end
		end
	draw_gui(a_manager:GAME_LIB_CONTROLLER)
		-- This function launch a loop which print each gui
		-- element contained within the scene.
		do
			across gui_list as la_gui loop
				a_manager.screen_surface.draw_surface (
					la_gui.item, -- The current GUI item inside the list
					0, 0) -- The X and Y coordinates where it will be drawn (the GUI coordinates themself)
			end
		end
	draw_main_background(a_manager:GAME_LIB_CONTROLLER; opacity:NATURAL_8)
		-- This function creates a surface with the dimension
		-- of the screen. That surface is a black background
		-- behind every other surface printed.
		do
			if opacity >= 0 and opacity <= 255 then
				main_background.set_overall_alpha_value (opacity)
				a_manager.screen_surface.draw_surface (
					main_background, -- The precedently created GAME_SURFACE
					0, 0) -- X and Y origins
			else
				print("The opacity is greater than 255")
			end
		end
	draw_transition(a_manager:GAME_LIB_CONTROLLER)
	-- This function draws the main background and increment the
	-- counter while the counter is inferior to 30.
		do
			if transition_counter <= 30 then
	 			a_manager.delay (5)
	  			draw_main_background(a_manager, 20)
	  			transition_counter := transition_counter + 1
			end
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	main_background:GAME_SURFACE
	change_scene:BOOLEAN
	index_selected:INTEGER_8
	drawables:LINKED_LIST[DRAWABLE]
	background:LINKED_LIST[DRAWABLE]
	gui_list:LINKED_LIST[DRAWABLE]
	text_list:LINKED_LIST[TEXT]
	selectables:ARRAYED_LIST[TEXT]
	player:PERFORMER
	transition_counter:INTEGER_8

end
