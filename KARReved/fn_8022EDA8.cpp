//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022EDA8(PPC::Runtime::GCContext* context)
{
/*8022EDA8 0022BBA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022EDAC 0022BBAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022EDB0 0022BBB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022EDB4 0022BBB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022EDB8 0022BBB8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022EDBC 0022BBBC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022EDC0 0022BBC0*/ PPC::Runtime::ASM::blt(.L_8022EDDC);
/*8022EDC4 0022BBC4*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022EDC8 0022BBC8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022EDCC 0022BBCC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022EDD0 0022BBD0*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8022EDD4 0022BBD4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022EDD8 0022BBD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022EDDC, 0x8022EDDC) //this is a jump label
/*8022EDDC 0022BBDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022EDE0 0022BBE0*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022EDE4 0022BBE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x37a, context->r3));
/*8022EDE8 0022BBE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022EDEC 0022BBEC*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 26);
/*8022EDF0 0022BBF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022EDF4 0022BBF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022EDF8 0022BBF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022EDFC 0022BBFC*/ PPC::Runtime::ASM::blr();
}