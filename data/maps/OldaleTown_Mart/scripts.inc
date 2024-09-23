OldaleTown_Mart_MapScripts::
	.byte 0

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_REPEL
	.2byte ITEM_OLD_ROD
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_REPEL
	.2byte ITEM_OLD_ROD
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "I'm going to buy a bunch of POKé-BALLS\n"
	.string "and catch a bunch of POKé-MON!$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy ANY BERRIES??.$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "If a POKé-MON gets hurt & loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your POKé-MON from fainting,\n"
	.string "restore its HP with a STOUT-SIP!$"

