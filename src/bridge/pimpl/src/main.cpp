#include <cassert>
#include "pimpl.h"

//http://visualstudiomagazine.com/articles/2012/11/29/the-pimpl-idiom-in-c-plus-plus.aspx

//pros: 
//hide implementation from the header (encapsulation)
//no client recompilation is needed if the private implementation changes

//It's hard to implement because the more API functions the public class has, the more delegation points to stuff.
//Response: This isn't necessarily true: my two queue implementations are passive structs with no behavior. I didn't delegate calls to my_queue into calls to queue_impl. I used queue_impl fields as if they always belonged to my_queue.
//
//There is slower function call turnaround, since the public class becomes a proxy of its nested implementation.
//Response: Again, this still assumes that the internal implementation is a standalone class and my_queue a mere go-between. It wasn't my case, so I disagree.
//
//Uneasy inheritance. If you wanted to subclass the queue, which class should you depart from? my_queue or queue_impl? Perhaps both?
//Response: Subclassing is indeed difficult, but certainly not impossible. Check Listing 3: I substituted queue_impl and relinked the code based. I admittedly sealed the issue at compile time, without substituting inheritance. Inheritance would have allowed me instantiate indistinctly the superclass or its subclass. I could keep coexistent queue_impl's, using patterns like Strategy, Abstract Factory or Decorator at runtime, as opposed to compile time; I'd choose the one that fits best.
//
//There's no room for generic programming. For instance, my_queue only works with standard strings. If I were to make a generic queue no matter the type of its elements, it wouldn't be possible to keep the definition hidden.
//Response: This is a known issue with generic programming in C++, although it can be overcome as well. I'll demonstrate in my next article.

int main()
{
	{
		base b;
		assert(b.get_n()==0);
	}
	return 0;
}
