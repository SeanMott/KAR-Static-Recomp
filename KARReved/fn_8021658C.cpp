//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_8021658C(PPC::Runtime::GCContext* context)
{
/*8021658C 0021338C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216590 00213390*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216594 00213394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216598 00213398*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*8021659C 0021339C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802165A0 002133A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802165A4 002133A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802165A8 002133A8*/ PPC::Runtime::ASM::blr();
}