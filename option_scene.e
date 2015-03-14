note
	description: "Summary description for {OPTION_SCENE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OPTION_SCENE

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
		-- This is the constructor of the class "OPTION_SCENE", It initiates and
		-- creates all the variables specific to that scene. By default, the game is not
		-- started and the options menu isn't either.
		local
			layer1,layer2,layer3,layer4:DRAWABLE
			text1,text2,text3,text4:TEXT
		do
			Precursor {BASIC_SCENE}(a_manager, a_audio_manager)

			-- / Creation of different text objects /
			create text1.make_titre([0,0],"Looking for Home",255,255,255)
			create text2.make_text([0,200],"General volume : ",255,255,255)
			create text3.make_text([0,280],"Music volume : ",255,255,255)
			create text4.make_text([0,360],"Return",255,255,255)

			create selectables.make_from_array(<<text4,text3,text2>>)

			-- / insertions of the text object in text_list /
			text_list.extend (text1)
			text_list.extend (text2)
			text_list.extend (text3)
			text_list.extend (text4)

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
				--
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
				-- on "General Volume" selection
				if index_selected.is_equal (3) then

				-- on "Sound Volume" selection
				elseif index_selected.is_equal (2) then
				-- on "Return" selection
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

			-- **** SEARCH FOR A BETTER WAY, "transition_counter.is_equal" IS KINDA DUMB!!!!!! ****
			-- On the end of the transition animation
			if transition_counter.is_equal(30)  then
				-- if "play" was selected
				if index_selected.is_equal (1) then
					a_current_scene_index.put (1)
				else
					print("Error during the selection of an option")
				end
				transition_counter := 1
				change_scene := false
			end
		end
end
