note
	description: "Summary description for {CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROLLER

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_manager:GAME_LIB_CONTROLLER)
		-- Represent the constructor of the class "CONTROLLER". It only activates the
		-- keyboard and mouse inputs and sets the defaults values to its attributes.
		do
			activate_key_pressed(a_manager)
			activate_mouse(a_manager)
			current_key_down := ""
			key_is_pressed:=false
		end

feature	-- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	activate_key_pressed(a_manager:GAME_LIB_CONTROLLER)
		-- Enable unicode entries on keyboard and launch specific functions if a key
		-- is down or up.
		do
			a_manager.event_controller.on_key_down.extend (agent on_key_down(?))
			a_manager.event_controller.on_key_up.extend (agent on_key_up(?))
			a_manager.event_controller.enable_keyboard_unicode
		end

	on_key_down(a_keyboard_event:GAME_KEYBOARD_EVENT)
		-- This function contains everything that has to happen each iteration on a
		-- key pressed.
		local
			a_lettre:CHARACTER_32
		do
			-- / Setting the current_key_down /
			if a_keyboard_event.is_escape_key then
				current_key_down := "escape"
			elseif a_keyboard_event.is_space_key then
				current_key_down := "spacebar"
			elseif a_keyboard_event.is_return_key then
				current_key_down := "enter"
			else
				current_key_down := ""
				a_lettre := a_keyboard_event.character
				current_key_down.append_character (a_lettre)
			end
			-- / Setting the directionnal state /
			if a_keyboard_event.is_w_key then
				up := true
			end
			if a_keyboard_event.is_s_key then
				down := true
			end
			if a_keyboard_event.is_a_key then
				left := true
			end
			if a_keyboard_event.is_d_key then
				right := true
			end
			if a_keyboard_event.is_lshift_key then
				shift := true
			end
			if a_keyboard_event.is_space_key then
				jump := true
			end
		end
	on_key_up(a_keyboard_event:GAME_KEYBOARD_EVENT)
		-- This function contains everything that has to happen each iteration on a
		-- key released.
		do
			current_key_down := ""
			-- / Setting the directionnal state /
			if a_keyboard_event.is_w_key then
				up := false
			end
			if a_keyboard_event.is_a_key then
				left := false
			end
			if a_keyboard_event.is_s_key then
				down := false
			end
			if a_keyboard_event.is_d_key then
				right := false
			end
			if a_keyboard_event.is_lshift_key then
				shift := false
			end
			if a_keyboard_event.is_space_key then
				jump := false
			end
		end
	activate_mouse(a_manager:GAME_LIB_CONTROLLER)
		-- Launch a specific function on mouse mouvement.
		do
			a_manager.event_controller.on_mouse_motion_position.extend (agent on_mouse_move(?,?))
		end
	on_mouse_move(x,y:NATURAL_16)
		-- Set the attribute "mouse_coordinates" with the actual coordinates of the
		-- mouse when it moves.
		do
			mouse_coordinates := [x,y]
		end
	set_current_key_down(key:STRING)
		-- Setter of the attribute "current_key_down".
		do
			current_key_down := key
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	current_key_down:STRING_32
	mouse_coordinates:TUPLE[x,y:NATURAL_16]
	up:BOOLEAN
	down:BOOLEAN
	left:BOOLEAN
	right:BOOLEAN
	shift:BOOLEAN
	jump:BOOLEAN
	crouch:BOOLEAN
	escape:BOOLEAN
	key_is_pressed:BOOLEAN

end
