

# The C++ Programming Language, Fourth Edition

##  Bjarne Stroustrup

### Extended Table of Contents
In the book, the table of contents lists only the chapters, and each chapter stars with a mini table of contents.

- - -

Table of Contents


- - -
## Part I: Introductory Material

1	Notes to the Reader  

> 1.1	The Structure of This Book  
> > 1.1.1	Introduction  
> > 1.1.2	Basic Facilities  							
> > 1.1.3	Abstraction Mechanisms  							
> > 1.1.4	The Standard Library  
> > 1.1.5	Examples and References

> 1.2	The Design of C++  
> > 1.2.1	Programming Style  
> > 1.2.2	Type Checking  
> > 1.2.3	C Compatibility  
> > 1.2.4	Language, Libraries, and Systems  

> 1.3	Learning C++  
> > 1.3.1	Programming in C++  
> > 1.3.2	Suggestions for C++ Programmers  
> > 1.3.3	Suggestions for C Programmers  
> > 1.3.4	Suggestions for Java Programmers  

> 1.4	History  
> > 1.4.1	Timeline  		
> > 1.4.2	The Early Years  
> > 1.4.3	The 1998 Standard  
> > 1.4.4	The 2011 Standard  										
> > 1.4.5	What is C++ used for?  

> 1.5	Advice  

> 1.6	References  

2	A Tour of C++: The Basics (DRAFT)  

> 2.1	Introduction  	

> 2.2	The Basics	
> > 2.2.1	Hello, World!  
> > 2.2.2	Types, Variables, and Arithmetic  
> > 2.2.3	Constants  
> > 2.2.4	Tests and Loops  
> > 2.2.5	Pointers, Arrays, and Loops  

> 2.3	User-Defined Types
> > 2.3.1	Structures  
> > 2.3.2	Classes  
> > 2.3.3	Enumerations  

> 2.4	Modularity  
> > 2.4.1	Separate Compilation  
> > 2.4.2	Namespaces  
> > 2.4.3	Error Handling  											
> 2.5	Postscript  

> 2.6	Advice  

3	A Tour of C++: Abstraction Mechanisms (DRAFT)  

> 3.1	Introduction  

> 3.2	Classes  	
> > 3.2.1	Concrete Types 
> > 3.2.2	Abstract Types  
> > 3.2.3	Virtual Functions  
> > 3.2.4	Class Hierarchies  

> 3.3	Copy and Move  		
> > 3.3.1	Copying Containers  
> > 3.3.2	Moving Containers  
> > 3.3.3	Resource Management  
> > 3.3.4	Suppressing Operations  

> 3.4	Templates  	
> > 3.4.1	Parameterized Types  
> > 3.4.2	Function Templates  
> > 3.4.3	Function Objects  
> > 3.4.4	Variadic Templates  
> > 3.4.5	Aliases  

> 3.5	Advice  

4	A Tour of C++: Containers and Algorithms (DRAFT)  

> 4.1	Libraries  	
> > 4.1.1	Standard-Library Overview  
> > 4.1.2	The Standard-library Headers and Namespace  

> 4.2	Strings  																
> 4.3	Stream I/O   		
> > 4.3.1	Output  
> > 4.3.2	Input  
> > 4.3.3	I/O of User-Defined Types  

> 4.4	Containers  
> > 4.4.1	vector
> > 4.4.2	list
> > 4.4.3	map 													
> > 4.4.4	unordered_map  
> > 4.4.5	Container Overview  

> 4.5	Algorithms  	
> > 4.5.1	Use of Iterators  
> > 4.5.2	Iterator Types  
> > 4.5.3	Stream Iterators  
> > 4.5.4	Predicates  
> > 4.5.5	Algorithm Overview  
> > 4.5.6	Container Algorithms  

> 4.6	Advice  

5	A Tour of C++: Concurrency and Utilities (DRAFT)  

> 5.1	Introduction  

> 5.2	Resource Management  
> > 5.2.1	shared_ptr

> 5.3	Concurrency  		
> > 5.3.1	Tasks and threads  
> > 5.3.2	Passing Arguments  
> > 5.3.3	Returning Results  
> > 5.3.4	Sharing Data  
> > 5.3.5	Communicating Tasks  

> 5.4	Small Utility Components  	
> > 5.4.1	Time  
> > 5.4.2	Type Functions  
> > 5.4.3	tuple

> 5.5	Regular Expressions  														
> 5.6	Math  	
> > 5.6.1	Mathematical Functions and Algorithms  
> > 5.6.2	Complex Numbers  
> > 5.6.3	Random Numbers  
> > 5.6.4	Vector Arithmetic  
> > 5.6.5	Numeric Limits  

> 5.7	Advice  


- - -
## Part II: The basics

6	Types and Declarations  

> 6.1	The ISO C++ Standard  	
> > 6.1.1	Implementations  
> > 6.1.2	The Basic Source Character Set  

> 6.2	Types  		
> > 6.2.1	Fundamental Types  
> > 6.2.2	Booleans  
> > 6.2.3	Character Types  
> > 6.2.4	Integer Types 
> > 6.2.5	Floating-Point Types  
> > 6.2.6	Prefixes and Suffixes
> > 6.2.7	void 
> > 6.2.8	Sizes
> > 6.2.9	Alignment

> 6.3	Declarations  	
> > 6.3.1	The Structure of Declarations  
> > 6.3.2	Declaring Multiple Names  
> > 6.3.3	Names  
> > 6.3.4	Scope  
> > 6.3.5	Initialization  
> > 6.3.6	Deducing a Type: <b>decltype()</b>  

> 6.4	Objects and Values  	
> > 6.4.1	Lvalues and Rvalues  
> > 6.4.2	Lifetimes of Objects  		

> 6.5	Type Aliases  

> 6.6	Advice  

7	Pointers, Arrays, and References  

> 7.1	Introduction  

> 7.2	Pointers  	
> > 7.2.1	void*
> > 7.2.2	nullptr

> 7.3	Arrays  	
> > 7.3.1	Array Initializers  
> > 7.3.2	String Literals  

> 7.4	Pointers into Arrays  	
> > 7.4.1	Navigating Arrays  
> > 7.4.2	Multidimensional Arrays  
> > 7.4.3	Passing Arrays  

> 7.5	Pointers and const 

> 7.6	Pointers and Ownership 

> 7.7	References  	
> > 7.7.1	Lvalue References  
> > 7.7.2	Rvalue References  
> > 7.7.3	References to References  
> > 7.7.4	Pointers and References  

> 7.8	Advice  

