//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FCDA0.hpp"
#include "fn_8020EB70.hpp"
#include "fn_8020EB70.hpp"
#include "fn_802042FC.hpp"
#include "fn_8020AE54.hpp"



void fn_8020EA44(PPC::Runtime::GCContext* context)
{
/*8020EA44 0020B844*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020EA48 0020B848*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020EA4C 0020B84C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EA50 0020B850*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020EA54 0020B854*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020EA58 0020B858*/ PPC::Runtime::ASM::bl(fn_801FCDA0);
/*8020EA5C 0020B85C*/ PPC::Runtime::ASM::lis(context->r3, fn_8020EB70 @ Get_MemoryOffset_HighBit);
/*8020EA60 0020B860*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8020EB70 @ Get_MemoryOffset_LowBit);
/*8020EA64 0020B864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xadc, context->r31));
/*8020EA68 0020B868*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xae0, context->r31));
/*8020EA6C 0020B86C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xae4, context->r31));
/*8020EA70 0020B870*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8020EA74 0020B874*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*8020EA78 0020B878*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020EA7C 0020B87C*/ PPC::Runtime::ASM::bl(fn_8020AE54);
/*8020EA80 0020B880*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020EA84 0020B884*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020EA88 0020B888*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020EA8C 0020B88C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020EA90 0020B890*/ PPC::Runtime::ASM::blr();
}