//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802349B0(PPC::Runtime::GCContext* context)
{
/*802349B0 002317B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802349B4 002317B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802349B8 002317B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802349BC 002317BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/* 802349C0 002317C0  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*802349C4 002317C4*/ PPC::Runtime::ASM::beq(.L_802349E0);
/*802349C8 002317C8*/ PPC::Runtime::ASM::lis(context->r5, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802349CC 002317CC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802349D0 002317D0*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802349D4 002317D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x58);
/*802349D8 002317D8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*802349DC 002317DC*/ PPC::Runtime::ASM::b(.L_802349F4);
RUNTIME_PPC_JUMP_LABEL(.L_802349E0, 0x802349E0) //this is a jump label
/*802349E0 002317E0*/ PPC::Runtime::ASM::lis(context->r5, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802349E4 002317E4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802349E8 002317E8*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802349EC 002317EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2c);
/*802349F0 002317F0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_802349F4, 0x802349F4) //this is a jump label
/*802349F4 002317F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802349F8 002317F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802349FC 002317FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80234A00 00231800*/ PPC::Runtime::ASM::blr();
}