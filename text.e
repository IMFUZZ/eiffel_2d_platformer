note
	description: "Summary description for {TEXT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEXT

inherit
	DRAWABLE
	FONT_FACTORY_SHARED

create
	make_text, make_titre

feature {NONE} -- | CONSTRUCTORS |
	-- |--------------------------------------------------------------------------------|

	-- **** THE 2 NEXT FUNCTIONS ARE REPEATING, CHANGE THAT YOU RETARD! ****
	make_text(a_coordinates:TUPLE[x,y:INTEGER];text:STRING_GENERAL;a_red,a_green,a_blue:NATURAL_8)
		-- Constructor of the standard font object. It is created with the standard font
		-- with the coordiatess, text and color received by arguments.
		do
			origin := a_coordinates
			l_font := font_factory.standard_font
			create l_font_color.make_rgb (
				a_red,
				a_green,
				a_blue)
			create l_text_surface.make_blended (
				text,
				l_font,
				l_font_color)

			create l_font_color_selected.make_rgb (
				a_red,
				0,
				0)
			create l_text_surface_selected.make_blended (
				text,
				l_font,
				l_font_color_selected)
			create l_text_surface_not_selected.make_blended (
				text,
				l_font,
				l_font_color)
		end
	make_titre(a_coordinates:TUPLE[x,y:INTEGER];text:STRING_GENERAL;a_red,a_green,a_blue:NATURAL_8)
		-- Constructor of the title font object. It is created with the title font
		-- with the coordiates, text and color received by arguments.
		do
			origin := a_coordinates
			selected := false
			l_font := font_factory.title_font

			create l_font_color.make_rgb (
				a_red,
				a_green,
				a_blue)
			create l_text_surface.make_blended (
				text,
				l_font,
				l_font_color)
			create l_font_color_selected.make_rgb (
				a_red,
				0,
				0)
			create l_text_surface_selected.make_blended (
				text,
				l_font,
				l_font_color_selected)
			create l_text_surface_not_selected.make_blended (
				text,
				l_font,
				l_font_color)
		end

feature -- | FUNCTIONS |
	-- |--------------------------------------------------------------------------------|
	set_selected
	-- This function toggle the text from selected to not selected.
		do
			if selected.is_equal(false) then
				selected := true
				l_text_surface := l_text_surface_selected
			else
				selected := false
				l_text_surface := l_text_surface_not_selected
			end
		end

feature -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|

	-- **** WAY TOO MANY VARIABLES, THAT IS NOT COOL BRO *****
	selected:BOOLEAN
	l_font:GAME_FONT
	l_font_color:GAME_COLOR
	l_font_color_selected:GAME_COLOR
	l_text_surface_not_selected:GAME_SURFACE_TEXT
	l_text_surface:GAME_SURFACE_TEXT
	l_text_surface_selected:GAME_SURFACE_TEXT

end
