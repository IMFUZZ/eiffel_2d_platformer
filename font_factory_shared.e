note
	description: "Summary description for {FONT_FACTORY_SHARED}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	FONT_FACTORY_SHARED

feature {NONE} -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	font_factory:FONT_FACTORY
		once
			create result.make
		end

end