8	Structures, Unions, and Enumerations  

> 8.1	Introduction  

> 8.2	Structures  	
> > 8.2.1	struct Layout  
> > 8.2.2	struct Names  
> > 8.2.3	Structures and Classes  
> > 8.2.4	Structures and Arrays  
> > 8.2.5	Type Equivalence  
> > 8.2.6	Plain Old Data  
> > 8.2.7	Fields  

> 8.3	Unions  	
> > 8.3.1	Unions and Classes  
> > 8.3.2	Anonymous union 

> 8.4	Enumerations  
> > 8.4.1	enum classes  
> > 8.4.2	Plain enums  
> > 8.4.3	Unnamed enums  

> 8.5	Advice 

9	Statements  

> 9.1	Introduction  

> 9.2	Statement Summary 

> 9.3	Declarations as Statements 

> 9.4	Selection Statements  		
> > 9.4.1	if Statements  
> > 9.4.2	switch Statements  
> > 9.4.3	Declarations in Conditions  

> 9.5	Iteration Statements  	
> > 9.5.1	Range-for Statements  
> > 9.5.2	for Statements  
> > 9.5.3	while Statements  
> > 9.5.4	do Statements  
> > 9.5.5	Loop Exit  

> 9.6	goto Statements 

> 9.7	Comments and Indentation 

> 9.8	Advice 

10	Expressions  

> 10.1	Introduction  

> 10.2	A Desk Calculator	
> > 10.2.1	The Parser  
> > 10.2.2	Input  
> > 10.2.3	Low-Level Input  
> > 10.2.4	Error Handling  
> > 10.2.5	The Driver  
> > 10.2.6	Headers  
> > 10.2.7	Command-Line Arguments  
> > 10.2.8	A Note on Style   

> 10.3	Operator Summary  	
> > 10.3.1	Results  
> > 10.3.2	Order of Evaluation  
> > 10.3.3	Operator Precedence  
> > 10.3.4	Temporary Objects  

> 10.4	Constant Expressions  	
> > 10.4.1	Symbolic Constants  
> > 10.4.2	consts in Constant Expressions  
> > 10.4.3	Literal Types  
> > 10.4.5	Address Constant Expressions  

> 10.5	Implicit Type Conversion  	
> > 10.5.1	Promotions  
> > 10.5.2	Conversions  
> > 10.5.3	Usual Arithmetic Conversions  

> 10.6	Advice  

11	Select Operations  

> 11.1	Etc. Operators  	
> > 11.1.1	Logical Operators  
> > 11.1.2	Bitwise Logical Operators  
> > 11.1.3	Conditional Expressions  
> > 11.1.4	Increment and Decrement  

> 11.2	Free Store  	
> > 11.2.1	Memory Management  
> > 11.2.2	Arrays  
> > 11.2.3	Getting Memory Space  
> > 11.2.4	Overloading new  	

> 11.3	Lists  	
> > 11.3.1	Implementation Model  
> > 11.3.2	Qualified Lists  
> > 11.3.3	Unqualified Lists  

> 11.4	Lambda Expressions  		
> > 11.4.1	Implementation Model  
> > 11.4.2	Alternatives to Lambdas  
> > 11.4.3	Capture  
> > 11.4.4	Call and Return  
> > 11.4.5	The Type of a Lambda  

> 11.5	Explicit Type Conversion  	
> > 11.5.1	Construction  
> > 11.5.2	Named Casts  
> > 11.5.3	C-Style Cast  
> > 11.5.4	Function-Style Cast  

> 11.6	Advice  

12	Functions  

> 12.1	Function Declarations  	
> > 12.1.1	Why Functions?  
> > 12.1.2	Parts of a Function Declaration  
> > 12.1.3	Function Definitions  
> > 12.1.4	Returning Values  
> > 12.1.5	inline Functions  
> > 12.1.6	constexpr Functions  
> > 12.1.7	[[noreturn]] Functions  
> > 12.1.8	Local Variables  

> 12.2	Argument Passing  	
> > 12.2.1	Reference Arguments  
> > 12.2.2	Array Arguments  
> > 12.2.3	List Arguments  
> > 12.2.4	Unspecified Number of Arguments  
> > 12.2.5	Default Arguments  

> 12.3	Overloaded Functions  	
> > 12.3.1	Automatic Overload Resolution  
> > 12.3.2	Overloading and Return Type  
> > 12.3.3	Overloading and Scope  
> > 12.3.4	Resolution for Multiple Arguments  
> > 12.3.5	Manual Overload Resolution  

> 12.4	Pre- and Postconditions

> 12.5	Pointer to Function 

> 12.6	Macros  		
> > 12.6.1	Conditional Compilation  
> > 12.6.2	Predefined Macros  
> > 12.6.3	Pragmas  

> 12.7	Advice  

13	Exception Handling  

> 13.1	Error Handling  
> > 13.1.1	Exceptions  
> > 13.1.2	Traditional Error Handling  
> > 13.1.3	Muddling Through  
> > 13.1.4	Alternative Views of Exceptions  
> > 13.1.5	When You Can't Use Exceptions  
> > 13.1.6	Hierarchical Error Handling  
> > 13.1.7	Exceptions and Efficiency  

> 13.2	Exception Guarantees  

> 13.3	Resource Management  	
> > 13.3.1	Finally  

> 13.4	Enforcing Invariants  

> 13.5	Throwing and Catching Exceptions  	
> > 13.5.1	Throwing Exceptions  
> > 13.5.2	Catching Exceptions  
> > 13.5.3	Exceptions and Threads  

> 13.6	A vector Implementation  
> > 13.6.1	A Simple vector
> > 13.6.2	Representing Memory Explicitly  
> > 13.6.3	Assignment  
> > 13.6.4	Changing Size  

> 13.7	Advice  

14	Namespaces  

> 14.1	Composition Problems  

> 14.2	Namespaces  

> > 14.2.1	Explicit Qualification  
> > 14.2.2	using-Declarations  
> > 14.2.3	using-Directives  
> > 14.2.4	Argument-Dependent Lookup  
> > 14.2.5	Namespaces Are Open  

> 14.3	Modularization and Interfaces  	
> > 14.3.1	Namespaces as Modules  
> > 14.3.2	Implementations  
> > 14.3.3	Interfaces and Implementations  

> 14.4	Composition Using Namespaces  	
> > 14.4.4	Composition and Selection  
> > 14.4.1	Convenience vs. Safety  
> > 14.4.2	Namespace Aliases  
> > 14.4.3	Namespace Composition  
> > 14.4.5	Namespaces and Overloading  
> > 14.4.6	Versioning  
> > 14.4.7	Nested Namespaces  
> > 14.4.8	Unnamed Namespaces  
> > 14.4.9	C Headers  

