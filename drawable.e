note
	description: "Summary description for {DRAWABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DRAWABLE

inherit
	GAME_SURFACE_IMG_FILE
	rename
		make as make_regular_png,
		make_with_alpha as make_regular_alpha_png
	end

create
	make,
	make_with_alpha

feature -- | CONSTRUCTORS |
	make(a_img_name: STRING; a_origin : TUPLE[x,y:INTEGER]) -- *** JAMAIS ESSAYÉ ENCORE, TRY IT! ***
		-- Principal constructor of the class "DRAWABLE". Creates
		-- an object corresponding to a GAME_SURFACE_IMG_FILE
		-- without alpha, with additionnal proprieties.
		do
			make_regular_png(a_img_name)
			origin := [a_origin.x,a_origin.y]
			mouvement := [0,0]
			is_looping:=false
			ratio := [1,1]
		end
	make_with_alpha(a_img_name: STRING; a_origin : TUPLE[x,y:INTEGER])
		-- Principal constructor of the class "DRAWABLE". Creates
		-- an object corresponding to a GAME_SURFACE_IMG_FILE
		-- with alpha, with additionnal proprieties.
		do
			animation_slower_x := a_origin.x
			make_regular_alpha_png(a_img_name)
			origin := [a_origin.x,a_origin.y]
			mouvement := [0,0]
			is_looping := false
			is_relative_to_player := false
			ratio := [1,1]
		end

feature -- | FUNCTIONS |
	update(a_manager:GAME_LIB_CONTROLLER)
		-- This functions contains what must be done each iteration
		-- concerning the current drawable.
		do
			if is_looping then
				if not is_relative_to_player then
					animation_slower_x := animation_slower_x + mouvement.x
					origin.x := animation_slower_x//10
				end
				if origin.x > 800 then
					origin.x := origin.x - (width + 800)
				end
				if origin.x < (-width) then
					origin.x := origin.x + width + 800
					animation_slower_x := 8000
				end
			end
		end
	set_mouvement(a_mouvement:TUPLE[x,y:INTEGER])
		-- Setter of the attribute "mouvement".
		do
			mouvement := a_mouvement
		end

	set_is_looping(a_is_looping:BOOLEAN)
		-- Setter of the attribute "is_looping".
		do
			is_looping := a_is_looping
		end
	set_relative_to_player(a_is_relative_to_player:BOOLEAN)
		-- Setter of the attribute "is_relative_to_player".
		do
			is_relative_to_player := a_is_relative_to_player
		end
	set_ratio(a_ratio:TUPLE[x,y:INTEGER])
		-- Setter of the attribute "ratio".
		do
			ratio := a_ratio
		end

feature -- | VARIABLES |
	origin:TUPLE[x,y:INTEGER]
	mouvement:TUPLE[x,y:INTEGER]
	animation_slower_x:INTEGER
	sprite:GAME_SURFACE
	is_looping:BOOLEAN
	is_relative_to_player:BOOLEAN
	ratio:TUPLE[x,y:INTEGER]

end
