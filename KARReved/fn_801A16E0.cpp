//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193830.hpp"



void fn_801A16E0(PPC::Runtime::GCContext* context)
{
/*801A16E0 0019E4E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A16E4 0019E4E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A16E8 0019E4E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A16EC 0019E4EC*/ PPC::Runtime::ASM::bl(fn_80193830);
/*801A16F0 0019E4F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A16F4 0019E4F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A16F8 0019E4F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A16FC 0019E4FC*/ PPC::Runtime::ASM::blr();
}