> 14.5	Advice  

15	Source Files and Programs  

> 15.1	Separate Compilation  

> 15.2	Linkage  	
> > 15.2.1	File-Local Names  
> > 15.2.2	Header Files  
> > 15.2.3	The One-Definition Rule  
> > 15.2.4	Standard-Library Headers  
> > 15.2.5	Linkage to Non-C++ Code  
> > 15.2.6	Linkage and Pointers to Functions  

> 15.3	Using Header Files  
> > 15.3.1	Single-Header Organization  
> > 15.3.2	Multiple-Header Organization  
> > 15.3.3	Include Guards  

> 15.4	Programs  	
> > 15.4.1	Initialization of Nonlocal Variables  
> > 15.4.2	Initialization and Concurrency  
> > 15.4.3	Program Termination  

> 15.5	Advice  


- - -
## Part III: Abstraction Mechanisms

16	Classes  

> 16.1	Introduction  

> 16.2	Class Basics  	
> > 16.2.1	Member Functions  
> > 16.2.2	Default Copying  
> > 16.2.3	Access Control  
> > 16.2.4	struct  
> > 16.2.5	Constructors  
> > 16.2.6	explicit Constructors  
> > 16.2.7	In-Class Initializers  
> > 16.2.8	In-Class Function Definitions  
> > 16.2.9	Mutability  
> > 16.2.10	Self-Reference  
> > 16.2.11	Member Access  
> > 16.2.12	[static] Members  
> > 16.2.13	Member Types  

> 16.3	Concrete Classes  	
> > 16.3.1	Member Functions  
> > 16.3.2	Helper Functions  
> > 16.3.3	Overloaded Operators  
> > 16.3.4	The Significance of Concrete Classes  		

> 16.4	Advice  

17	Construction, Cleanup, Copy, and Move  

> 17.1	Introduction  

> 17.2	Constructors and Destructors   
> > 17.2.1	Constructors and Invariants  
> > 17.2.2	Destructors and Resources  
> > 17.2.3	Base and Member Destructors  
> > 17.2.4	Calling Constructors and Destructors  
> > 17.2.5	virtual Destructors  

> 17.3	Class Object Initialization  	
> > 17.3.1	Initialization Without Constructors  
> > 17.3.2	Initialization Using Constructors  
> > 17.3.3	Default Constructors  
> > 17.3.4	Initializer-List Constructors  

> 17.4	Member and Base Initialization  	
> > 17.4.1	Member Initialization  
> > 17.4.2	Base Initializers  
> > 17.4.3	Delegating Constructors  
> > 17.4.4	In-Class Initializers  
> > 17.4.5	static Member Initialization  

> 17.5	Copy and Move  	
> > 17.5.1	Copy  
> > 17.5.2	Move  

> 17.6	Generating Default Operations  
> > 17.6.1	Explicit Defaults  
> > 17.6.2	Default Operations  
> > 17.6.3	Using Default Operations  
> > 17.6.4	deleted Functions  

> 17.7	Advice  

18	Operator Overloading  

> 18.1	Introduction  

> 18.2	Operator Functions  	
> > 18.2.1	Binary and Unary Operators  
> > 18.2.2	Predefined Meanings for Operators  
> > 18.2.3	Operators and User-Defined Types  
> > 18.2.4	Passing Objects  
> > 18.2.5	Operators in Namespaces  

> 18.3	A Complex Number Type  	
> > 18.3.1	Member and Nonmember Operators  
> > 18.3.2	Mixed-Mode Arithmetic  
> > 18.3.3	Conversions  
> > 18.3.4	Literals  
> > 18.3.5	Accessor Functions  
> > 18.3.6	Helper Functions  

> 18.4	Type Conversion  	
> > 18.4.1	Conversion Operators  
> > 18.4.2	explicit Conversion Operators  
> > 18.4.3	Ambiguities  

> 18.5	Advice  

19	Special Operators  

> 19.1	Introduction  

> 19.2	Special Operators  
> > 19.2.1	Subscripting  
> > 19.2.2	Function Call  
> > 19.2.3	Dereferencing  
> > 19.2.4	Increment and Decrement  
> > 19.2.5	Allocation and Deallocation  
> > 19.2.6	User-defined Literals  

> 19.3	A String Class  
> > 19.3.1	Essential Operations  
> > 19.3.2	Access to Characters  
> > 19.3.3	Representation  
> > 19.3.4	Member Functions  
> > 19.3.5	Helper Functions  
> > 19.3.6	Using Our String  

> 19.4	Friends  
> > 19.4.1	Finding Friends  
> > 19.4.2	Friends and Members  

> 19.5	Advice  

20	Derived Classes  

> 20.1	Introduction  

> 20.2	Derived Classes  
> > 20.2.1	Member Functions  
> > 20.2.2	Constructors and Destructors  

> 20.3	Class Hierarchies  	
> > 20.3.1	Type Fields  
> > 20.3.2	Virtual Functions  
> > 20.3.3	Explicit Qualification  
> > 20.3.4	Override Control  
> > 20.3.5	using Base Members  
> > 20.3.6	Return Type Relaxation  

> 20.4	Abstract Classes  

> 20.5	Access Control  	
> > 20.5.1	protected Members  
> > 20.5.2	Access to Base Classes  
> > 20.5.3	using-Declarations and Access Control  

> 20.6	Pointers to Members  	
> > 20.6.1	Pointers to Function Members  
> > 20.6.2	Pointers to Data Members  
> > 20.6.3	Base and Derived Members  

> 20.7	Advice  

21	Class Hierarchies  

> 21.1	Introduction  

> 21.2	Design of Class Hierarchies  	
> > 21.2.1	Implementation Inheritance  
> > 21.2.2	Interface Inheritance  
> > 21.2.3	Alternative Implementations  
> > 21.2.4	Localizing Object Creation  

> 21.3	Multiple Inheritance  	
> > 21.3.1	Multiple Interfaces  
> > 21.3.2	Multiple Implementation Classes  
> > 21.3.3	Ambiguity Resolution  
> > 21.3.4	Repeated Use of a Base Class  
> > 21.3.5	Virtual Base Classes  
> > 21.3.6	Replicated vs. Virtual Bases  

> 21.4	Advice  

22	Run-Time Type Information  


