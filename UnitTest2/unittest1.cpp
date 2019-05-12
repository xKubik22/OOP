#include "stdafx.h"
#include "CppUnitTest.h"
#include "Plane.h"
#include "Train.h"
#include "Ship.h"
#include "Container_constr.cpp"
#include "ContainerIN.cpp"
#include "ContainerOUT.cpp"
#include "Transport.h"
#include "TransportIN.cpp"
#include "TrainIN.cpp"
#include "PlainIN.cpp"
#include "ShipIN.cpp"
#include "TransportOUT.cpp"
#include "PlaneOUT.cpp"
#include "TrainOUT.cpp"
#include "ShipOUT.cpp"
#include "Container.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest2
{
	TEST_CLASS(TestOut)
	{
	public:
		TEST_METHOD(PlaneOut_test)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport* test = transport::In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			test->Out(ofst);
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\pln.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(TrainOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport* test = transport::In(ifst);
			test = transport::In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			test->Out(ofst);
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\trn.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(ShipOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport* test = transport::In(ifst);
			test = transport::In(ifst);
			test = transport::In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			test->Out(ofst);
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\shp.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(TransportOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport* test = transport::In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			test->OutCommon(ofst);
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\trsp.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(ContainerOut)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			container test;
			test.In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			test.Out(ofst);
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\cont.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
		TEST_METHOD(Onlyplane)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			container test;
			test.In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			test.Onlyplane(ofst);
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\onpln.txt");
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}

			Assert::AreEqual(exp_str, test_str);
		}
	};
	TEST_CLASS(Transpfunct)
	{
	public:
		TEST_METHOD(timetest)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport *test = transport::In(ifst);
			test->Time();
			double testTime = 0.75;
			Assert::AreEqual(testTime, test->Time());
		}
		TEST_METHOD(compare)
		{
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport *test = transport::In(ifst);
			transport *test2 = transport::In(ifst);
			bool compar = false;
			Assert::AreEqual(compar, test->Compare(*test2));
		}
	};
	TEST_CLASS(Containerfunct)
	{
	public:
		TEST_METHOD(sortfunct)
		{
			container c;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			c.In(ifst);
			ofstream ofst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			ifstream ifstr("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\sort.txt");
			c.Sort();
			c.Out(ofst);
			ifstream ifst2("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\fileout.txt");
			string test_str;
			string s;
			while (getline(ifstr, s))
			{
				test_str += s;
			}
			string exp_str;
			while (getline(ifst2, s))
			{
				exp_str += s;
			}
			Assert::AreEqual(exp_str, test_str);
		}
	};
	TEST_CLASS(FunctIn)
	{
	public:
		TEST_METHOD(transportIN_test)
		{
			int dist_test = 20;
			int cap_test = 30;
			int speed_test = 40;
			int distAB_test = 30;
			float mass_test = 20.0;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			transport *test = transport::In(ifst);
			Assert::AreEqual(distAB_test, test->Get_distAB());
			Assert::AreEqual(speed_test, test->Get_speed());
			Assert::AreEqual(mass_test, test->Get_mass());
			Assert::AreEqual(to_string(cap_test) + to_string(dist_test), test->Get_all());

		}
		TEST_METHOD(planein_test)
		{
			int dist_test = 20;
			int cap_test = 30;
			int key;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			ifst >> key;
			plane test;
			test.Indata(ifst);
			Assert::AreEqual(to_string(cap_test) + to_string(dist_test), test.Get_all());

		}
		TEST_METHOD(trainin_test)
		{
			int quant_test = 10;
			int key;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\trnin.txt");
			ifst >> key;
			train test;
			test.Indata(ifst);
			Assert::AreEqual(to_string(quant_test), test.Get_all());

		}
		TEST_METHOD(shipin_test)
		{
			enum type{Lainer, Tanker, Tug};
			type typeship_test = Lainer;
			int water_test = 5;
			int key;
			ship test;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\shpin.txt");

			ifst >> key;
			test.Indata(ifst);
			Assert::AreEqual(to_string(typeship_test) + to_string(water_test), test.Get_all());

		}
		TEST_METHOD(containerin_test)
		{
			int count_test = 3;
			container test;
			ifstream ifst("C:\\Users\\Кирилл\\source\\repos\\LB1--class\\UnitTest2\\filein.txt");
			test.In(ifst);
			Assert::AreEqual(count_test, test.Get_count());
		}

	};
}