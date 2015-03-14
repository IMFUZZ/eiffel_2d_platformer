note
	description: "Summary description for {ANIMATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ANIMATION

create
	make

feature  -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_img_source:STRING;a_frames_number:INTEGER;a_is_looping:BOOLEAN)
		-- This is the constructor of the class "ANIMATION". It initialise the values
		-- of each frame lists. It also set the variable which handle if the animation
		-- is a looping one.
		do
			frames_right := create_right_frames(a_img_source,a_frames_number)
			frames_left := create_left_frames(a_frames_number)
			is_looping := a_is_looping
		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	create_right_frames(a_img_source:STRING;a_frames:INTEGER):LIST[GAME_SURFACE]
		-- This function create the original list of different sprite pointing at
		-- the right. Takes an image, and an number of different "frames" with which
		-- it splits the image.
		local
			counter:INTEGER
			each_frame_width:INTEGER
			img_source:GAME_SURFACE_IMG_FILE
		do
			create img_source.make_with_alpha (a_img_source)
			each_frame_width := img_source.width//a_frames
			Result :=create {ARRAYED_LIST[GAME_SURFACE]}.make(a_frames)

			from counter := 0
  			until counter.is_equal (a_frames)
  			loop
  				Result.extend (img_source.sub_surface (each_frame_width*counter, 0, each_frame_width, img_source.height))
  				counter := counter + 1
  			end
		end
	create_left_frames(a_frames:INTEGER):LIST[GAME_SURFACE]
		-- This function create the second list of different sprite pointing at
		-- the left. It uses the precedent frame created (frames_right), and an number
		--of different "frames" with which it splits the image.
		local
			counter:INTEGER
			each_frame_width:INTEGER
			img_source:GAME_SURFACE_IMG_FILE
		do
			Result :=create {ARRAYED_LIST[GAME_SURFACE]}.make(a_frames)
		  	from counter := 1
  			until counter.is_equal (a_frames+1)
  			loop
  				Result.extend (frames_right.at (counter).surface_mirrored (true, false))
  				counter := counter + 1
  			end
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	frames_left:LIST[GAME_SURFACE]
	frames_right:LIST[GAME_SURFACE]
	is_looping:BOOLEAN

end
