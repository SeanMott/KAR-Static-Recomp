//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___copy_longs_rev_unaligned(PPC::Runtime::GCContext* context)
{
/*803B47E0 003B15E0*/ PPC::Runtime::ASM::add(context->r11, context->r3, context->r5);
/*803B47E4 003B15E4*/ PPC::Runtime::ASM::add(context->r10, context->r4, context->r5);
/* 803B47E8 003B15E8  55 63 07 BF */ clrlwi. context->r3 , context->r11 , 30
/*803B47EC 003B15EC*/ PPC::Runtime::ASM::beq(.L_803B4804);
/*803B47F0 003B15F0*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_803B47F4, 0x803B47F4) //this is a jump label
/*803B47F4 003B15F4*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r10));
/* 803B47F8 003B15F8  34 63 FF FF */ subic. context->r3 , context->r3 , 0x1
/*803B47FC 003B15FC*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r11));
/*803B4800 003B1600*/ PPC::Runtime::ASM::bne(.L_803B47F4);
RUNTIME_PPC_JUMP_LABEL(.L_803B4804, 0x803B4804) //this is a jump label
/*803B4804 003B1604*/ PPC::Runtime::ASM::clrlslwi(context->r8, context->r10, 30, 3);
/*803B4808 003B1608*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r10, 30);
/*803B480C 003B160C*/ PPC::Runtime::ASM::subfic(context->r9, context->r8, 0x20);
/*803B4810 003B1610*/ PPC::Runtime::ASM::srwi(context->r6, context->r5, 3);
/*803B4814 003B1614*/ PPC::Runtime::ASM::subfic(context->r0, context->r7, 0x4);
/*803B4818 003B1618*/ PPC::Runtime::ASM::add(context->r10, context->r10, context->r0);
/*803B481C 003B161C*/ PPC::Runtime::ASM::lwzu(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r10));
RUNTIME_PPC_JUMP_LABEL(.L_803B4820, 0x803B4820) //this is a jump label
/*803B4820 003B1620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r10));
/*803B4824 003B1624*/ PPC::Runtime::ASM::srw(context->r3, context->r4, context->r9);
/* 803B4828 003B1628  34 C6 FF FF */ subic. context->r6 , context->r6 , 0x1
/*803B482C 003B162C*/ PPC::Runtime::ASM::slw(context->r4, context->r0, context->r8);
/*803B4830 003B1630*/ PPC::Runtime::ASM::srw(context->r0, context->r0, context->r9);
/*803B4834 003B1634*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*803B4838 003B1638*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r11));
/*803B483C 003B163C*/ PPC::Runtime::ASM::lwzu(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r10));
/*803B4840 003B1640*/ PPC::Runtime::ASM::slw(context->r3, context->r4, context->r8);
/*803B4844 003B1644*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803B4848 003B1648*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r11));
/*803B484C 003B164C*/ PPC::Runtime::ASM::bne(.L_803B4820);
/*803B4850 003B1650*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r5, 0, 29, 29);
/*803B4854 003B1654*/ PPC::Runtime::ASM::beq(.L_803B486C);
/*803B4858 003B1658*/ PPC::Runtime::ASM::lwzu(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r10));
/*803B485C 003B165C*/ PPC::Runtime::ASM::srw(context->r0, context->r4, context->r9);
/*803B4860 003B1660*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r8);
/*803B4864 003B1664*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*803B4868 003B1668*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r11));
RUNTIME_PPC_JUMP_LABEL(.L_803B486C, 0x803B486C) //this is a jump label
/* 803B486C 003B166C  54 A5 07 BF */ clrlwi. context->r5 , context->r5 , 30
/*803B4870 003B1670*/ PPC::Runtime::ASM::beqlr();
/*803B4874 003B1674*/ PPC::Runtime::ASM::add(context->r10, context->r10, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_803B4878, 0x803B4878) //this is a jump label
/*803B4878 003B1678*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r10));
/* 803B487C 003B167C  34 A5 FF FF */ subic. context->r5 , context->r5 , 0x1
/*803B4880 003B1680*/ PPC::Runtime::ASM::stbu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r11));
/*803B4884 003B1684*/ PPC::Runtime::ASM::bne(.L_803B4878);
/*803B4888 003B1688*/ PPC::Runtime::ASM::blr();
}