//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193500.hpp"



void fn_8019BA0C(PPC::Runtime::GCContext* context)
{
/*8019BA0C 0019880C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019BA10 00198810*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019BA14 00198814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019BA18 00198818*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019BA1C 0019881C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8019BA20 00198820*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019BA24 00198824*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8019BA28 00198828*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8019BA2C 0019882C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r6));
/*8019BA30 00198830*/ PPC::Runtime::ASM::extrwi(context->r4, context->r4, 8, 22);
/*8019BA34 00198834*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r5, 15);
/*8019BA38 00198838*/ PPC::Runtime::ASM::extrwi(context->r6, context->r0, 1, 30);
/*8019BA3C 0019883C*/ PPC::Runtime::ASM::bl(fn_80193500);
/*8019BA40 00198840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019BA44 00198844*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019BA48 00198848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019BA4C 0019884C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019BA50 00198850*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019BA54 00198854*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019BA58 00198858*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019BA5C 0019885C*/ PPC::Runtime::ASM::blr();
}