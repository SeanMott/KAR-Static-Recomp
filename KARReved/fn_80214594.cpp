//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"
#include "fn_80204FAC.hpp"



void fn_80214594(PPC::Runtime::GCContext* context)
{
/*80214594 00211394*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80214598 00211398*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021459C 0021139C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802145A0 002113A0*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*802145A4 002113A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802145A8 002113A8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802145AC 002113AC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802145B0 002113B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802145B4 002113B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802145B8 002113B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802145BC 002113BC*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802145C0 002113C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r31));
/*802145C4 002113C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802145C8 002113C8*/ PPC::Runtime::ASM::bl(fn_80204FAC);
/*802145CC 002113CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802145D0 002113D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802145D4 002113D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802145D8 002113D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802145DC 002113DC*/ PPC::Runtime::ASM::blr();
}