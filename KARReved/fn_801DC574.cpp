//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801920EC.hpp"



void fn_801DC574(PPC::Runtime::GCContext* context)
{
/*801DC574 001D9374*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801DC578 001D9378*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DC57C 001D937C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC580 001D9380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801DC584 001D9384*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801DC588 001D9388*/ PPC::Runtime::ASM::beq(.L_801DC590);
/*801DC58C 001D938C*/ PPC::Runtime::ASM::bl(fn_801920EC);
RUNTIME_PPC_JUMP_LABEL(.L_801DC590, 0x801DC590) //this is a jump label
/*801DC590 001D9390*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC594 001D9394*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DC598 001D9398*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801DC59C 001D939C*/ PPC::Runtime::ASM::blr();
}