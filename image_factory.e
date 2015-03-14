note
	description: "Summary description for {IMAGE_FACTORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

-- WORK IN PROGRESS

class
	IMAGE_FACTORY

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make
		-- Initiation of the different images.
		do
		--	create standard_font.make ("ressources/fonts/font.ttf", 50)
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	moon_img:GAME_FONT
	level1:GAME_FONT
	cloud_1:GAME_FONT
	cloud_2:GAME_FONT
	tree_loop_1_a:GAME_FONT
	tree_loop_1_b:GAME_FONT
	tree_loop_2_a:GAME_FONT
	tree_loop_2_b:GAME_FONT

	main_menu_trees:GAME_FONT

end
