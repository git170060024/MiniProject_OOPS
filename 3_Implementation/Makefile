PROJ_NAME = ShoppingCart
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = main.cpp\
src/input_validation.cpp\
src/item.cpp\
src/List.cpp\
src/menu.cpp\

TEST_SRC = test_shoppingcart.cpp

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = $(BUILD_DIR)/Test_$(PROJ_NAME).$(EXEC)

INC = -Iinc\
inc/shoppingcart.h

INCLUDE_LIBS = -lgtest -lgtest_main -lpthread

# Project Output name
PROJECT_OUTPUT = $(BUILD_DIR)/$(PROJ_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html




# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean documentation

#all:  $(BUILD_DIR) 
#	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)
all:$(SRC) $(BUILD_DIR) 
	g++ $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test:$(BUILD_DIR)
	g++ $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
#test: $(SRC) $(TEST_SRC) $(BUILD_DIR)
#	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
#	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a main.cpp

#coverage:${PROJECT_NAME}
#	gcc -fprofile-arcs -ftest-coverage  $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
#	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

#	gcov -a $(SRC)

doc:
	make -C ./documentation
analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:$(BUILD_DIR)
	cppcheck --enable=all  main.cpp

memcheck: $(BUILD_DIR)
	valgrind ./$(TEST_OUTPUT)


$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov *.gch