> 22.1	Introduction  
> 
> 	22.2	Class Hierarchy Navigation  
> 
> 		
> > 22.2.1	<b>dynamic_cast</b>  
> > 
> > 			
> > > 22.2.1.1	<b>dynamic_cast</b> to Reference  
> > > 
> > 
> > 		22.2.2	Multiple Inheritance  
> > 																																						
> > 		22.2.3	<b>dynamic_cast</b>  
> > 																																						
> > 		22.2.4	Recovering an Interface  
> > 
> > 		
> 
> 	22.3	Double Dispatch and Visitors  
> 
> 		
> > 22.3.1	Double Dispatch  
> > 
> > 		22.3.2	Visitors  
> > 
> > 		
> 
> 	22.4	Construction and Destruction  
> 																																						
> 	22.5	Type Identification  
> 
> 		
> > 22.5.1	Extended Type Information  
> > 
> > 		
> 
> 	22.6	Uses and Misuses of RTTI  
> 																																						
> 	22.7	Advice  
> 
> 	


23	Templates  


> 23.1	Introduction and Overview  
> 
> 	23.2	A Simple String Template  
> 
> 		
> > 23.2.1	Defining a Template  
> > 
> > 		23.2.2	Template Instantiation  
> > 
> > 		
> 
> 	23.3	Type Checking  
> 
> 		
> > 23.3.1	Type Equivalence  
> > 
> > 		23.3.2	Error Detection  
> > 
> > 		
> 
> 	23.4	Class Template Members  
> 
> 		
> > 23.4.1	Data Members  
> > 
> > 		23.4.2	Member Functions  
> > 																																						
> > 		23.4.3	Member Type Aliases  
> > 																																						
> > 		23.4.4	<b>static</b> Members  
> > 																																						
> > 		23.4.5	Member Types  
> > 																																						
> > 		23.4.6	Member Templates  
> > 
> > 			
> > > 23.4.6.1	Templates and Constructors  
> > > 
> > > 			23.4.6.2	Templates and <b>virtual</b>  
> > > 																																						
> > > 			23.4.6.3	Use of Nesting  
> > > 
> > > 			
> > 
> > 		23.4.7	Friends  
> > 
> > 		
> 
> 	23.5	Function Templates  
> 
> 		
> > 23.5.1	Function Template Arguments  
> > 
> > 		23.5.2	Function Template Argument Deduction  
> > 
> > 			
> > > 23.5.2.1	Reference Deduction  
> > > 
> > > 			
> > 
> > 		23.5.3	Function Template Overloading  
> > 
> > 			
> > > 23.5.3.1	Ambiguity Resolution  
> > > 
> > > 			23.5.3.2	Argument Substitution Failure  
> > > 																																						
> > > 			23.5.3.3	Overloading and Derivation  
> > > 																																						
> > > 			23.5.3.4	Overloading and Non-Deduced Parameters  
> > > 
> > > 			
> > 
> > 		
> 
> 	23.6	Template Aliases  
> 																																						
> 	23.7	Source Code Organization  
> 
> 		
> > 23.7.1	Linkage  
> > 
> > 		
> 
> 	23.8	Advice  
> 
> 	


24	Generic Programming  


> 24.1	Introduction  
> 
> 	24.2	Algorithms and Lifting  
> 																																						
> 	24.3	Concepts  
> 
> 		
> > 24.3.1	Discovering a Concept  
> > 
> > 		24.3.2	Concepts and Constraints  
> > 
> > 		
> 
> 	24.4	Making Concepts Concrete  
> 
> 		
> > 24.4.1	Axioms  
> > 
> > 		24.4.2	Multi-argument Concepts  
> > 																																						
> > 		24.4.3	Value Concepts  
> > 																																						
> > 		24.4.4	Constraints Checks  
> > 																																						
> > 		24.4.5	Template Definition Checking  
> > 
> > 		
> 
> 	24.5	Advice  
> 
> 	


25	Specialization  


> 25.1	Introduction  
> 
> 	25.2	Template Parameters and Arguments  
> 
> 		
> > 25.2.1	Types as Arguments  
> > 
> > 		25.2.2	Values as Arguments  
> > 																																						
> > 		25.2.3	Operations as Arguments  
> > 																																						
> > 		25.2.4	Templates as Arguments  
> > 																																						
> > 		25.2.5	Default Template Arguments  
> > 
> > 			
> > > 25.2.5.1	Default Function Template Arguments  
> > > 
> > > 			
> > 
> > 		
> 
> 	25.3	Specialization  
> 
> 		
> > 25.3.1	Interface Specialization  
> > 
> > 			
> > > 25.3.1.1	Implementation Specialization  
> > > 
> > > 			
> > 
> > 		25.3.2	The Primary Template  
> > 																																						
> > 		25.3.3	Order of Specialization  
> > 
> > 			
> > > 25.3.4.1	Specialization and Overloading  
> > > 
> > > 			25.3.4.2	Specialization That Is Not Overloading  
> > > 
> > > 			
> > 
> > 		25.3.4	Function Template Specialization  
> > 
> > 		
> 
> 	25.4	Advice  
> 
> 	


26	Instantiation  


> 26.1	Introduction  
> 
> 	26.2	Template Instantiation  
> 
> 		
> > 26.2.1	When Is Instantiation Needed?  
> > 
> > 		26.2.2	Manual Control of Instantiation  
> > 
> > 		
> 
> 	26.3	Name Binding  
> 
> 		
> > 26.3.1	Dependent Names  
> > 
> > 		26.3.2	Point-of-Definition Binding  
> > 																																						
> > 		26.3.3	Point-of-Instantiation Binding  
> > 																																						
> > 		26.3.4	Multiple Instantiation Points  
> > 																																						
> > 		26.3.5	Templates and Namespaces  
> > 																																						
> > 		26.3.6	Overaggressive ADL  
> > 																																						
> > 		26.3.7	Names from Base Classes  
> > 
> > 		
> 
> 	26.4	Advice  
> 
> 	


27	Templates and Hierarchies  


> 27.1	Introduction  
> 
> 	27.2	Parameterization and Hierarchy  
> 
> 		
> > 27.2.1	Generated Types  
> > 
> > 		27.2.2	Template Conversions  
> > 
> > 		
> 
> 	27.3	Hierarchies of Class Templates  
> 
> 		
> > 27.3.1	Templates as Interfaces  
> > 
> > 		
> 
> 	27.4	Template Parameters as Base Classes  
> 
> 		
> > 27.4.1	Composing Data Structures  
> > 
> > 		27.4.2	Linearizing Class Hierarchies  
> > 
> > 		
> 
> 	27.5	Advice  
> 
> 	


