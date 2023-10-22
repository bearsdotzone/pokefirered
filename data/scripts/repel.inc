EventScript_RepelWoreOff::
	checkitem VAR_REPEL_TYPE_USED
	goto_if_eq VAR_RESULT, NO, EventScript_RepelUnavailable
	msgbox Text_RepelReplacementOption, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_AcceptRepel
	releaseall
	end

EventScript_RepelUnavailable::
	msgbox Text_RepelNoReplacement, MSGBOX_SIGN
	releaseall
	end

EventScript_AcceptRepel::
	removeitem VAR_REPEL_TYPE_USED
	callnative UseRepelRepeat
	releaseall
	end

Text_RepelNoReplacement::
	.string "REPEL's effect wore off…$"

Text_RepelReplacementOption::
	.string "REPEL's effect wore off…\n"
	.string "Would you like to use another repel?$"
