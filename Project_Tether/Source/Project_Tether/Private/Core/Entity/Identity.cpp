/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#include "Public/Core/Entity/Identity.h"
#include "GameFramework/Actor.h"

UIdentity::UIdentity()
{
}

bool UIdentity::IsAncestorOf(UIdentity * decendant)
{
	UIdentity* _parent = decendant->parent;
	while (_parent != nullptr)
	{
		if (_parent == this)
		{
			return true;
		}

		_parent = _parent->parent;
	}
	return false;
}

bool UIdentity::IsDecendantOf(UIdentity * ancestor)
{
	UIdentity* _parent = this->parent;
	while (_parent != nullptr)
	{
		if (_parent == ancestor)
		{
			return true;
		}

		_parent = _parent->parent;
	}
	return false;
}
