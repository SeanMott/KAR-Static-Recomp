//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7AD0.hpp"
#include "fn_killWhispy.hpp"



void fn_800FBD50(PPC::Runtime::GCContext* context)
{
/*800FBD50 000F8B50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800FBD54 000F8B54*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FBD58 000F8B58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FBD5C 000F8B5C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800FBD60 000F8B60*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800FBD64 000F8B64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800FBD68 000F8B68*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800FBD6C 000F8B6C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FBD70 000F8B70*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800FBD74 000F8B74*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800FBD78 000F8B78*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FBD7C 000F8B7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800FBD80 000F8B80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*800FBD84 000F8B84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FBD88 000F8B88*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FBD8C 000F8B8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800FBD90 000F8B90*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FBD94 000F8B94*/ PPC::Runtime::ASM::lwzx(context->r30, context->r3, context->r0);
/*800FBD98 000F8B98*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800FBD9C 000F8B9C*/ PPC::Runtime::ASM::bne(.L_800FBDB0);
/*800FBDA0 000F8BA0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6238 @ Get_MemoryOffset_SDA21);
/*800FBDA4 000F8BA4*/ PPC::Runtime::ASM::li(context->r4, 0x2ec);
/*800FBDA8 000F8BA8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6240 @ Get_MemoryOffset_SDA21);
/*800FBDAC 000F8BAC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FBDB0, 0x800FBDB0) //this is a jump label
/*800FBDB0 000F8BB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FBDB4 000F8BB4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FBDB8 000F8BB8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800FBDBC 000F8BBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FBDC0 000F8BC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800FBDC4 000F8BC4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f31, context->f2);
/*800FBDC8 000F8BC8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*800FBDCC 000F8BCC*/ PPC::Runtime::ASM::fabs(context->f1, context->f2);
/*800FBDD0 000F8BD0*/ PPC::Runtime::ASM::fabs(context->f0, context->f0);
/*800FBDD4 000F8BD4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800FBDD8 000F8BD8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800FBDDC 000F8BDC*/ PPC::Runtime::ASM::bne(.L_800FBEBC);
/*800FBDE0 000F8BE0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800FBDE4 000F8BE4*/ PPC::Runtime::ASM::bne(.L_800FBDF8);
/*800FBDE8 000F8BE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6238 @ Get_MemoryOffset_SDA21);
/*800FBDEC 000F8BEC*/ PPC::Runtime::ASM::li(context->r4, 0x2a4);
/*800FBDF0 000F8BF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6240 @ Get_MemoryOffset_SDA21);
/*800FBDF4 000F8BF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FBDF8, 0x800FBDF8) //this is a jump label
/*800FBDF8 000F8BF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800FBDFC 000F8BFC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*800FBE00 000F8C00*/ PPC::Runtime::ASM::beq(.L_800FBE18);
/*800FBE04 000F8C04*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1002 @ Get_MemoryOffset_HighBit);
/*800FBE08 000F8C08*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6238 @ Get_MemoryOffset_SDA21);
/*800FBE0C 000F8C0C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1002 @ Get_MemoryOffset_LowBit);
/*800FBE10 000F8C10*/ PPC::Runtime::ASM::li(context->r4, 0x2a5);
/*800FBE14 000F8C14*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FBE18, 0x800FBE18) //this is a jump label
/*800FBE18 000F8C18*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800FBE1C 000F8C1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800FBE20 000F8C20*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*800FBE24 000F8C24*/ PPC::Runtime::ASM::bne(.L_800FBE70);
/*800FBE28 000F8C28*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800FBE2C 000F8C2C*/ PPC::Runtime::ASM::beq(.L_800FBE70);
/*800FBE30 000F8C30*/ PPC::Runtime::ASM::bne(.L_800FBE44);
/*800FBE34 000F8C34*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6238 @ Get_MemoryOffset_SDA21);
/*800FBE38 000F8C38*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800FBE3C 000F8C3C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6240 @ Get_MemoryOffset_SDA21);
/*800FBE40 000F8C40*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FBE44, 0x800FBE44) //this is a jump label
/*800FBE44 000F8C44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800FBE48 000F8C48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800FBE4C 000F8C4C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800FBE50 000F8C50*/ PPC::Runtime::ASM::bne(.L_800FBE60);
/*800FBE54 000F8C54*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800FBE58 000F8C58*/ PPC::Runtime::ASM::beq(.L_800FBE60);
/*800FBE5C 000F8C5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FBE60, 0x800FBE60) //this is a jump label
/*800FBE60 000F8C60*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FBE64 000F8C64*/ PPC::Runtime::ASM::bne(.L_800FBE70);
/*800FBE68 000F8C68*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FBE6C 000F8C6C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_800FBE70, 0x800FBE70) //this is a jump label
/*800FBE70 000F8C70*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800FBE74 000F8C74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FBE78 000F8C78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800FBE7C 000F8C7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FBE80 000F8C80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FBE84 000F8C84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800FBE88 000F8C88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*800FBE8C 000F8C8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*800FBE90 000F8C90*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*800FBE94 000F8C94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FBE98 000F8C98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FBE9C 000F8C9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800FBEA0 000F8CA0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FBEA4 000F8CA4*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800FBEA8 000F8CA8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FBEAC 000F8CAC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FBEB0 000F8CB0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FBEB4 000F8CB4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FBEB8 000F8CB8*/ PPC::Runtime::ASM::b(.L_800FBF38);
RUNTIME_PPC_JUMP_LABEL(.L_800FBEBC, 0x800FBEBC) //this is a jump label
/*800FBEBC 000F8CBC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800FBEC0 000F8CC0*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r29));
/*800FBEC4 000F8CC4*/ PPC::Runtime::ASM::bne(.L_800FBED8);
/*800FBEC8 000F8CC8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6238 @ Get_MemoryOffset_SDA21);
/*800FBECC 000F8CCC*/ PPC::Runtime::ASM::li(context->r4, 0x412);
/*800FBED0 000F8CD0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6240 @ Get_MemoryOffset_SDA21);
/*800FBED4 000F8CD4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FBED8, 0x800FBED8) //this is a jump label
/*800FBED8 000F8CD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800FBEDC 000F8CDC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*800FBEE0 000F8CE0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800FBEE4 000F8CE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800FBEE8 000F8CE8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*800FBEEC 000F8CEC*/ PPC::Runtime::ASM::bne(.L_800FBF38);
/*800FBEF0 000F8CF0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800FBEF4 000F8CF4*/ PPC::Runtime::ASM::beq(.L_800FBF38);
/*800FBEF8 000F8CF8*/ PPC::Runtime::ASM::bne(.L_800FBF0C);
/*800FBEFC 000F8CFC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6238 @ Get_MemoryOffset_SDA21);
/*800FBF00 000F8D00*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800FBF04 000F8D04*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6240 @ Get_MemoryOffset_SDA21);
/*800FBF08 000F8D08*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FBF0C, 0x800FBF0C) //this is a jump label
/*800FBF0C 000F8D0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800FBF10 000F8D10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800FBF14 000F8D14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800FBF18 000F8D18*/ PPC::Runtime::ASM::bne(.L_800FBF28);
/*800FBF1C 000F8D1C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800FBF20 000F8D20*/ PPC::Runtime::ASM::beq(.L_800FBF28);
/*800FBF24 000F8D24*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FBF28, 0x800FBF28) //this is a jump label
/*800FBF28 000F8D28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FBF2C 000F8D2C*/ PPC::Runtime::ASM::bne(.L_800FBF38);
/*800FBF30 000F8D30*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FBF34 000F8D34*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_800FBF38, 0x800FBF38) //this is a jump label
/*800FBF38 000F8D38*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800FBF3C 000F8D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FBF40 000F8D40*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800FBF44 000F8D44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800FBF48 000F8D48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800FBF4C 000F8D4C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FBF50 000F8D50*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800FBF54 000F8D54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FBF58 000F8D58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800FBF5C 000F8D5C*/ PPC::Runtime::ASM::blr();
}