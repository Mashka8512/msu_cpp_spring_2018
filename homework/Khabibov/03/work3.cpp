class tool
{
protected:
	int durability;
public:
	tool()
	{
		durability = 100;
	}
	tool(int d)
	{
		durability = 0;
	}
};

class sword : public tool
{
private:
	int someField;
public:
	sword()
	{
		durability = 100;
		someField = 1;
	}
};

class shovel : public tool
{
private:
	int someField;
public:
	shovel()
	{
		durability = 100;
		someField = 1;
	}
};

class bow : public tool
{
private:
	int someField;
	public:
bow()
	{
		durability = 100;
		someField = 1;
	}
};

class torso
{
protected:
	int durability;
public:
	torso()
	{
		durability = 100;
	}
	torso(int d)
	{
		durability = 0;
	}
};

class armor : public torso
{
private:
	int someField;
public:
	armor()
	{
		durability = 100;
		someField = 1;
	}
};

class hauberk : public torso
{
private:
	int someField;
public:
	hauberk()
	{
		durability = 100;
		someField = 1;
	}
};

class shirt : public torso
{
private:
	int someField;
	public:
	shirt()
	{
		durability = 100;
		someField = 1;
	}
};

class legs
{
protected:
	int durability;
public:
	legs()
	{
		durability = 100;
	}
	legs(int d)
	{
		durability = 0;
	}
};

class leggins : public legs
{
private:
	int someField;
public:
	leggins()
	{
		durability = 100;
		someField = 1;
	}
};

class pants : public legs
{
private:
	int someField;
public:
	pants()
	{
		durability = 100;
		someField = 1;
	}
};

class man
{
private:
	int hp;
public:
	tool inHands;
	torso onChest;
	legs onLegs;
	man()
	{
		hp = 100;
		inHands = tool(0);
		onChest = torso(0);
		onLegs = legs(0);
	};
	void pickTool(tool a)
	{
		inHands = a;
	};

	void pickArmor(torso a)
	{
		onChest = a;
	};
	void pickLeggins(legs a)
	{
		onLegs = a;
	};
	void breakTool()
	{
		inHands = tool(0);
	};

	void breakArmor()
	{
		onChest = torso(0);
	};
	void breakLeggins()
	{
		onLegs = legs(0);
	};
};

class knight : public man
{
private:
	int someField;
public:
	knight()
	{
		someField = 1;
		inHands = sword();
		onChest = armor();
		onLegs = leggins();
	}
};

class farmer : public man
{
private:
	int someField;
public:
	farmer()
	{
		someField = 1;
		inHands = shovel();
		onChest = shirt();
		onLegs = pants();
	}
};

class archer : public man
{
private:
	int someField;
public:
	archer()
	{
		someField = 1;
		inHands = bow();
		onChest = hauberk();
		onLegs = pants();
	}
};

class animal
{
private:
	int hp;
	
public:
	animal()
	{
		hp = 100;
	}
};

class cow: public animal
{
private:
	int someField;
public:
	cow()
	{
		someField = 1;
	}
};

class pig: public animal
{
private:
	int someField;
public:
	pig()
	{
		someField = 1;
	}
};

int main()
{
	return 0;
}