28	Metaprogramming  


> 28.1	Introduction  
> 
> 	28.2	Type Functions  
> 
> 		
> > 28.2.1	Type Aliases  
> > 
> > 			
> > > 28.2.1.1	When Not to Use an Alias  
> > > 
> > > 			
> > 
> > 		28.2.2	Type Predicates  
> > 																																						
> > 		28.2.3	Selecting a Function  
> > 																																						
> > 		28.2.4	Traits  
> > 
> > 		
> 
> 	28.3	Control Structures  
> 
> 		
> > 28.3.1	Selection  
> > 
> > 			
> > > 28.3.1.1	Selecting between Two Types  
> > > 
> > > 			28.3.1.2	Compile Time vs. Run Time  
> > > 																																						
> > > 			28.3.1.3	Selecting among Several Types  
> > > 
> > > 			
> > 
> > 		28.3.2	Iteration and Recursion  
> > 
> > 			
> > > 28.3.2.1	Recursion Using Classes  
> > > 
> > > 			
> > 
> > 		28.3.3	When to Use Metaprogramming  
> > 
> > 		
> 
> 	28.4	Conditional Definition: <b>Enable_if</b>  
> 
> 		
> > 28.4.1	Use of <b>Enable_if</b>  
> > 
> > 		28.4.2	Implementing <b>Enable_if</b>  
> > 																																						
> > 		28.4.3	<b>Enable_if</b> and Concepts  
> > 																																						
> > 		28.4.4	More <b>Enable_if</b> Examples  
> > 
> > 		
> 
> 	28.5	A Compile-Time List: <b>Tuple</b>  
> 
> 		
> > 28.5.1	A Simple Output Function  
> > 
> > 			
> > > 28.5.2.1	<b>const</b> Tuples  
> > > 
> > > 			
> > 
> > 		28.5.2	Element Access  
> > 																																						
> > 		28.5.3	<b>make_tuple</b>  
> > 
> > 		
> 
> 	28.6	Variadic Templates  
> 
> 		
> > 28.6.1	A Type-Safe <b>printf()</b>  
> > 
> > 		28.6.2	Technical Details  
> > 																																						
> > 		28.6.3	Forwarding  
> > 																																						
> > 		28.6.4	The Standard-Library <b>tuple</b>  
> > 
> > 		
> 
> 	28.7	SI Units Example  
> 
> 		
> > 28.7.1	<b>Unit</b>s  
> > 
> > 		28.7.2	<b>Quantity</b>s  
> > 																																						
> > 		28.7.3	<b>Unit</b> Literals  
> > 																																						
> > 		28.7.4	Utility Functions  
> > 
> > 		
> 
> 	28.8	Advice  
> 
> 	


29	A Matrix Design  


> 29.1	Introduction  
> 
> 		
> > 29.1.1	Basic <b>Matrix</b> Uses  
> > 
> > 		29.1.2	<b>Matrix</b> Requirements  
> > 
> > 		
> 
> 	29.2	A <b>Matrix</b> Template  
> 
> 		
> > 29.2.1	Construction and Assignment  
> > 
> > 		29.2.2	Subscripting and Slicing  
> > 
> > 		
> 
> 	29.3	<b>Matrix</b> Arithmetic Operations  
> 
> 		
> > 29.3.1	Scalar Operations  
> > 
> > 		29.3.2	Addition  
> > 																																						
> > 		29.3.3	Multiplication  
> > 
> > 		
> 
> 	29.4	<b>Matrix</b> Implementation  
> 
> 		
> > 29.4.1	<b>slice()</b>  
> > 
> > 		29.4.2	<b>Matrix</b> Slices  
> > 																																						
> > 		29.4.3	<b>Matrix_ref</b>  
> > 																																						
> > 		29.4.4	<b>Matrix</b> List Initialization  
> > 																																						
> > 		29.4.5	<b>Matrix</b> Access  
> > 																																						
> > 		29.4.6	Zero-Dimensional <b>Matrix</b>  
> > 
> > 		
> 
> 	29.5	Solving Linear Equations  
> 
> 		
> > 29.5.1	Classical Gaussian Elimination  
> > 
> > 		29.5.2	Pivoting  
> > 																																						
> > 		29.5.3	Testing  
> > 																																						
> > 		29.5.4	Fused Operations  
> > 
> > 	
> 
> 	29.6	Advice  
> 
> 	

- - -
## Part IV: The Standard Library
&#10;&#10;30	Standard-Library Overview  
&#10;	
> 30.1	Introduction  
> 
> 		
> > 30.1.1	Standard-Library Facilities  
> > 
> > 		30.1.2	Design Constraints  
> > 																																						
> > 		30.1.3	Description Style  
> > 
> > 		
> 
> 	30.2	Headers  
> 																																						
> 	30.3	Language Support  
> 
> 		
> > 30.3.1	<b>initializer_list</b> Support  
> > 
> > 		30.3.2	Range-<b>for</b> Support  
> > 
> > 		
> 
> 	30.4	Error Handling  
> 
> 		
> > 30.4.1	Exceptions  
> > 
> > 			
> > > 30.4.1.1	The Standard <b>exception</b> Hierarchy  
> > > 
> > > 			30.4.1.2	Exception Propagation  
> > > 																																						
> > > 			30.4.1.3	<b>terminate()</b>  
> > > 
> > > 			
> > 
> > 		30.4.2	Assertions  
> > 
> > 			
> > > 30.4.3.1	Error Codes  
> > > 
> > > 			30.4.3.2	Error Categories  
> > > 																																						
> > > 			30.4.3.3	Exception <b>system_error</b>  
> > > 																																						
> > > 			30.4.3.4	Potentially Portable Error Conditions  
> > > 																																						
> > > 			30.4.3.5	Mapping Error Codes  
> > > 																																						
> > > 			30.4.3.6	<b>errc</b> Error Codes  
> > > 																																						
> > > 			30.4.3.7	<b>future_errc</b> Error Codes  
> > > 																																						
> > > 			30.4.3.8	<b>io_errc</b> Error Codes  
> > > 
> > > 		
> > 
> > 		30.4.3	<b>system_error</b>  
> > 
> > 		
> 
> 	30.5	Advice  
> 
> 	


31	STL Containers  


