//Eager Initialization
public class Singleton {
	private static Singleton instance = new Singleton(); //eagerness
	private Singleton() {
		//init
	}
	
	public static Singleton getInstance() {
		return instance;
	}
}

//lazy one
public class Singleton {
	private static Singleton instance;
	private Singleton() {
		//init
	}
	
	public static Singleton getInstance() {
		if(instance == null) { //laziness
			instance = new Singleton();
		}
		return instance;
	}
}

//Thread safe Lazy initialization 
public class Singleton {
	private static Singleton instance;
	private Singleton() {
		//init
	}
	
	public static synchronized Singleton getInstance() { //thread safety
		if(instance == null) {
			instance = new Singleton();
		}
		return instance;
	}
}

//best and laziest by using a enum
public enum Singleton {
    INSTANCE;
}

//Double checked locking 
public class Singleton {
	private volatile static Singleton instance;
	private Singleton() {
		//init
	}
	
	public static Singleton getInstance() {
		if(instance == null) {
			synchronized(this) { //only lock the FIRST time
				if(instance == null) { //The "double" check
					instance = new Singleton();
				}
			}
		}
		return instance;
	}
}