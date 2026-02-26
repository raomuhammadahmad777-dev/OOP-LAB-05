#include<iostream>
using namespace std;

class Restaurant{
	string rest_name;
	
	public:
		Restaurant(string rest_name)
		{
			this->rest_name = rest_name;
		}
		
		string get_rest_name()
		{
			return rest_name;
		}
		
		void rest_display(string food)
		{
			cout<<rest_name <<" is making "<<food<<endl;
		}
};

class Customer{
	string cust_name;

	public:
		Customer(string name)
		{
			cust_name = name;
		}
		
		void placeOrder(Restaurant& r)
		{
			cout<<"Order Placed at "<<r.get_rest_name()<<endl;
		}
		
		string get_cust_name()
		{
			return cust_name;
		}
};

class Order{
	int id;
	Customer* c;
	Restaurant* r;
	string food_item;
	public:
		Order(int id, Customer* c, Restaurant* r, string food_item)
		{
			this->id = id;
			this->c = c;
			this->r = r;
			this->food_item = food_item;
		}
		
		void print_details()
		{			
			cout<<"Order #"<<id<<": "<<food_item<<" for "<<c->get_cust_name()<<" from "<<r->get_rest_name()<<endl;
		}
};

int main()
{
	Customer c1("Ahmad");
	Restaurant r1("Pizza Hut");
	
	c1.placeOrder(r1);
	r1.rest_display("Burgers");
	
	Order o1(1001, &c1, &r1, "Burgers");
	
	o1.print_details();
}