> 31.1	Introduction  
> 
> 	31.2	Container Overview  
> 
> 		
> > 31.2.1	Container Representation  
> > 
> > 		31.2.2	Element Requirements  
> > 
> > 			
> > > 31.2.2.1	Comparisons  
> > > 
> > > 			31.2.2.2	Other Relational Operators  
> > > 
> > > 			
> > 
> > 		
> 
> 	31.3	Operations Overview  
> 
> 		
> > 31.3.1	Member Types  
> > 
> > 		31.3.2	Constructors, Destructor, and Assignments  
> > 																																						
> > 		31.3.3	Size and Capacity  
> > 																																						
> > 		31.3.4	Iterators  
> > 																																						
> > 		31.3.5	Element Access  
> > 																																						
> > 		31.3.6	Stack Operations  
> > 																																						
> > 		31.3.7	List Operations  
> > 																																						
> > 		31.3.8	Other Operations  
> > 
> > 		
> 
> 	31.4	Containers  
> 
> 		
> > 31.4.1	<b>vector</b>  
> > 
> > 			
> > > 31.4.1.1	<b>vector</b> and Growth  
> > > 
> > > 			31.4.1.2	<b>vector</b> and Nesting  
> > > 																																						
> > > 			31.4.1.3	<b>vector</b> and Arrays  
> > > 																																						
> > > 			31.4.1.4	<b>string</b>  
> > > 
> > > 			
> > 
> > 		31.4.2	Lists  
> > 
> > 			
> > > 31.4.3.1	Ordered Associative Containers  
> > > 
> > > 			31.4.3.2	Unordered Associative Containers  
> > > 																																						
> > > 			31.4.3.3	Constructing <b>unordered_map</b>s  
> > > 																																						
> > > 			31.4.3.4	Hash and Equality Functions  
> > > 																																						
> > > 			31.4.3.5	Load and Buckets  
> > > 
> > > 			
> > 
> > 		31.4.3	Associative Containers  
> > 
> > 		
> 
> 	31.5	Container Adaptors  
> 
> 		
> > 31.5.1	<b>stack</b>  
> > 
> > 		31.5.2	<b>queue</b>  
> > 																																						
> > 		31.5.3	<b>priority_queue</b>  
> > 
> > 		
> 
> 	31.6	Advice  
> 
> 	


32	STL Algorithms  


> 32.1	Introduction  
> 
> 	32.2	Algorithms  
> 
> 		
> > 32.2.1	Sequences  
> > 
> > 		
> 
> 	32.3	Policy Arguments  
> 
> 		
> > 32.3.1	Complexity  
> > 
> > 		
> 
> 	32.4	Nonmodifying Sequence Algorithms  
> 
> 		
> > 32.4.1	<b>for_each()</b>  
> > 
> > 		32.4.2	Sequence Predicates  
> > 																																						
> > 		32.4.3	<b>count()</b>  
> > 																																						
> > 		32.4.4	<b>find()</b>  
> > 																																						
> > 		32.4.5	<b>mismatch()</b>  
> > 																																						
> > 		32.4.6	<b>search()</b>  
> > 
> > 		
> 
> 	32.5	Modifying Sequence Algorithms  
> 
> 		
> > 32.5.1	<b>copy()</b>  
> > 
> > 		32.5.2	<b>unique()</b>  
> > 																																						
> > 		32.5.3	<b>replace()</b>  
> > 																																						
> > 		32.5.4	<b>partition()</b>  
> > 																																						
> > 		32.5.5	Permutations  
> > 																																						
> > 		32.5.6	<b>fill()</b>  
> > 																																						
> > 		32.5.7	<b>swap()</b>  
> > 
> > 		
> 
> 	32.6	Sorting and Searching  
> 
> 		
> > 32.6.1	Binary Search  
> > 
> > 		32.6.2	<b>merge()</b>  
> > 																																						
> > 		32.6.3	Set Algorithms  
> > 																																						
> > 		32.6.4	Heaps  
> > 																																						
> > 		32.6.5	<b>lexicographical_compare()</b>  
> > 
> > 		
> 
> 	32.7	Min and Max  
> 																																						
> 	32.8	Advice  
> 
> 	


33	STL Iterators  


> 33.1	Introduction  
> 
> 		
> > 33.1.1	Iterator Model  
> > 
> > 		33.1.2	Iterator Categories  
> > 																																						
> > 		33.1.3	Iterator Traits  
> > 																																						
> > 		33.1.4	Iterator Operations  
> > 
> > 		
> 
> 	33.2	Iterator Adaptors  
> 
> 		
> > 33.2.1	Reverse Iterator  
> > 
> > 		33.2.2	Insert Iterators  
> > 																																						
> > 		33.2.3	Move Iterator  
> > 
> > 		
> 
> 	33.3	Range Access Functions  
> 																																						
> 	33.4	Function Objects  
> 																																						
> 	33.5	Function Adaptors  
> 
> 		
> > 33.5.1	<b>bind()</b>  
> > 
> > 		33.5.2	<b>mem_fn()</b>  
> > 																																						
> > 		33.5.3	<b>function</b>  
> > 
> > 		
> 
> 	33.6	Advice  
> 
> 	


34	Memory and Resources  


> 34.1	Introduction  
> 
> 	34.2	``Almost Containers''  
> 
> 		
> > 34.2.1	<b>array</b>  
> > 
> > 		34.2.2	<b>bitset</b>  
> > 
> > 			
> > > 34.2.2.1	Constructors  
> > > 
> > > 			34.2.2.2	<b>bitset</b> Operations  
> > > 
> > > 			
> > 
> > 		34.2.3	<b>vector<bool></bool></b>  
> > 																																						
> > 		34.2.4	Tuples  
> > 
> > 			
> > > 34.2.4.1	<b>pair</b>  
> > > 
> > > 			34.2.4.2	<b>tuple</b>  
> > > 
> > > 			
> > 
> > 		
> 
> 	34.3	Resource Management Pointers  
> 
> 		
> > 34.3.1	<b>unique_ptr</b>  
> > 
> > 		34.3.2	<b>shared_ptr</b>  
> > 																																						
> > 		34.3.3	<b>weak_ptr</b>  
> > 
> > 		
> 
> 	34.4	Allocators  
> 
> 		
> > 34.4.1	The Default Allocator  
> > 
> > 		34.4.2	Allocator Traits  
> > 																																						
> > 		34.4.3	Pointer Traits  
> > 																																						
> > 		34.4.4	Scoped Allocators  
> > 
> > 		
> 
> 	34.5	The Garbage Collection Interface  
> 																																						
> 	34.6	Uninitialized Memory  
> 
> 		
> > 34.6.1	Temporary Buffers  
> > 
> > 		34.6.2	<b>raw_storage_iterator</b>  
> > 
> > 		
> 
> 	34.7	Advice  
> 
> 	


