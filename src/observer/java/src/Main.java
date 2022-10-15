package src;

import java.util.Observable;
import java.util.Observer;

/*class Observable
{
	void addObserver(Observer o);
	protected void clearChanged();
	int countObservers();
	void deleteObserver(Observer o);
	void deleteObservers();
	boolean hasChanged();
	void notifyObservers();
	void notifyObservers(Object arg);
	protected void setChanged();
}*/

class Base_00 extends Observable
{
	public void f()
	{
		setChanged();
                notifyObservers("msg");
	}
}

class Base_01 implements Observer
{
	@Override
	public void update(Observable obj, Object arg)
	{
		if(arg instanceof String)
		{
			String str=(String) arg;
			System.out.println(arg);
		}
	}
}

public class Main
{
	public static void main(String[] args)
	{
		Base_00 b_00=new Base_00();
		Base_01 b_01=new Base_01();

		b_00.addObserver(b_01);
		b_00.f();
	}
}
