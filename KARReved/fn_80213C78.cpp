//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205884.hpp"



void fn_80213C78(PPC::Runtime::GCContext* context)
{
/*80213C78 00210A78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80213C7C 00210A7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80213C80 00210A80*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80213C84 00210A84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213C88 00210A88*/ PPC::Runtime::ASM::bl(fn_80205884);
/*80213C8C 00210A8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213C90 00210A90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80213C94 00210A94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80213C98 00210A98*/ PPC::Runtime::ASM::blr();
}