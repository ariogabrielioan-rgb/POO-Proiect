# Compilatorul folosit
CXX =	g++
# Flag-uri de compilare (standardul C++17 și afișarea avertismentelor)
CXXFLAGS = -std=c++17 -Wall -Wextra

# Țintele (executabilele finale)
APP = simulare.exe
TEST = teste.exe

# Regula implicită: când rulezi doar "make", va compila tot
all: $(APP) $(TEST)

# Compilarea programului principal
$(APP): src/main.cpp src/Vehicule.h
	$(CXX) $(CXXFLAGS) src/main/main.cpp -o $(APP)

# Compilarea testelor
$(TEST): tests/test_vehicule.cpp src/Vehicule.h
	$(CXX) $(CXXFLAGS) tests/test_vehicule.cpp -o $(TEST)

# Regula pentru curățarea fișierelor compilate (ex: rulezi "make clean")
clean:
	rm 	-f $(APP) $(TEST)