//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230474(PPC::Runtime::GCContext* context)
{
/*80230474 0022D274*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230478 0022D278*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023047C 0022D27C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230480 0022D280*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230484 0022D284*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80230488 0022D288*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8023048C 0022D28C*/ PPC::Runtime::ASM::blt(.L_802304A8);
/*80230490 0022D290*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230494 0022D294*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*80230498 0022D298*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8023049C 0022D29C*/ PPC::Runtime::ASM::li(context->r4, 0x645);
/*802304A0 0022D2A0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*802304A4 0022D2A4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802304A8, 0x802304A8) //this is a jump label
/*802304A8 0022D2A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802304AC 0022D2AC*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*802304B0 0022D2B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802304B4 0022D2B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x838, context->r3));
/*802304B8 0022D2B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802304BC 0022D2BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802304C0 0022D2C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802304C4 0022D2C4*/ PPC::Runtime::ASM::blr();
}