//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801311EC.hpp"
#include "fn_80059520.hpp"



void fn_80149B2C(PPC::Runtime::GCContext* context)
{
/*80149B2C 0014692C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80149B30 00146930*/ PPC::Runtime::ASM::mflr(context->r0);
/*80149B34 00146934*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80149B38 00146938*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80149B3C 0014693C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80149B40 00146940*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80149B44 00146944*/ PPC::Runtime::ASM::bl(fn_801311EC);
/*80149B48 00146948*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1182 @ Get_MemoryOffset_HighBit);
/*80149B4C 0014694C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80149B50 00146950*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1182 @ Get_MemoryOffset_LowBit);
/*80149B54 00146954*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80149B58 00146958*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x354);
/*80149B5C 0014695C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80149B60 00146960*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80149B64 00146964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80149B68 00146968*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80149B6C 0014696C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80149B70 00146970*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80149B74 00146974*/ PPC::Runtime::ASM::blr();
}