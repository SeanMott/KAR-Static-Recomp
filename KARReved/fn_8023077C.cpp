//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8023077C(PPC::Runtime::GCContext* context)
{
/*8023077C 0022D57C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230780 0022D580*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230784 0022D584*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230788 0022D588*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023078C 0022D58C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80230790 0022D590*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80230794 0022D594*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80230798 0022D598*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*8023079C 0022D59C*/ PPC::Runtime::ASM::blt(.L_802307B8);
/*802307A0 0022D5A0*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*802307A4 0022D5A4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*802307A8 0022D5A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*802307AC 0022D5AC*/ PPC::Runtime::ASM::li(context->r4, 0x6b6);
/*802307B0 0022D5B0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*802307B4 0022D5B4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802307B8, 0x802307B8) //this is a jump label
/*802307B8 0022D5B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802307BC 0022D5BC*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*802307C0 0022D5C0*/ PPC::Runtime::ASM::slwi(context->r4, context->r31, 2);
/*802307C4 0022D5C4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6a8);
/*802307C8 0022D5C8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*802307CC 0022D5CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802307D0 0022D5D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802307D4 0022D5D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802307D8 0022D5D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802307DC 0022D5DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802307E0 0022D5E0*/ PPC::Runtime::ASM::blr();
}