//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80281C3C(PPC::Runtime::GCContext* context)
{
/*80281C3C 0027EA3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80281C40 0027EA40*/ PPC::Runtime::ASM::mflr(context->r0);
/*80281C44 0027EA44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281C48 0027EA48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281C4C 0027EA4C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281C50 0027EA50*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80281C54 0027EA54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80281C58 0027EA58*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80281C5C 0027EA5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80281C60 0027EA60*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80281C64 0027EA64*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
/*80281C68 0027EA68*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80281C6C, 0x80281C6C) //this is a jump label
/*80281C6C 0027EA6C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0xa8);
/*80281C70 0027EA70*/ PPC::Runtime::ASM::lwzx(context->r3, context->r30, context->r0);
/*80281C74 0027EA74*/ PPC::Runtime::ASM::bl(fn_HSD_JObjGetFlags);
/*80281C78 0027EA78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 27, 27);
/*80281C7C 0027EA7C*/ PPC::Runtime::ASM::bne(.L_80281C84);
/*80281C80 0027EA80*/ PPC::Runtime::ASM::b(.L_80281C98);
RUNTIME_PPC_JUMP_LABEL(.L_80281C84, 0x80281C84) //this is a jump label
/*80281C84 0027EA84*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80281C88 0027EA88*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*80281C8C 0027EA8C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x11);
/*80281C90 0027EA90*/ PPC::Runtime::ASM::blt(.L_80281C6C);
/*80281C94 0027EA94*/ PPC::Runtime::ASM::li(context->r29, 0x11);
RUNTIME_PPC_JUMP_LABEL(.L_80281C98, 0x80281C98) //this is a jump label
/*80281C98 0027EA98*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x11);
/*80281C9C 0027EA9C*/ PPC::Runtime::ASM::beq(.L_80281CB0);
/*80281CA0 0027EAA0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80281CA4 0027EAA4*/ PPC::Runtime::ASM::li(context->r0, 0x64);
/*80281CA8 0027EAA8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*80281CAC 0027EAAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80281CB0, 0x80281CB0) //this is a jump label
/*80281CB0 0027EAB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281CB4 0027EAB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281CB8 0027EAB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281CBC 0027EABC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80281CC0 0027EAC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80281CC4 0027EAC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80281CC8 0027EAC8*/ PPC::Runtime::ASM::blr();
}