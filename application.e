note
	description : "project application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make
		-- This is the constructor of the class "APPLICATION". It creates
		-- and enables all the main managers. After lauching the game (main
		-- loop), it closes those managers.
		local
			manager:GAME_LIB_CONTROLLER
			text_manager:GAME_TEXT_CONTROLLER
			audio_manager:AUDIO_CONTROLLER
		do
			-- / Creating managers /
			create manager.make
			create text_manager.make
			create audio_manager.make

			-- / Enabling those managers /
			manager.enable_video
			text_manager.enable_text
			audio_manager.enable_sound

			-- / Running application /
			run(manager,audio_manager)

			-- / Quitting managers /
			audio_manager.quit_library
			text_manager.quit_library
			manager.quit_library
		end

feature	-- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	run(manager:GAME_LIB_CONTROLLER;a_audio_manager:AUDIO_CONTROLLER)
		-- This function creates the main frame of the game, and keeps the
		-- values of the frame title.
		local
			game_frame:FRAME
			frame_title:STRING
		do
			frame_title := "Looking for home -- Pre-Alpha 0.1 --"  -- Variable séparée? **
			create game_frame.make(
				manager,
				a_audio_manager,
				frame_title)
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|

end
