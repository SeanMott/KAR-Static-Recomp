//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802940C4(PPC::Runtime::GCContext* context)
{
/*802940C4 00290EC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802940C8 00290EC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802940CC 00290ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802940D0 00290ED0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 802940D4 00290ED4  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802940D8 00290ED8*/ PPC::Runtime::ASM::beq(.L_802940FC);
/*802940DC 00290EDC*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BDFD8 @ Get_MemoryOffset_HighBit);
/*802940E0 00290EE0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*802940E4 00290EE4*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BDFD8 @ Get_MemoryOffset_LowBit);
/*802940E8 00290EE8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802940EC 00290EEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802940F0 00290EF0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802940F4 00290EF4*/ PPC::Runtime::ASM::ble(.L_802940FC);
/*802940F8 00290EF8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802940FC, 0x802940FC) //this is a jump label
/*802940FC 00290EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294100 00290F00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80294104 00290F04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80294108 00290F08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029410C 00290F0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80294110 00290F10*/ PPC::Runtime::ASM::blr();
}