35	Utilities  


> 35.1	Introduction  
> 
> 	35.2	Time  
> 
> 		
> > 35.2.1	<b>duration</b>  
> > 
> > 		35.2.2	<b>time_point</b>  
> > 																																						
> > 		35.2.3	Clocks  
> > 																																						
> > 		35.2.4	Time Traits  
> > 
> > 		
> 
> 	35.3	Compile-Time Rational Arithmetic  
> 																																						
> 	35.4	Type Functions  
> 
> 		
> > 35.4.1	Type Traits  
> > 
> > 		35.4.2	Type Generators  
> > 
> > 		
> 
> 	35.5	Minor Utilities  
> 
> 		
> > 35.5.1	<b>forward()</b>  
> > 
> > 		35.5.2	<b>swap()</b>  
> > 																																						
> > 		35.5.3	Relational Operators  
> > 																																						
> > 		35.5.4	Comparing and Hashing <b>type_info</b>  
> > 
> > 		
> 
> 	35.6	Advice  
> 
> 	


36	Strings  


> 36.1	Introduction  
> 
> 	36.2	Character Classification  
> 
> 		
> > 36.2.1	Classification Functions  
> > 
> > 		36.2.2	Character Traits  
> > 
> > 		
> 
> 	36.3	Strings  
> 
> 		
> > 36.3.1	<b>string</b> vs. C-Style Strings  
> > 
> > 		36.3.2	Constructors  
> > 																																						
> > 		36.3.3	Fundamental Operations  
> > 																																						
> > 		36.3.4	String I/O  
> > 																																						
> > 		36.3.5	Numeric Conversions  
> > 																																						
> > 		36.3.6	STL-like Operations  
> > 																																						
> > 		36.3.7	The <b>find</b> Family  
> > 																																						
> > 		36.3.8	Substrings  
> > 
> > 		
> 
> 	36.4	Advice  
> 
> 	


37	Regular Expressions  


> 37.1	Regular Expressions  
> 
> 		
> > 37.1.1	Regular Expression Notation  
> > 
> > 		
> 
> 	37.2	<b>regex</b>  
> 
> 		
> > 37.2.1	Match Results  
> > 
> > 		37.2.2	Formatting  
> > 
> > 		
> 
> 	37.3	Regular Expression Functions  
> 
> 		
> > 37.3.1	<b>regex_match()</b>  
> > 
> > 		37.3.2	<b>regex_search()</b>  
> > 																																						
> > 		37.3.3	<b>regex_replace()</b>  
> > 
> > 		
> 
> 	37.4	Regular Expression Iterators  
> 
> 		
> > 37.4.1	<b>regex_iterator</b>  
> > 
> > 		37.4.2	<b>regex_token_iterator</b>  
> > 
> > 		
> 
> 	37.5	<b>regex_traits</b>  
> 																																						
> 	37.6	Advice  
> 
> 	


38	I/O Streams  


> 38.1	Introduction  
> 
> 	38.2	The I/O Stream Hierarchy  
> 
> 		
> > 38.2.1	File Streams  
> > 
> > 		38.2.2	String Streams  
> > 
> > 		
> 
> 	38.3	Error Handling  
> 																																						
> 	38.4	I/O Operations  
> 
> 		
> > 38.4.1	Input Operations  
> > 
> > 			
> > > 38.4.1.1	Formatted Input  
> > > 
> > > 			38.4.1.2	Unformatted Input  
> > > 
> > > 			
> > 
> > 		38.4.2	Output Operations  
> > 
> > 			
> > > 38.4.2.1	Virtual Output Functions  
> > > 
> > > 			
> > 
> > 		38.4.3	Manipulators  
> > 																																						
> > 		38.4.4	Stream State  
> > 																																						
> > 		38.4.5	Formatting  
> > 
> > 			
> > > 38.4.5.1	Formatting State  
> > > 
> > > 			38.4.5.2	Standard Manipulators  
> > > 																																						
> > > 			38.4.5.3	User-Defined Manipulators  
> > > 
> > > 			
> > 
> > 		
> 
> 	38.5	Stream Iterators  
> 																																						
> 	38.6	Buffering  
> 
> 		
> > 38.6.1	Output Streams and Buffers  
> > 
> > 		38.6.2	Input Streams and Buffers  
> > 																																						
> > 		38.6.3	Buffer Iterators  
> > 
> > 			
> > > 38.6.3.1	<b>istreambuf_iterator</b>  
> > > 
> > > 			38.6.3.2	<b>ostreambuf_iterator</b>  
> > > 
> > > 		
> > 
> > 	
> 
> 	38.7	Advice  
> 
> 	


39	Locales  


> 39.1	Handling Cultural Differences  
> 
> 	39.2	Class <b>locale</b>  
> 
> 		
> > 39.2.1	Named <b>locale</b>s  
> > 
> > 			
> > > 39.2.1.1	Constructing New <b>locale</b>s  
> > > 
> > > 			
> > 
> > 		39.2.2	Comparing <b>string</b>s  
> > 
> > 		
> 
> 	39.3	Class <b>facet</b>  
> 
> 		
> > 39.3.1	Accessing <b>locale</b>  
> > 
> > 		39.3.2	A Simple User-Defined <b>facet</b>  
> > 																																						
> > 		39.3.3	Uses of <b>facet</b>s  
> > 
> > 		
> 
> 	39.4	Standard <b>facet</b>s  
> 
> 		
> > 39.4.1	<b>string</b> Comparison  
> > 
> > 			
> > > 39.4.1.1	Named <b>collate</b>  
> > > 
> > > 			
> > 
> > 		39.4.2	Numeric Formatting  
> > 
> > 			
> > > 39.4.2.1	Numeric Punctuation  
> > > 
> > > 			39.4.2.2	Numeric Output  
> > > 																																						
> > > 			39.4.2.3	Numeric Input  
> > > 
> > > 			
> > 
> > 		39.4.3	Money Formatting  
> > 
> > 			
> > > 39.4.3.1	Money Punctuation  
> > > 
> > > 			39.4.3.2	Money Output  
> > > 																																						
> > > 			39.4.3.3	Money Input  
> > > 
> > > 			
> > 
> > 		39.4.4	Date and Time Formatting  
> > 
> > 			
> > > 39.4.4.1	<b>time_put</b>  
> > > 
> > > 			39.4.4.2	<b>time_get</b>  
> > > 
> > > 			
> > 
> > 		39.4.5	Character Classification  
> > 																																						
> > 		39.4.6	Character Code Conversion  
> > 																																						
> > 		39.4.7	Messages  
> > 
> > 			
> > > 39.4.7.1	Using Messages from Other <b>facet</b>s  
> > > 
> > > 			
> > 
> > 		
> 
> 	39.5	Convenience Interfaces  
> 
> 		
> > 39.5.1	Character Classification  
> > 
> > 		39.5.2	Character Conversions  
> > 																																						
> > 		39.5.3	String Conversions  
> > 																																						
> > 		39.5.4	Buffer Conversions  
> > 
> > 		
> 
> 	39.6	Advice  
> 
> 	


