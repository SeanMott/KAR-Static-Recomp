//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013121C.hpp"
#include "fn_80059520.hpp"



void fn_8015C75C(PPC::Runtime::GCContext* context)
{
/*8015C75C 0015955C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015C760 00159560*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015C764 00159564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015C768 00159568*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015C76C 0015956C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015C770 00159570*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8015C774 00159574*/ PPC::Runtime::ASM::bl(fn_8013121C);
/*8015C778 00159578*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1256 @ Get_MemoryOffset_HighBit);
/*8015C77C 0015957C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015C780 00159580*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1256 @ Get_MemoryOffset_LowBit);
/*8015C784 00159584*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8015C788 00159588*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x85c);
/*8015C78C 0015958C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8015C790 00159590*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8015C794 00159594*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015C798 00159598*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015C79C 0015959C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015C7A0 001595A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015C7A4 001595A4*/ PPC::Runtime::ASM::blr();
}