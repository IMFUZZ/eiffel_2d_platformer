note
	description: "Summary description for {CHARACTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PERFORMER

inherit
	DRAWABLE
	redefine
		make,update
	end

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|

	-- **** a_idle_img IS WROOOONNGG !!!!!! :( ****
	make(a_idle_img: STRING;a_origin: TUPLE[x,y:INTEGER])
	-- Constructor of the performer object, initiates the animations and default values
	-- of position and mouvement. Also sets that the performer is not looking left and
	-- is not grounded by default.
		do
			Precursor {DRAWABLE}(a_idle_img, a_origin)

			-- / state conditions /
			jump := false
			is_looking_left := false
			is_grounded := false

 			-- / counter that changes the frames /
			frame_counter := 1

			-- / Initiation of animations /
			create idle_anim.make ("ressources/images/idle_animation.png", 8, true)
			create walk_anim.make ("ressources/images/walk_animation.png", 8, true)
			create run_anim.make ("ressources/images/run_animation.png", 8, true)
			create crouch_anim.make ("ressources/images/crouch_animation.png", 8, false)
			create jump_anim.make ("ressources/images/jump_animation.png", 8, false)
			create current_animation.make ("ressources/images/idle_animation.png", 8, true)

			-- **** HAVE TO MAKE FROM FILE?? WHYYYY (FIND WHY AND CHANGE IT!) ****
			create {GAME_SURFACE_IMG_FILE}sprite.make_with_alpha ("ressources/images/idle_animation.png")

			-- / Coordinate variables /
			origin_x := a_origin.x
			origin_y := a_origin.y
			update_coordinates

			-- / Mouvement variables /
			speed := 2
			run_speed := 0
			mouvement := [0,0]
			fall := 10

		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	update(a_manager:GAME_LIB_CONTROLLER)
		-- Calculates the position and changes the animation of the performer
		do
			calculate_jump
			change_animation
			-- **** IS IT NEEDED TO BE THERE??? ****
			if shift then
				run_speed := 3
			else
				run_speed := 0
			end
			change_frame
			update_coordinates
			increment_frame
		end
	change_animation
		-- Depending on the state, sets the current animation to the correct animation
		do
			if not is_grounded then
				if jump then
					set_current_animation(jump_anim)
				elseif not jump and fall > 13 then
					set_current_animation(jump_anim)
				end
			else
				if ((right or left) and not (right and left) and shift) then
					set_current_animation(run_anim)
				elseif (right or left) and not (right and left) and not shift then
					set_current_animation(walk_anim)
				elseif down then
					set_current_animation(crouch_anim)
				else
					set_current_animation(idle_anim)
				end
			end
		end
	calculate_jump
		-- Add force to the Vertical (upper) mouvement if is jumping
		do
			if jump then
				jump_force := jump_force * 0.98
				mouvement.y := jump_force.rounded
			else
				mouvement.y := 0
				jump_force := -30
			end
		end
	increment_frame
		-- Controls the counter depending if the animation loops
		do
			frame_counter := frame_counter + 1
			if frame_counter.is_equal (24) then
				if current_animation.is_looping then
					frame_counter := 1
				else
					frame_counter := 23
				end
			end
		end
	change_frame
		-- setting the frame of the current animation depending on the mouvement
		-- and orientation.
		do
			if (left and not right) then
				is_looking_left := true
				sprite := current_animation.frames_left.at ((frame_counter//3)+1)
				mouvement.x := 0 - (speed + run_speed)
			elseif (right and not left) then
				is_looking_left := false
				sprite := current_animation.frames_right.at ((frame_counter//3)+1)
				mouvement.x := 0 + (speed + run_speed)
			else
				if is_looking_left then
					sprite := current_animation.frames_left.at ((frame_counter//3)+1)
				else
					sprite := current_animation.frames_right.at ((frame_counter//3)+1)
				end
				mouvement.x := 0
			end
			draw_surface (sprite, 0, 0)
		end
	reset_frame_counter
		-- Sets 'frame_counter' to 1
		do
			frame_counter := 1
		end
	set_up(is_pressed:BOOLEAN)
		-- Sets the `up' state of `Current' to the values of `is_pressed'.
		do
			up := is_pressed
		end
	set_down(is_pressed:BOOLEAN)
		-- Sets the `down' state of `Current' to the values of `is_pressed'.
		do
			down := is_pressed
		end
	set_left(is_pressed:BOOLEAN)
		-- Sets the `left' state of `Current' to the values of `is_pressed'.
		do
			left := is_pressed
		end
	set_right(is_pressed:BOOLEAN)
		-- Sets the `right' state of `Current' to the values of `is_pressed'.
		do
			right := is_pressed
		end
	set_shift(is_pressed:BOOLEAN)
		-- Sets the `shift' state of `Current' to the values of `is_pressed'.
		do
			shift := is_pressed
		end
	set_jump(is_pressed:BOOLEAN)
		-- Sets the `jump' state of `Current' to the values of `is_pressed'.
		do
			jump := is_pressed
		end
	set_current_animation(a_anim:ANIMATION)
		-- Reset the `frame_counter' and change `current_animation' to the value
		-- of `a_anim'.
		do
			if not current_animation.is_equal (a_anim) then
				reset_frame_counter
				current_animation := a_anim
			end
		end
	update_coordinates
		-- Sets `origin' to the center of the current frame.
		local
			center_x, center_y: REAL_64
		do
			center_x := origin_x - (current_animation.frames_left.at ((frame_counter//3)+1).width/2)
			center_y := origin_y - (current_animation.frames_left.at ((frame_counter//3)+1).height/2)

			origin := [center_x.rounded,center_y.rounded]
		end
	set_grounded(bool:BOOLEAN)
		-- Sets the `is_grounded' state of `Current' to the values of `bool'.
		do
			is_grounded := bool
		end
	set_fall(a_fall:REAL_64)
		-- Sets the `fall' state of `Current' to the values of `a_fall'.
		do
			fall := a_fall
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	current_animation:ANIMATION
	walk_anim:ANIMATION
	idle_anim:ANIMATION
	run_anim:ANIMATION
	crouch_anim:ANIMATION
	jump_anim:ANIMATION

	speed:INTEGER
	run_speed:INTEGER
	frame_counter:INTEGER

	up:BOOLEAN
	down:BOOLEAN
	left:BOOLEAN
	right:BOOLEAN
	shift:BOOLEAN
	jump:BOOLEAN

	is_looking_left:BOOLEAN
	is_grounded:BOOLEAN

	fall:REAL_64

	origin_x, origin_y:INTEGER

	jump_force:REAL_64


end
