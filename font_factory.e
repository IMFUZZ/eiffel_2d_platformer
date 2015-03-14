note
	description: "Summary description for {FONT_FACTORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FONT_FACTORY

create
	make

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|
	make
		-- Initiation of the different fonts.
		do
			create standard_font.make ("ressources/fonts/font.ttf", 50)
			create debug_font.make ("ressources/fonts/font.ttf", 50)
			create title_font.make ("ressources/fonts/AmaticSC-Bold.ttf", 100)
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	standard_font:GAME_FONT
	debug_font:GAME_FONT
	title_font:GAME_FONT

end
