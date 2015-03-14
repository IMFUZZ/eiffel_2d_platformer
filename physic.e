note
	description: "Summary description for {PHYSIC}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHYSIC

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make(a_manager:GAME_LIB_CONTROLLER)
		-- Constructor of the physic object, initiates the list of drawables.
		do
			create drawable_list.make
		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	add_object(object:PERFORMER)
		-- This adds a drawable to the drawable list
		do
			drawable_list.extend(object)
		end

	calculate_collision(a_manager:GAME_LIB_CONTROLLER)
		-- Adjust the position the drawable depending on the right, left and down
		-- collision.
		do
			adjust_down(a_manager)
			adjust_left(a_manager)
			adjust_right(a_manager)
		end

	adjust_down(a_manager:GAME_LIB_CONTROLLER)
		-- Detects 2 pixels below the image of the drawable and if the blue color it
		-- superior to 250, adjust the vertical position of the drawable up.
		local
			pixel_collider_down:INTEGER
			pixel_adjuster_down:INTEGER
		do
			across drawable_list as la_actor loop
				-- / Setting the pixel for collision /
				pixel_collider_down :=
					a_manager.screen_surface.pixel_color (
						la_actor.item.origin.x + (la_actor.item.sprite.width//2),
						la_actor.item.origin.y + la_actor.item.height).blue

				-- / Setting the pixel for adjustment /
				pixel_adjuster_down :=
					a_manager.screen_surface.pixel_color (
						la_actor.item.origin.x + (la_actor.item.sprite.width//2),
						((la_actor.item.origin.y + la_actor.item.height) - 10) ).blue

				-- / If the colliding pixel touches the ground, the object is grounded /
				if pixel_collider_down > (250) then
					la_actor.item.set_grounded (true)
				else
					la_actor.item.set_grounded (false)
				end

				-- / Raising and slowing the object when climbing a hill /
				if pixel_adjuster_down > (250) then
					la_actor.item.set_mouvement (
						la_actor.item.mouvement.x//2,-10)
				end

				-- / Applying gravity to the object /
				if la_actor.item.is_grounded then
					la_actor.item.set_mouvement (
						la_actor.item.mouvement.x,
						la_actor.item.mouvement.y)
					la_actor.item.set_fall(10)
				else
					if la_actor.item.fall.is_less (45) then
						la_actor.item.set_fall(la_actor.item.fall*1.03)
					end
					la_actor.item.set_mouvement (
						la_actor.item.mouvement.x,
						la_actor.item.mouvement.y + la_actor.item.fall.rounded)
				end
			end

		end
	adjust_left(a_manager:GAME_LIB_CONTROLLER)
		-- Detects 2 pixels beside (left) the image of the drawable and if the blue color it
		-- superior to 250, adjust the horizontal position of the drawable to the right.
		local
			pixel_adjuster_left:INTEGER
		do
			across drawable_list as la_actor loop
				-- Sets the pixel adjuster at the left
				pixel_adjuster_left :=
					a_manager.screen_surface.pixel_color (
						la_actor.item.origin.x + 10,
						la_actor.item.origin.y + (la_actor.item.height//2) ).blue

				-- Push the object to the right when colliding
				if pixel_adjuster_left > (250) then
					la_actor.item.set_mouvement (
						(la_actor.item.mouvement.x - (la_actor.item.mouvement.x-1)),
						la_actor.item.mouvement.y)
				end
			end
		end
	adjust_right(a_manager:GAME_LIB_CONTROLLER)
		-- Detects 2 pixels beside (right) the image of the drawable and if the blue color it
		-- superior to 250, adjust the horizontal position of the drawable to the left.
		local
			pixel_adjuster_right:INTEGER
		do
			across drawable_list as la_actor loop
				-- Sets the pixel adjuster at the right
				pixel_adjuster_right :=
					a_manager.screen_surface.pixel_color (
					(la_actor.item.origin.x + la_actor.item.sprite.width) - 10,
					la_actor.item.origin.y + (la_actor.item.height//2)).blue

				-- Push the object to the left when colliding
				if pixel_adjuster_right > (250) then
					la_actor.item.set_mouvement (
						la_actor.item.mouvement.x - (la_actor.item.mouvement.x+1),
						la_actor.item.mouvement.y)
				end
			end
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	drawable_list:LINKED_LIST[PERFORMER]

end

