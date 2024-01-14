# Difference between  ->, . , :: .

1. -> for accessing object member variables and methods via pointer to object

Foo *foo = new Foo();
foo->member_var = 10;
foo->member_func();

2. . for accessing object member variables and methods via object instance

Foo foo;
foo.member_var = 10;
foo.member_func();

3. :: for accessing static variables and methods of a class/struct or namespace. 
It can also be used to access variables and functions from another scope (actually class, struct, namespace are scopes in that case)

int some_val = Foo::static_var;
Foo::static_method();
int max_int = std::numeric_limits<int>::max();

## Second Level Heading

Paragraph.

- bullet
+ other bullet
* another bullet
    * child bullet

1. ordered
2. next ordered

### Third Level Heading

Some *italic* and **bold** text and `inline code`.

An empty line starts a new paragraph.

Use two spaces at the end  
to force a line break.

A horizontal ruler follows:

---

Add links inline like [this link to the Qt homepage](https://www.qt.io),
or with a reference like [this other link to the Qt homepage][1].

    Add code blocks with
    four spaces at the front.

> A blockquote
> starts with >
>
> and has the same paragraph rules as normal text.

First Level Heading in Alternate Style
======================================

Paragraph.

Second Level Heading in Alternate Style
---------------------------------------

Paragraph.

[1]: https://www.qt.io
