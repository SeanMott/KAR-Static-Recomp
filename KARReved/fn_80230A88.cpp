//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230A88(PPC::Runtime::GCContext* context)
{
/*80230A88 0022D888*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230A8C 0022D88C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230A90 0022D890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230A94 0022D894*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230A98 0022D898*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80230A9C 0022D89C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80230AA0 0022D8A0*/ PPC::Runtime::ASM::blt(.L_80230ABC);
/*80230AA4 0022D8A4*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230AA8 0022D8A8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*80230AAC 0022D8AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*80230AB0 0022D8B0*/ PPC::Runtime::ASM::li(context->r4, 0x72b);
/*80230AB4 0022D8B4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230AB8 0022D8B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80230ABC, 0x80230ABC) //this is a jump label
/*80230ABC 0022D8BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230AC0 0022D8C0*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230AC4 0022D8C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r3));
/*80230AC8 0022D8C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230ACC 0022D8CC*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*80230AD0 0022D8D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230AD4 0022D8D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230AD8 0022D8D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230ADC 0022D8DC*/ PPC::Runtime::ASM::blr();
}