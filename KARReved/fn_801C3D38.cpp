//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A051C.hpp"



void fn_801C3D38(PPC::Runtime::GCContext* context)
{
/*801C3D38 001C0B38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3D3C 001C0B3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3D40 001C0B40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3D44 001C0B44*/ PPC::Runtime::ASM::bl(fn_801A051C);
/*801C3D48 001C0B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3D4C 001C0B4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3D50 001C0B50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3D54 001C0B54*/ PPC::Runtime::ASM::blr();
}