note
	description: "Summary description for {FRAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FRAME

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_manager:GAME_LIB_CONTROLLER; a_audio_manager:AUDIO_CONTROLLER;a_appName:STRING)
		-- Constructor of the class "FRAME". Building a window with a fixed resolution
		-- which handles graphics, inputs and audio. On creation, it starts the game.
		local
			player_controller:CONTROLLER
			audio_controller:AUDIO_PLAYER
		do
			create current_scene_index.put (1)
			create_window(
				a_manager,
				a_appName,
				false)
			create audio_controller.make (a_audio_manager)
			create player_controller.make(a_manager)
			-- / Starts the game /
			start(a_manager,player_controller,audio_controller)
		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	create_window(a_manager:GAME_LIB_CONTROLLER;a_appName:STRING;is_fullscreen:BOOLEAN)
		-- This function create the actual frame which will contain the game. It sets
		-- the title of the frame and handles what happens on the closing of the window.
		do
			a_manager.create_screen_surface (
				800, 600, -- Width and Height resolutions of the window
				16,	-- a_bits_per_pixel
				false, -- a_in_video_memory
				true, -- a_has_hardware_dbl_buf
				false, -- a_is_resisable
				true, -- a_with_frame
				is_fullscreen) -- a_fullscreen
			a_manager.set_window_caption (a_appName, a_appName)
			a_manager.event_controller.on_quit_signal.extend (agent on_quit(a_manager))
		end
	start(a_manager:GAME_LIB_CONTROLLER;a_player_controller:CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This function creates the different levels of the game and launch the main loop.
		do
			create level_1.make (a_manager, a_audio_manager)
			create main_menu.make (a_manager, a_audio_manager)
			create option_menu.make (a_manager, a_audio_manager)
			a_manager.event_controller.on_iteration.extend (agent update(
				a_manager,
				a_player_controller,
				a_audio_manager))
			-- **** This is where the game stands when looping ??? ****
			a_manager.launch
		end
	update(a_manager:GAME_LIB_CONTROLLER;a_player_controller:CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This function represent the main loop of the game which update the current scene,
		-- update the audio manager and flips the screen.
		do
			-- Chooses which scene to update
			if current_scene_index.item.is_equal (1) then
				main_menu.update (
					a_manager,
					a_player_controller,
					a_audio_manager,
					current_scene_index)
			elseif current_scene_index.item.is_equal (2) then
				option_menu.update (
					a_manager,
					a_player_controller,
					a_audio_manager,
					current_scene_index)
			elseif current_scene_index.item.is_equal (3) then
				level_1.update (
					a_manager,
					a_player_controller,
					a_audio_manager,
					current_scene_index)
			else
				print("The scene could not be selected")
			end
			a_audio_manager.update
			a_manager.flip_screen
		end
	on_quit(a_manager:GAME_LIB_CONTROLLER)
		-- The execution of this function closes the game by stopping the main manager.
		do
			a_manager.stop
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	-- ******** IS THERE ANOTHER WAY TO DECLARE OUR SCENE OBJECTS ******
	main_menu:MAIN_MENU_SCENE
	level_1:LEVEL_ONE_SCENE
	option_menu:OPTION_SCENE
	current_scene_index:CELL[INTEGER_8] -- assign set_current_scene_index

end
