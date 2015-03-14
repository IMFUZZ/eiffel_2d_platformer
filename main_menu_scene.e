note
	description: "Summary description for {MAIN_MENU_SCENE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MAIN_MENU_SCENE

inherit
	BASIC_SCENE
	redefine
		make, calculate_logic, update
	end

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_manager:GAME_LIB_CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This is the constructor of the class "MAIN_MENU_SCENE", It initiates and
		-- creates all the variables specific to that scene. By default, the game is not
		-- started and the options menu isn't either.
		local
			layer1,layer2,layer3,layer4:DRAWABLE
			text1,text2,text3,text4:TEXT
		do
			Precursor {BASIC_SCENE}(a_manager, a_audio_manager)

			game_started:=false
			option_started:=false

			-- / Creation of different layers /
			create layer1.make_with_alpha ("ressources/images/moon.png",[500,150])
			create layer2.make_with_alpha ("ressources/images/cloud1.png",[0,-50])
			create layer3.make_with_alpha ("ressources/images/cloud2.png",[0,-400])
			create layer4.make_with_alpha ("ressources/images/trees.png",[0,0])

			layer2.set_mouvement ([-6,0])
			layer2.set_is_looping (true)
			layer3.set_mouvement ([-10,0])
			layer3.set_is_looping (true)

			-- / Creation of different text objects /
			create text1.make_titre([0,0],"Looking for Home",255,255,255)
			create text2.make_text([0,200],"Play",255,255,255)
			create text3.make_text([0,280],"Options",255,255,255)
			create text4.make_text([0,360],"Quit",255,255,255)

			create selectables.make_from_array(<<text4,text3,text2>>)

			-- / Creation of different audio object /
			a_audio_manager.add_main ("ressources/sounds/game_music.wav")
			a_audio_manager.add_second ("ressources/sounds/clic.wav")

			a_audio_manager.play (a_audio_manager.audio_manager.source_at (1),1)

			-- / insertions of the text object in text_list /
			text_list.extend (text1)
			text_list.extend (text2)
			text_list.extend (text3)
			text_list.extend (text4)

			-- / insertions of the text object in background /
			background.extend (layer1)
			background.extend (layer2)
			background.extend (layer3)
			background.extend (layer4)

			-- / Setting the default selection text /
			index_selected := 3
			selectables.at (3).set_selected

		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	calculate_logic(a_manager:GAME_LIB_CONTROLLER;a_controller1:CONTROLLER;a_audio_manager:AUDIO_PLAYER)
		-- This function calculates any logic between elements such as physics, and
		-- interaction caused by inputs. For the main menu, it handles the changing
		-- and confirmation of the current selection and the closing of the application.
		do
			Precursor {BASIC_SCENE}(a_manager, a_controller1,a_audio_manager)
			-- / Handling closing procedure /
			if(a_controller1.current_key_down.is_equal ("escape")) then
				a_manager.stop
			end

			--  ******************* CHANGE THESE "IFs" THEY ARE DUMB!!! **************************			
			-- / Handling changing of selection (up) /
			if(a_controller1.current_key_down.is_equal ("w")) then
				-- / player the selection sound /
				a_audio_manager.play (a_audio_manager.audio_manager.source_at (2),2)
				selectables.at (index_selected).set_selected
				index_selected := index_selected +1
				if index_selected.is_equal (4) then
					index_selected := 1
				end
				selectables.at (index_selected).set_selected
			end
			-- / Handling changing of selection (down) /
			if(a_controller1.current_key_down.is_equal ("s")) then
				-- / player the selection sound /
				a_audio_manager.play (a_audio_manager.audio_manager.source_at (2),2)
				selectables.at (index_selected).set_selected
				index_selected := index_selected -1
				if index_selected.is_equal (0) then
					index_selected := 3
				end
				selectables.at (index_selected).set_selected
			end
			-- / Handling the confirmation of selection ("enter") /
			if(a_controller1.current_key_down.is_equal ("enter")) then
				-- on "play" selection
				if index_selected.is_equal (3) then
					change_scene := true
				-- on "option" selection
				elseif index_selected.is_equal (2) then
					change_scene := true
				-- on "quit" selection
				elseif index_selected.is_equal (1) then
					change_scene := true
				-- on *other* selection
				else
					-- / Is the selection index is wrong on "enter" /
					print("The current index of selection is pointing at something inexistent")
				end
			end
			-- / Resetting the value of the current key down (or else it keeps its value until change) /
			a_controller1.set_current_key_down("")
		end
		update(a_manager:GAME_LIB_CONTROLLER;controller1:CONTROLLER;a_audio_manager:AUDIO_PLAYER;a_current_scene_index:CELL[INTEGER_8])
			-- This is the main loop of the scene which launch the
			-- drawing and calculation of the scene elements.
			do
				Precursor {BASIC_SCENE}(a_manager, controller1, a_audio_manager, a_current_scene_index)

				-- **** SEARCH FOR A BETTER WAY "transition_counter.is_equal" IS KINDA DUMB!!!!!! ****
				-- On the end of the transition animation
				if transition_counter.is_equal(30)  then

					-- if "play" was selected
					if index_selected.is_equal (3) then
						a_current_scene_index.put (3)

					-- if "option" was selected
					elseif index_selected.is_equal (2)	then
						a_current_scene_index.put (2)
					elseif index_selected.is_equal (1)	then
						a_manager.stop
					else
						a_manager.stop
					end
					transition_counter := 1
					change_scene := false
				end
			end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	game_started:BOOLEAN
	option_started:BOOLEAN

end
