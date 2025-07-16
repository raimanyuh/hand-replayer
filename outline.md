hand-replayer software outline.

high level main features:
    - record a hand history using a gui
    - save hand history in some local format that is easily parsable, you select the file and the application opens the hand history
    - there should probably be an editor mode to create the hand history and then like a replay mode so you can click through the full history

lower level requirements:
    general gui:
        - blinds/stakes somewhere on the screen
        - ability to add as many blinds/straddles as we want all the way around to the button
    poker table:
        - draw a graphic poker table with seats/players around it.
        - ability to add/remove players in a range of 2-10
        - players should always be evenly spaced around the table
        - btn/sb/bb should be clear along with other poker position names (utg, lj, hj, co)
        - player action
    player:
        - stack size
        - position
        - notes on player (maybe don't display automatically, need to click player to write/view notes)
        - action (check/bet/fold)
        - cards
    cards:
        - standard 52 card deck with card and suit, should be able to choose cards in each players hand
        - should be blank (maybe a back of card graphic) to show players who arent really involved in the hand
    buttons:
        - buttons for each action
        - some sort of way to enter how much someone is going to bet/raise
        - in general the buttons should be fold/call/raise.
        - if not required to put money in to play, check/bet buttons.