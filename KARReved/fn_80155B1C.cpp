//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131214.hpp"
#include "fn_80059520.hpp"



void fn_80155B1C(PPC::Runtime::GCContext* context)
{
/*80155B1C 0015291C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80155B20 00152920*/ PPC::Runtime::ASM::mflr(context->r0);
/*80155B24 00152924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80155B28 00152928*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80155B2C 0015292C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80155B30 00152930*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80155B34 00152934*/ PPC::Runtime::ASM::bl(fn_80131214);
/*80155B38 00152938*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1234 @ Get_MemoryOffset_HighBit);
/*80155B3C 0015293C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80155B40 00152940*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1234 @ Get_MemoryOffset_LowBit);
/*80155B44 00152944*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80155B48 00152948*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x67c);
/*80155B4C 0015294C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80155B50 00152950*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80155B54 00152954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80155B58 00152958*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80155B5C 0015295C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80155B60 00152960*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80155B64 00152964*/ PPC::Runtime::ASM::blr();
}