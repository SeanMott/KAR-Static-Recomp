//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80326854(PPC::Runtime::GCContext* context)
{
/*80326854 00323654*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80326858 00323658*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032685C 0032365C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E3144 @ Get_MemoryOffset_HighBit);
/*80326860 00323660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80326864 00323664*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80326868 00323668*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8032686C 0032366C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80326870 00323670*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80326874 00323674*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804E3144 @ Get_MemoryOffset_LowBit);
/*80326878 00323678*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8032687C 0032367C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80326880 00323680*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80326884 00323684*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80326888 00323688*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8032688C 0032368C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80326890 00323690*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80326894 00323694*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80326898 00323698*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8032689C 0032369C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803268A0 003236A0*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*803268A4 003236A4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803268A8 003236A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803268AC 003236AC*/ PPC::Runtime::ASM::b(.L_803268C4);
RUNTIME_PPC_JUMP_LABEL(.L_803268B0, 0x803268B0) //this is a jump label
/*803268B0 003236B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803268B4 003236B4*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x2c);
/*803268B8 003236B8*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*803268BC 003236BC*/ PPC::Runtime::ASM::nop();
/*803268C0 003236C0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803268C4, 0x803268C4) //this is a jump label
/*803268C4 003236C4*/ PPC::Runtime::ASM::cmplw(context->r30, context->r31);
/*803268C8 003236C8*/ PPC::Runtime::ASM::bne(.L_803268B0);
/*803268CC 003236CC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E3150 @ Get_MemoryOffset_HighBit);
/*803268D0 003236D0*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x1c);
/*803268D4 003236D4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804E3150 @ Get_MemoryOffset_LowBit);
/*803268D8 003236D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803268DC 003236DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803268E0 003236E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803268E4 003236E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803268E8 003236E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803268EC 003236EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803268F0 003236F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803268F4 003236F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*803268F8 003236F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803268FC 003236FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80326900 00323700*/ PPC::Runtime::ASM::b(.L_80326918);
RUNTIME_PPC_JUMP_LABEL(.L_80326904, 0x80326904) //this is a jump label
/*80326904 00323704*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*80326908 00323708*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x14);
/*8032690C 0032370C*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*80326910 00323710*/ PPC::Runtime::ASM::nop();
/*80326914 00323714*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80326918, 0x80326918) //this is a jump label
/*80326918 00323718*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*8032691C 0032371C*/ PPC::Runtime::ASM::bne(.L_80326904);
/*80326920 00323720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80326924 00323724*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80326928 00323728*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8032692C 0032372C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80326930 00323730*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80326934 00323734*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80326938 00323738*/ PPC::Runtime::ASM::blr();
}