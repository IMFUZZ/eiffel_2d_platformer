note
	description: "Summary description for {AUDIO_PLAYER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	AUDIO_PLAYER -- CHANGE THAT SO IT'LL BE A CHILD OF AUDIO MANAGER
	-- ALSO OPTIMISE THE WAY SOUNDS ARE ACCESSED AND STORE PLZ THX

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_audio_manager:AUDIO_CONTROLLER)
		-- This is the constructor of the class "AUDIO_PLAYER". It initiates his
		-- audio_manager and sound_list.
		do
			audio_manager := a_audio_manager
			create sound_list.make
		end

feature	-- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	add_main(a_sound:STRING)
		-- This function adds the main sound player in an infinite loop, which represent
		-- the main music of the game.
		local
			sound:AUDIO_SOUND_WAV_FILE
		do
			audio_manager.add_source
			source:=audio_manager.source_at (1)
			create sound.make (a_sound)
			sound_list.extend (sound)
			source.queue_sound_infinite_loop (sound)
		end
	add_second(a_sound:STRING)
		-- This function adds the secondary sound player in an infinite loop, which
		-- represent the additionnal sound of the game.
		local
			sound:AUDIO_SOUND_WAV_FILE
		do
			audio_manager.add_source
			create sound.make (a_sound)
			sound_list.extend (sound)
		end
	update
		-- This function updates the audio_manager (has to be done each frame that
		-- contains sounds.
		do
			audio_manager.update
		end
	play(a_source:AUDIO_SOURCE;sound_index:INTEGER)
		-- This function plays the source received in argument and queued the sound
		-- at the "sound_index".
		do
			source := a_source
			if not source.is_playing then
				source.queue_sound (sound_list.at (sound_index))
			end
		--	source.set_gain (0.2) -- Faire une scene option qui permet de gérer le son!
			source.play
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	audio_manager:AUDIO_CONTROLLER
	source:AUDIO_SOURCE
	sound_list:LINKED_LIST[AUDIO_SOUND_WAV_FILE]
end

