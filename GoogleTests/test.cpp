#include "pch.h"
#include "Test1.h"
#include "googlemock/include/gmock/gmock-matchers.h"

//Es sind bewusst FAILED-Tests mit integriert. In der Testcase-Datei wird in den Bemerkungen erklärt, wie die Tests PASSEN können. 

//Erklärung: Google Test Assertions: 
//Success - Non-Fatal Failures (EXPECT_) (stoppt nicht Durchführung des Tests) - Fatal Failures (ASSERT_) (stoppt Durchführung des Tests)

using namespace testing;
using namespace std;

/*int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}*/

//************DATENBANK-TESTS************//

TEST(Datab, test_1) {
	//Arrange
	DB mc("root");

	//Act
	string value = mc.GetID();

	//Assert
	ASSERT_STREQ(value.c_str(), "root");

	//Expect
	EXPECT_STREQ(value.c_str(), "root"); //EXPECT_STREQ() und ASSERT_STREQ() = equal, testen beide die Qualität des Strings
}

TEST(MyDBTest, LoginTest) {
	//Arange
	MockDB mdb;                         //Instanz Mock-Klasse wird anstelle Instanz von Database-Klasse erstellt
	MyDataBase db(mdb);
	EXPECT_CALL(mdb, login("SuperMax", "IchBinLost123!"))
		.Times(1)
		.WillOnce(Return(true));

	//Act
	int retValue = db.Init("SuperMax", "IchBinLost123!");

	//Assert
	EXPECT_EQ(retValue, 1);
}


TEST(MyDBTest, LoginTest1) {
	//Arrange
	MockDB mdb;                         //Instanz Mock-Klasse wird anstelle Instanz von Database-Klasse erstellt
	MyDataBase db(mdb);
	ON_CALL(mdb, login(_, _)).WillByDefault(Return(true));

	//Act
	int retValue = db.Init("SuperMax", "IchBinLost123!");

	//Assert
	EXPECT_EQ(retValue, 1);
}



//************NUTZER-TESTS************//

TEST(NutzerRegistrTest, NutzerRegistr) {
	//Arrange
	MockDB mdb;
	MyDataBase db(mdb);
	EXPECT_CALL(mdb, registr("Peter", "Hans", "HansPeterli"));

	//Act
	int retValue = db.Init1("Peter", "Hans", "18.06.1965", 185, 90, 'm', "abnehmen", "sitzend", "HansPeterli", "PeterCool65!");
	
	//Assert
	EXPECT_EQ(retValue, 0);
}

TEST(NutzerRegistrTest, NutzerRegistr1) {
	//Arrange
	MockDB mdb;
	MyDataBase db(mdb);
	ON_CALL(mdb, registr(_,_,_)).WillByDefault(Return(true));

	//Act
	int retValue = db.Init1("Peter", "Hans", "18.06.1965", 185, 90, 'm', "abnehmen", "sitzend", "HansPeterli", "PeterCool65!");

	//Assert
	EXPECT_EQ(retValue, 1);
}

/*TEST(NutzerExistiertTest, UserExists) {
	//Arrange
	MockDB mdb;
	MyDataBase db(mdb);
	ON_CALL(mdb, userExists(_)).WillByDefault(Return(true));

	//Act
	int retValue = db.Init2("HansWurschti");

	//Assert
	EXPECT_EQ(retValue, 1);

}*/
TEST(MyDataBase1Test, TestNutzerhinzufuegen) {
	nutzer* nu = new nutzer();
	nu->setUsername("Caillou");
	nu->setGeschlecht("männlich");
	nu->setGeburtstag("01.01.2000");
	nu->setPassword("IchBinSchonGroßUnd4!");

	/*myBase->addNutzer(*nu);
	nutzer* nu2 = myBase->findNutzerbyID(nu->getUsername());
	EXPECT_EQ(nu->getUsername().toString(), nu2->getUsername().toString());
	myBase->deleteNutzer(username);
*/
	//Arrange
	//ASSERT_STREQ("Caillou", " ");
	//Expect
	EXPECT_STREQ(" ", "Caillou"); //EXPECT_STREQ() und ASSERT_STREQ() = equal, testen beide die Qualität des Strings
}

