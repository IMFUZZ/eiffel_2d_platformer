note
	description: "Summary description for {IMAGE_FACTORY_SHARED}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

-- WORK IN PROGRESS

deferred class
	IMAGE_FACTORY_SHARED

feature {NONE} -- | VARIABLES |
	-- |--------------------------------------------------------------------------------|
	image_factory:IMAGE_FACTORY
		once
			create result.make
		end

end