40	Numerics  


> 40.1	Introduction  
> 
> 	40.2	Numerical Limits  
> 
> 		
> > 40.2.1	Limit Macros  
> > 
> > 		
> 
> 	40.3	Standard Mathematical Functions  
> 																																						
> 	40.4	<b>complex</b> Numbers  
> 																																						
> 	40.5	A Numerical Array: <b>valarray</b>  
> 
> 		
> > 40.5.1	Constructors and Assignments  
> > 
> > 		40.5.2	Subscripting  
> > 																																						
> > 		40.5.3	Operations  
> > 																																						
> > 		40.5.4	Slices  
> > 																																						
> > 		40.5.5	<b>slice_array</b>  
> > 																																						
> > 		40.5.6	Generalized Slices  
> > 
> > 		
> 
> 	40.6	Generalized Numerical Algorithms  
> 
> 		
> > 40.6.1	<b>accumulate()</b>  
> > 
> > 		40.6.2	<b>inner_product()</b>  
> > 																																						
> > 		40.6.3	<b>adjacent_difference()</b>  
> > 																																						
> > 		40.6.4	<b>iota()</b>  
> > 
> > 		
> 
> 	40.7	Random Numbers  
> 
> 		
> > 40.7.1	Engines  
> > 
> > 		40.7.2	Random Device  
> > 																																						
> > 		40.7.3	Distributions  
> > 																																						
> > 		40.7.4	C-Style Random Numbers  
> > 
> > 		
> 
> 	40.8	Advice  
> 
> 	


41	Concurrency  


> 41.1	Introduction  
> 
> 	41.2	Memory Model  
> 
> 		
> > 41.2.1	Memory Location  
> > 
> > 		41.2.2	Instruction Reordering  
> > 																																						
> > 		41.2.3	Memory Order  
> > 																																						
> > 		41.2.4	Data Races  
> > 
> > 		
> 
> 	41.3	Atomics  
> 
> 		
> > 41.3.1	<b>atomic</b> Types  
> > 
> > 			
> > > 41.3.2.1	<b>atomic</b> Flags  
> > > 
> > > 			41.3.2.2	Fences  
> > > 
> > > 			
> > 
> > 		41.3.2	Flags and Fences  
> > 
> > 		
> 
> 	41.4	<b>volatile</b>  
> 																																						
> 	41.5	Advice  
> 
> 	


42	Threads and Tasks  


> 42.1	Introduction  
> 
> 	42.2	Threads  
> 
> 		
> > 42.2.1	Identity  
> > 
> > 		42.2.2	Construction  
> > 																																						
> > 		42.2.3	Destruction  
> > 																																						
> > 		42.2.4	<b>join()</b>  
> > 																																						
> > 		42.2.5	<b>detach()</b>  
> > 																																						
> > 		42.2.6	Namespace <b>this_thread</b>  
> > 																																						
> > 		42.2.7	Killing a <b>thread</b>  
> > 																																						
> > 		42.2.8	<b>thread_local</b> Data  
> > 
> > 		
> 
> 	42.3	Avoiding Data Races  
> 
> 		
> > 42.3.1	Mutexes  
> > 
> > 			
> > > 42.3.1.1	<b>recursive_mutex</b>  
> > > 
> > > 			42.3.1.2	<b>mutex</b> Errors  
> > > 																																						
> > > 			42.3.1.3	<b>recursive_timed_mutex</b>  
> > > 																																						
> > > 			42.3.1.4	<b>unique_lock</b>  
> > > 
> > > 			
> > 
> > 		42.3.2	Multiple Locks  
> > 																																						
> > 		42.3.3	<b>call_once()</b>  
> > 																																						
> > 		42.3.4	Condition Variables  
> > 
> > 			
> > > 42.3.4.1	<b>condition_variable_any</b>  
> > > 
> > > 			
> > 
> > 		
> 
> 	42.4	Task-Based Concurrency  
> 
> 		
> > 42.4.1	<b>promise</b>  
> > 
> > 		42.4.2	<b>promise</b>  
> > 																																						
> > 		42.4.3	<b>packaged_task</b>  
> > 																																						
> > 		42.4.4	<b>future</b>  
> > 																																						
> > 		42.4.5	<b>shared_future</b>  
> > 																																						
> > 		42.4.6	<b>async()</b>  
> > 																																						
> > 		42.4.7	A Parallel <b>find()</b> Example  
> > 
> > 		
> 
> 	42.5	Advice  
> 
> 	


43	The C Standard Library  


> 43.1	Introduction  
> 
> 	43.2	Files  
> 																																						
> 	43.3	The <b>printf()</b> Family  
> 																																						
> 	43.4	C-Style Strings  
> 																																						
> 	43.5	Memory  
> 																																						
> 	43.6	Date and Time  
> 																																						
> 	43.7	Etc.  
> 																																						
> 	43.8	Advice  
> 
> 	


44	Compatibility  


> 44.1	Introduction  
> 
> 		
> > 44.2.1	Language Features  
> > 
> > 		44.2.2	Standard_Library Components  
> > 																																						
> > 		44.2.3	Deprecated Features  
> > 																																						
> > 		44.2.4	Coping with Older C++ Implementations  
> > 
> > 		
> 
> 	44.2	C++11 Extensions  
> 																																						
> 	44.3	C/C++ Compatibility  
> 
> 		
> > 44.3.1	C and C++ Are Siblings  
> > 
> > 		44.3.2	``Silent'' Differences  
> > 																																						
> > 		44.3.3	C Code That Is Not C++  
> > 
> > 			
> > > 44.3.3.1	``Classic C'' Problems  
> > > 
> > > 			44.3.3.2	C Features Not Adopted by C++  
> > > 
> > > 			
> > 
> > 		44.3.4	C++ Code That Is Not C  
> > 
> > 		
> 
> 	44.4	Advice  
> 
> 	

- - -
## The Index
&#10;&#10;I	Index  
&#10;&#10;&#10;&#10;