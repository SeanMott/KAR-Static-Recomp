//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022CC80.hpp"



void fn_801A317C(PPC::Runtime::GCContext* context)
{
/*801A317C 0019FF7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A3180 0019FF80*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A3184 0019FF84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3188 0019FF88*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801A318C 0019FF8C*/ PPC::Runtime::ASM::bl(fn_8022CC80);
/*801A3190 0019FF90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A3194 0019FF94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A3198 0019FF98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A319C 0019FF9C*/ PPC::Runtime::ASM::blr();
}