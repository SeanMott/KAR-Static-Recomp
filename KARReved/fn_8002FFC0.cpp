//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135804.hpp"



void fn_8002FFC0(PPC::Runtime::GCContext* context)
{
/*8002FFC0 0002CDC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8002FFC4 0002CDC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8002FFC8 0002CDC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8002FFCC 0002CDCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8002FFD0 0002CDD0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8002FFD4 0002CDD4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8002FFD8 0002CDD8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8002FFDC 0002CDDC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8002FFE0 0002CDE0*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x1d0);
/*8002FFE4 0002CDE4*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002FFE8 0002CDE8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r3));
/*8002FFEC 0002CDEC*/ PPC::Runtime::ASM::li(context->r11, 0x3);
/*8002FFF0 0002CDF0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002FFF4 0002CDF4*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0xc);
/*8002FFF8 0002CDF8*/ PPC::Runtime::ASM::slw(context->r3, context->r4, context->r11);
/*8002FFFC 0002CDFC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80030000 0002CE00*/ PPC::Runtime::ASM::and.(context->r3, context->r5, context->r3);
/*80030004 0002CE04*/ PPC::Runtime::ASM::mr(context->r8, context->r9);
/*80030008 0002CE08*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8003000C 0002CE0C*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x9);
/*80030010 0002CE10*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80030014 0002CE14*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80030018 0002CE18*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*8003001C 0002CE1C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*80030020 0002CE20*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80030024 0002CE24*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80030028 0002CE28*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*8003002C 0002CE2C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*80030030 0002CE30*/ PPC::Runtime::ASM::beq(.L_80030050);
/*80030034 0002CE34*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*80030038 0002CE38*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8003003C 0002CE3C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80030040 0002CE40*/ PPC::Runtime::ASM::bne(.L_80030050);
/*80030044 0002CE44*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80030048 0002CE48*/ PPC::Runtime::ASM::addi(context->r8, context->r9, 0x1);
/*8003004C 0002CE4C*/ PPC::Runtime::ASM::li(context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80030050, 0x80030050) //this is a jump label
/*80030050 0002CE50*/ PPC::Runtime::ASM::li(context->r11, 0x2);
/*80030054 0002CE54*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80030058 0002CE58*/ PPC::Runtime::ASM::slw(context->r3, context->r4, context->r11);
/*8003005C 0002CE5C*/ PPC::Runtime::ASM::and.(context->r3, context->r5, context->r3);
/*80030060 0002CE60*/ PPC::Runtime::ASM::beq(.L_80030080);
/*80030064 0002CE64*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r7));
/*80030068 0002CE68*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8003006C 0002CE6C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80030070 0002CE70*/ PPC::Runtime::ASM::bne(.L_80030080);
/*80030074 0002CE74*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80030078 0002CE78*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8003007C 0002CE7C*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80030080, 0x80030080) //this is a jump label
/*80030080 0002CE80*/ PPC::Runtime::ASM::li(context->r11, 0x1);
/*80030084 0002CE84*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80030088 0002CE88*/ PPC::Runtime::ASM::slw(context->r3, context->r4, context->r11);
/*8003008C 0002CE8C*/ PPC::Runtime::ASM::and.(context->r3, context->r5, context->r3);
/*80030090 0002CE90*/ PPC::Runtime::ASM::beq(.L_800300B0);
/*80030094 0002CE94*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r7));
/*80030098 0002CE98*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8003009C 0002CE9C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800300A0 0002CEA0*/ PPC::Runtime::ASM::bne(.L_800300B0);
/*800300A4 0002CEA4*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*800300A8 0002CEA8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*800300AC 0002CEAC*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800300B0, 0x800300B0) //this is a jump label
/*800300B0 0002CEB0*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*800300B4 0002CEB4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800300B8 0002CEB8*/ PPC::Runtime::ASM::slw(context->r3, context->r4, context->r11);
/*800300BC 0002CEBC*/ PPC::Runtime::ASM::and.(context->r3, context->r5, context->r3);
/*800300C0 0002CEC0*/ PPC::Runtime::ASM::beq(.L_800300DC);
/*800300C4 0002CEC4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r7));
/*800300C8 0002CEC8*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*800300CC 0002CECC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800300D0 0002CED0*/ PPC::Runtime::ASM::bne(.L_800300DC);
/*800300D4 0002CED4*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*800300D8 0002CED8*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800300DC, 0x800300DC) //this is a jump label
/*800300DC 0002CEDC*/ PPC::Runtime::ASM::extsb(context->r4, context->r10);
/*800300E0 0002CEE0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*800300E4 0002CEE4*/ PPC::Runtime::ASM::bgt(.L_80030144);
/*800300E8 0002CEE8*/ PPC::Runtime::ASM::bne(.L_800301D4);
/*800300EC 0002CEEC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800300F0 0002CEF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800300F4 0002CEF4*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*800300F8 0002CEF8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800300FC 0002CEFC*/ PPC::Runtime::ASM::beq(.L_80030104);
/*80030100 0002CF00*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80030104, 0x80030104) //this is a jump label
/*80030104 0002CF04*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*80030108 0002CF08*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8003010C 0002CF0C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80030110 0002CF10*/ PPC::Runtime::ASM::beq(.L_80030118);
/*80030114 0002CF14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80030118, 0x80030118) //this is a jump label
/*80030118 0002CF18*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r9));
/*8003011C 0002CF1C*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80030120 0002CF20*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80030124 0002CF24*/ PPC::Runtime::ASM::beq(.L_8003012C);
/*80030128 0002CF28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8003012C, 0x8003012C) //this is a jump label
/*8003012C 0002CF2C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r9));
/*80030130 0002CF30*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80030134 0002CF34*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80030138 0002CF38*/ PPC::Runtime::ASM::beq(.L_800301D4);
/*8003013C 0002CF3C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*80030140 0002CF40*/ PPC::Runtime::ASM::b(.L_800301D4);
RUNTIME_PPC_JUMP_LABEL(.L_80030144, 0x80030144) //this is a jump label
/*80030144 0002CF44*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*80030148 0002CF48*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8003014C 0002CF4C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80030150 0002CF50*/ PPC::Runtime::ASM::mtctr(context->r4);
/*80030154 0002CF54*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80030158 0002CF58*/ PPC::Runtime::ASM::ble(.L_80030188);
RUNTIME_PPC_JUMP_LABEL(.L_8003015C, 0x8003015C) //this is a jump label
/*8003015C 0002CF5C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80030160 0002CF60*/ PPC::Runtime::ASM::extsb(context->r0, context->r6);
/*80030164 0002CF64*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80030168 0002CF68*/ PPC::Runtime::ASM::beq(.L_8003017C);
/*8003016C 0002CF6C*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x39);
/*80030170 0002CF70*/ PPC::Runtime::ASM::subf(context->r0, context->r8, context->r5);
/*80030174 0002CF74*/ PPC::Runtime::ASM::stbx(context->r6, context->r7, context->r4);
/*80030178 0002CF78*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8003017C, 0x8003017C) //this is a jump label
/*8003017C 0002CF7C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*80030180 0002CF80*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80030184 0002CF84*/ PPC::Runtime::ASM::bdnz(.L_8003015C);
RUNTIME_PPC_JUMP_LABEL(.L_80030188, 0x80030188) //this is a jump label
/*80030188 0002CF88*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x8);
/*8003018C 0002CF8C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80030190 0002CF90*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80030194, 0x80030194) //this is a jump label
/*80030194 0002CF94*/ PPC::Runtime::ASM::lbzx(context->r4, context->r30, context->r5);
/*80030198 0002CF98*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*8003019C 0002CF9C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800301A0 0002CFA0*/ PPC::Runtime::ASM::bne(.L_800301AC);
/*800301A4 0002CFA4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*800301A8 0002CFA8*/ PPC::Runtime::ASM::b(.L_800301C4);
RUNTIME_PPC_JUMP_LABEL(.L_800301AC, 0x800301AC) //this is a jump label
/*800301AC 0002CFAC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800301B0 0002CFB0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*800301B4 0002CFB4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800301B8 0002CFB8*/ PPC::Runtime::ASM::beq(.L_800301C4);
/*800301BC 0002CFBC*/ PPC::Runtime::ASM::bl(fn_80135804);
/*800301C0 0002CFC0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_800301C4, 0x800301C4) //this is a jump label
/*800301C4 0002CFC4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*800301C8 0002CFC8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*800301CC 0002CFCC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*800301D0 0002CFD0*/ PPC::Runtime::ASM::blt(.L_80030194);
RUNTIME_PPC_JUMP_LABEL(.L_800301D4, 0x800301D4) //this is a jump label
/*800301D4 0002CFD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800301D8 0002CFD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800301DC 0002CFDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800301E0 0002CFE0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800301E4 0002CFE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800301E8 0002CFE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800301EC 0002CFEC*/ PPC::Runtime::ASM::blr();
}