##
## EPITECH PROJECT, 2022
## Epitech
## File description:
## Makefile
##

########################
### OPTIONS          ###
########################

TARGET_NAME	=	my_rpg
SOURCE_DIR	=	src
OBJECT_DIR	=	img
LIBRARY_DIR	=	lib
HEADER_DIR	=	include

vpath %.c $(SOURCE_DIR)

########################
### COMPILER OPTIONS ###
########################

CC	=	gcc
CFLAGS	=	-W -Wall -Wextra \
		-I$(HEADER_DIR) \
		-Wno-unused-variable \
		-Wno-unused-parameter \
		-Wno-unused-but-set-variable \
		-Wno-unused-but-set-parameter \
		-g3 \
		$(C_FLAGS_INPUT)
LFLAGS	=	 -lcsfml-graphics -lcsfml-window -lcsfml-system \
		$(L_FLAGS_INPUT)

########################
### SOURCES FILES    ###
########################

SOURCES_FILES	=	program/main.c \

LIBRARY		=	\

########################
### OBJECT FILES     ###
########################

OBJECTS	=	$(SOURCES_FILES:.c=.o) $(LIBRARY:.c=.o)

########################
### RECIPES          ###
########################

.PHONY: all directories re clean fclean

all: directories $(TARGET_NAME)

directories: $(SOURCE_DIR) $(LIBRARY_DIR)

re:	clean all

clean:
	rm -f $(SOURCE_DIR)/*.o
	rm -rf $(SOURCE_DIR)/*/*.o

fclean:	clean
	rm -f $(LIBRARY_DIR)/*.o
	rm -f $(TARGET_NAME)

########################
### FILE GENERATORS  ###
########################

$(TARGET_NAME): $(OBJECTS)
	@$(CC) -o $(TARGET_NAME) $^ $(LFLAGS)
	@echo -e "-- BUILD SUCCESSFUL --"

$(LIBRARY):
	$(LIBRARY:.c=.o) --no-print-directory

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "-- Error: source folder not found ! --"

########################
### IMPLICITS REDEFS ###
########################

$(OBJECT_DIR)/%.o : %.c
	@$(CC) -c -o $@ $< $(CFLAGS)
	@echo -e "-- $@ successfully compiled --"
