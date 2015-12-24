#pragma once
#include "PDB.h"

#include <string>

class UserDataFieldDefinitionBase
{
	public:
		virtual
		void
		VisitBaseType(
			const SYMBOL* Symbol
			)
		{
		
		}

		virtual
		void
		VisitPointerTypeBegin(
			const SYMBOL* Symbol
		)
		{

		}

		virtual
		void
		VisitPointerTypeEnd(
			const SYMBOL* Symbol
			)
		{

		}

		virtual
		void
		VisitArrayTypeBegin(
			const SYMBOL* Symbol
		)
		{

		}

		virtual
		void
		VisitArrayTypeEnd(
			const SYMBOL* Symbol
			)
		{

		}

		virtual
		void
		VisitFunctionTypeBegin(
			const SYMBOL* Symbol
		)
		{

		}

		virtual
		void
		VisitFunctionTypeEnd(
			const SYMBOL* Symbol
			)
		{

		}

		virtual
		void
		SetMemberName(
			CONST CHAR* MemberName
		)
		{

		}

		virtual
		std::string
		GetPrintableDefinition() const
		{
			return std::string();
		}

		virtual
		void
		SetSettings(
			void* MemberDefinitionSettings
			)
		{

		}

		virtual
		void*
		GetSettings()
		{
			return nullptr;
		}
};

