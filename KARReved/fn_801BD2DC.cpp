//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801BD2DC(PPC::Runtime::GCContext* context)
{
/*801BD2DC 001BA0DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BD2E0 001BA0E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BD2E4 001BA0E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BD2E8 001BA0E8*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801BD2EC 001BA0EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BD2F0 001BA0F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BD2F4 001BA0F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BD2F8 001BA0F8*/ PPC::Runtime::ASM::blr();
}