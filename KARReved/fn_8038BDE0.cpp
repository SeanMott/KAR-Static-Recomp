//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038BDE0(PPC::Runtime::GCContext* context)
{
/*8038BDE0 00388BE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8038BDE4 00388BE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038BDE8 00388BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038BDEC 00388BEC*/ PPC::Runtime::ASM::bl(fn_DVDClose);
/*8038BDF0 00388BF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038BDF4 00388BF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038BDF8 00388BF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8038BDFC 00388BFC*/ PPC::Runtime::ASM::blr();
}