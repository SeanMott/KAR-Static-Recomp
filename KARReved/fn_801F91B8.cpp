//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F91F0.hpp"



void fn_801F91B8(PPC::Runtime::GCContext* context)
{
/*801F91B8 001F5FB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F91BC 001F5FBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F91C0 001F5FC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F91C4 001F5FC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r3));
/*801F91C8 001F5FC8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801F91CC 001F5FCC*/ PPC::Runtime::ASM::bne(.L_801F91DC);
/*801F91D0 001F5FD0*/ PPC::Runtime::ASM::bl(fn_801F91F0);
/*801F91D4 001F5FD4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801F91D8 001F5FD8*/ PPC::Runtime::ASM::b(.L_801F91E0);
RUNTIME_PPC_JUMP_LABEL(.L_801F91DC, 0x801F91DC) //this is a jump label
/*801F91DC 001F5FDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801F91E0, 0x801F91E0) //this is a jump label
/*801F91E0 001F5FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F91E4 001F5FE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F91E8 001F5FE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F91EC 001F5FEC*/ PPC::Runtime::ASM::blr();
}