/*TEST(MyDataBase1Test, CheckIfUsernameExists) {
	EXPECT_FALSE(myBase->checkUsernameExists(" "));
}*/

TEST(MyDataBase1Test, UpdateNutzerLastname) {
	string retValue = nutzer().getLastname();
	//EXPECT_EQ(retValue, 1);
}

/*TEST(MyDataBase1Test, TestFindNutzerbyID) {
	nutzer* nu1 = myBase->findNutzerByID(username);
	EXPECT_EQ(nu1->getUsername().toString(), username.toString());
}*/



//************KALORIEN-TESTS************//

TEST(Kalorien, NegativValues) {  //Dieser Test testet explizit den neg. Wert -2000, lässt den Test nicht "Failen" und bricht nicht ab. Test wird als "PASSED" angezeigt
	//Arrange                    //Es wird ein negativ Wert übergeben -> eigentlich FAILED und -2000 wird ausgegeben. 
	KalorienCalculator kl;       //Negativ-Werte werden somit in der Kalorien-Fkt. akzeptiert

	//Act
	int retValue = kl.calculateKalorien(-300, -85, "Frau");

	//Assert
	EXPECT_EQ(retValue, 1);

}

TEST(Kalorien, PositivValues) {             //Dieser Test testet postive Eingabewerte, in dem Fall explizit 2000. Test "PASSED" und gibt "JEIJ", sowie 2000 aus. 
	//Arrange                              //
	KalorienCalculator kl;

	//Act
	int retValue = kl.calculateKalorien(250, 65, "Frau");

	//Assert
	EXPECT_EQ(retValue, 1);
}

TEST(KalorienEmpfehlung, Frau) {
	//Arrange
	KalorienCalculator kl;

	//Act
	int retValue = kl.calculateKalorien(2000, 85, "Frau");

	//Assert
	EXPECT_EQ(retValue, 1);
	EXPECT_EQ(retValue, 0);               //bei diesem Assert wird der Test failen, da der return-Wert 1 ist und damit true

}

TEST(KalorienEmpfehlung, Mann) {
	//Arrange
	KalorienCalculator kl;

	//Act
	int retValue = kl.calculateKalorien(3000, 65, "männlich");

	//Assert
	EXPECT_EQ(retValue, 1);
	EXPECT_EQ(retValue, 0);              //Bei diesem Assert wird der Test failen, da der return-Wert 1 ist und damit true
}




//************WASSER-TESTS************//

TEST(Wasser, Empfehlung) {             //Dieser Test testet die Wasserempfehlung im Rahmen des Grundsatzes
	//Arrange
	WasserCalculator was;

	//Act
	int retValue = was.calculateWasserEmpfehlung(65, 1.85, 0);

	//Assert
	EXPECT_EQ(retValue, 1);
}

TEST(Wasser, Empfehlung1) {            //Dieser Test testet die Wasserempfehlung, in diesem Fall explizit mit höherer Wassereinnahme
	//Arrange
	WasserCalculator was;

	//Act
	int retValue = was.calculateWasserEmpfehlung(65, 1.85, 3500);

	//Assert
	EXPECT_EQ(retValue, 1);
}

TEST(Wasserberechnung, Empfehlung) {
	//Arrange
	WasserCalculator was;

	//Act
	int retValue = was.calculateWasser(1250, 500, 75);

	//Assert
	EXPECT_EQ(retValue, 1);
}

TEST(Wasserberechnung, EmpfehlungNegativ) {
	//Arrange
	WasserCalculator was;

	//Act
	int retValue = was.calculateWasser(-200, 1200, 86);

	//Assert
	EXPECT_EQ(retValue, 0);

}

//************STRING-TEST************//
// 
//MatchersTest - testet einen String, der im Programm bei "cout" ausgegeben wird -> z.B. cout von Wasserstatus "dehydriert" oder wie in diesem Fall eine Wasser-Challenge
TEST(MatchersTest, ChallengeTest) {
	string test_string("1-Tages Challenge: Trinke ein Glas mehr am Tag.");
	EXPECT_THAT(test_string, StartsWith("1-Tages Challenge:"));
	EXPECT_THAT(test_string, MatchesRegex(".*ein.*Glas.*"));
}