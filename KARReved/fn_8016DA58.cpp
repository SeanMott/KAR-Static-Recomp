//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013126C.hpp"
#include "fn_80059520.hpp"



void fn_8016DA58(PPC::Runtime::GCContext* context)
{
/*8016DA58 0016A858*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016DA5C 0016A85C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016DA60 0016A860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016DA64 0016A864*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016DA68 0016A868*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016DA6C 0016A86C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016DA70 0016A870*/ PPC::Runtime::ASM::bl(fn_8013126C);
/*8016DA74 0016A874*/ PPC::Runtime::ASM::lis(context->r4, lbl_804ACB08 @ Get_MemoryOffset_HighBit);
/*8016DA78 0016A878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016DA7C 0016A87C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804ACB08 @ Get_MemoryOffset_LowBit);
/*8016DA80 0016A880*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8016DA84 0016A884*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xb40);
/*8016DA88 0016A888*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8016DA8C 0016A88C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8016DA90 0016A890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016DA94 0016A894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016DA98 0016A898*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016DA9C 0016A89C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016DAA0 0016A8A0*/ PPC::Runtime::ASM::blr();
}