//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802E26DC.hpp"



void fn_802FAD0C(PPC::Runtime::GCContext* context)
{
/*802FAD0C 002F7B0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802FAD10 002F7B10*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FAD14 002F7B14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FAD18 002F7B18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FAD1C 002F7B1C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802FAD20 002F7B20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FAD24 002F7B24*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FAD28 002F7B28*/ PPC::Runtime::ASM::bl(fn_802E26DC);
/*802FAD2C 002F7B2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FAD30 002F7B30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FAD34 002F7B34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802FAD38 002F7B38*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802FAD3C 002F7B3C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FAD40 002F7B40*/ PPC::Runtime::ASM::beq(.L_802FAD84);
/*802FAD44 002F7B44*/ PPC::Runtime::ASM::bne(.L_802FAD58);
/*802FAD48 002F7B48*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FAD4C 002F7B4C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FAD50 002F7B50*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FAD54 002F7B54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FAD58, 0x802FAD58) //this is a jump label
/*802FAD58 002F7B58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FAD5C 002F7B5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FAD60 002F7B60*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FAD64 002F7B64*/ PPC::Runtime::ASM::bne(.L_802FAD74);
/*802FAD68 002F7B68*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FAD6C 002F7B6C*/ PPC::Runtime::ASM::beq(.L_802FAD74);
/*802FAD70 002F7B70*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FAD74, 0x802FAD74) //this is a jump label
/* 802FAD74 002F7B74  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FAD78 002F7B78*/ PPC::Runtime::ASM::beq(.L_802FAD84);
/*802FAD7C 002F7B7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FAD80 002F7B80*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_802FAD84, 0x802FAD84) //this is a jump label
/*802FAD84 002F7B84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FAD88 002F7B88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FAD8C 002F7B8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802FAD90 002F7B90*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802FAD94 002F7B94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FAD98 002F7B98*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x44);
/*802FAD9C 002F7B9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FADA0 002F7BA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x544, context->r5));
/*802FADA4 002F7BA4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802FADA8 002F7BA8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FADAC 002F7BAC*/ PPC::Runtime::ASM::bne(.L_802FADC0);
/*802FADB0 002F7BB0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FADB4 002F7BB4*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*802FADB8 002F7BB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FADBC 002F7BBC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FADC0, 0x802FADC0) //this is a jump label
/*802FADC0 002F7BC0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FADC4 002F7BC4*/ PPC::Runtime::ASM::bne(.L_802FADD8);
/*802FADC8 002F7BC8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FADCC 002F7BCC*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*802FADD0 002F7BD0*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 3 @ Get_MemoryOffset_SDA21);
/*802FADD4 002F7BD4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FADD8, 0x802FADD8) //this is a jump label
/*802FADD8 002F7BD8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802FADDC 002F7BDC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*802FADE0 002F7BE0*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*802FADE4 002F7BE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FADE8 002F7BE8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FADEC 002F7BEC*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*802FADF0 002F7BF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FADF4 002F7BF4*/ PPC::Runtime::ASM::beq(.L_802FAE38);
/*802FADF8 002F7BF8*/ PPC::Runtime::ASM::bne(.L_802FAE0C);
/*802FADFC 002F7BFC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FAE00 002F7C00*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FAE04 002F7C04*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FAE08 002F7C08*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FAE0C, 0x802FAE0C) //this is a jump label
/*802FAE0C 002F7C0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FAE10 002F7C10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FAE14 002F7C14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FAE18 002F7C18*/ PPC::Runtime::ASM::bne(.L_802FAE28);
/*802FAE1C 002F7C1C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FAE20 002F7C20*/ PPC::Runtime::ASM::beq(.L_802FAE28);
/*802FAE24 002F7C24*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FAE28, 0x802FAE28) //this is a jump label
/* 802FAE28 002F7C28  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FAE2C 002F7C2C*/ PPC::Runtime::ASM::bne(.L_802FAE38);
/*802FAE30 002F7C30*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FAE34 002F7C34*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802FAE38, 0x802FAE38) //this is a jump label
/*802FAE38 002F7C38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FAE3C 002F7C3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x544, context->r3));
/*802FAE40 002F7C40*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802FAE44 002F7C44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802FAE48 002F7C48*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FAE4C 002F7C4C*/ PPC::Runtime::ASM::bctrl();
/*802FAE50 002F7C50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802FAE54 002F7C54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802FAE58 002F7C58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r12));
/*802FAE5C 002F7C5C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FAE60 002F7C60*/ PPC::Runtime::ASM::bctrl();
/*802FAE64 002F7C64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FAE68 002F7C68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FAE6C 002F7C6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FAE70 002F7C70*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FAE74 002F7C74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FAE78 002F7C78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802FAE7C 002F7C7C*/ PPC::Runtime::ASM::blr();
}