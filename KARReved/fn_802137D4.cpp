//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802138A8.hpp"



void fn_802137D4(PPC::Runtime::GCContext* context)
{
/*802137D4 002105D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802137D8 002105D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802137DC 002105DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802137E0 002105E0*/ PPC::Runtime::ASM::bl(fn_802138A8);
/*802137E4 002105E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802137E8 002105E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802137EC 002105EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802137F0 002105F0*/ PPC::Runtime::ASM::blr();
}