//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802CD8DC.hpp"
#include "fn_802CD8DC.hpp"
#include "fn_80305ABC.hpp"



void fn_8037FFD0(PPC::Runtime::GCContext* context)
{
/*8037FFD0 0037CDD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8037FFD4 0037CDD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037FFD8 0037CDD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037FFDC 0037CDDC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8037FFE0 0037CDE0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8037FFE4 0037CDE4*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BDE38 @ Get_MemoryOffset_HighBit);
/*8037FFE8 0037CDE8*/ PPC::Runtime::ASM::lis(context->r8, lbl_804F37A0 @ Get_MemoryOffset_HighBit);
/*8037FFEC 0037CDEC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8037FFF0 0037CDF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037FFF4 0037CDF4*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_804BDE38 @ Get_MemoryOffset_LowBit);
/*8037FFF8 0037CDF8*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8037FFFC 0037CDFC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80380000 0037CE00*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80380004 0037CE04*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80380008 0037CE08*/ PPC::Runtime::ASM::addi(context->r31, context->r8, lbl_804F37A0 @ Get_MemoryOffset_LowBit);
/*8038000C 0037CE0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80380010 0037CE10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80380014 0037CE14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80380018 0037CE18*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8038001C 0037CE1C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80380020 0037CE20*/ PPC::Runtime::ASM::bctrl();
/*80380024 0037CE24*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDE78 @ Get_MemoryOffset_HighBit);
/*80380028 0037CE28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8038002C 0037CE2C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BDE78 @ Get_MemoryOffset_LowBit);
/*80380030 0037CE30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4CB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80380034 0037CE34*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80380038 0037CE38*/ PPC::Runtime::ASM::lis(context->r3, fn_802CD8DC @ Get_MemoryOffset_HighBit);
/*8038003C 0037CE3C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_802CD8DC @ Get_MemoryOffset_LowBit);
/*80380040 0037CE40*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80380044 0037CE44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*80380048 0037CE48*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x58);
/*8038004C 0037CE4C*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*80380050 0037CE50*/ PPC::Runtime::ASM::li(context->r7, 0x4);
/*80380054 0037CE54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*80380058 0037CE58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8038005C 0037CE5C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r27));
/*80380060 0037CE60*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80380064 0037CE64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*80380068 0037CE68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r27));
/*8038006C 0037CE6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*80380070 0037CE70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*80380074 0037CE74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*80380078 0037CE78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*8038007C 0037CE7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*80380080 0037CE80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*80380084 0037CE84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*80380088 0037CE88*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r27));
/*8038008C 0037CE8C*/ PPC::Runtime::ASM::bl(fn___construct_array);
/* 80380090 0037CE90  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*80380094 0037CE94*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r27));
/*80380098 0037CE98*/ PPC::Runtime::ASM::beq(.L_803800CC);
/*8038009C 0037CE9C*/ PPC::Runtime::ASM::li(context->r4, 0x64);
/*803800A0 0037CEA0*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*803800A4 0037CEA4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*803800A8 0037CEA8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803800AC 0037CEAC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29, context->r27));
/*803800B0 0037CEB0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r27));
/*803800B4 0037CEB4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r27));
/*803800B8 0037CEB8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*803800BC 0037CEBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r27));
/*803800C0 0037CEC0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r27));
/*803800C4 0037CEC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r27));
/*803800C8 0037CEC8*/ PPC::Runtime::ASM::b(.L_803800F8);
RUNTIME_PPC_JUMP_LABEL(.L_803800CC, 0x803800CC) //this is a jump label
/*803800CC 0037CECC*/ PPC::Runtime::ASM::li(context->r4, 0xa0);
/*803800D0 0037CED0*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*803800D4 0037CED4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*803800D8 0037CED8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803800DC 0037CEDC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29, context->r27));
/*803800E0 0037CEE0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r27));
/*803800E4 0037CEE4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r27));
/*803800E8 0037CEE8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*803800EC 0037CEEC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r27));
/*803800F0 0037CEF0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r27));
/*803800F4 0037CEF4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_803800F8, 0x803800F8) //this is a jump label
/*803800F8 0037CEF8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803800FC 0037CEFC*/ PPC::Runtime::ASM::beq(.L_80380108);
/*80380100 0037CF00*/ PPC::Runtime::ASM::sth(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r27));
/*80380104 0037CF04*/ PPC::Runtime::ASM::b(.L_80380120);
RUNTIME_PPC_JUMP_LABEL(.L_80380108, 0x80380108) //this is a jump label
/* 80380108 0037CF08  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*8038010C 0037CF0C*/ PPC::Runtime::ASM::beq(.L_80380118);
/*80380110 0037CF10*/ PPC::Runtime::ASM::li(context->r0, 0x26);
/*80380114 0037CF14*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80380118, 0x80380118) //this is a jump label
/*80380118 0037CF18*/ PPC::Runtime::ASM::li(context->r0, 0x2a);
/*8038011C 0037CF1C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80380120, 0x80380120) //this is a jump label
/*80380120 0037CF20*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r27));
/*80380124 0037CF24*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0xc);
/*80380128 0037CF28*/ PPC::Runtime::ASM::bl(fn_80305ABC);
/*8038012C 0037CF2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4CB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80380130 0037CF30*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80380134 0037CF34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r27));
/*80380138 0037CF38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038013C 0037CF3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*80380140 0037CF40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80380144 0037CF44*/ PPC::Runtime::ASM::bctrl();
/*80380148 0037CF48*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDD8 @ Get_MemoryOffset_SDA21);
/*8038014C 0037CF4C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*80380150 0037CF50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r27));
/*80380154 0037CF54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r27));
/*80380158 0037CF58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8038015C 0037CF5C*/ PPC::Runtime::ASM::bne(.L_80380170);
/*80380160 0037CF60*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*80380164 0037CF64*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xec);
/*80380168 0037CF68*/ PPC::Runtime::ASM::li(context->r4, 0x64);
/*8038016C 0037CF6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380170, 0x80380170) //this is a jump label
/*80380170 0037CF70*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80380174 0037CF74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80380178 0037CF78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*8038017C 0037CF7C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80380180 0037CF80*/ PPC::Runtime::ASM::bctrl();
/*80380184 0037CF84*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDE0 @ Get_MemoryOffset_SDA21);
/*80380188 0037CF88*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8038018C 0037CF8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r27));
/*80380190 0037CF90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r27));
/*80380194 0037CF94*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80380198 0037CF98*/ PPC::Runtime::ASM::bne(.L_803801AC);
/*8038019C 0037CF9C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*803801A0 0037CFA0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x114);
/*803801A4 0037CFA4*/ PPC::Runtime::ASM::li(context->r4, 0x66);
/*803801A8 0037CFA8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803801AC, 0x803801AC) //this is a jump label
/*803801AC 0037CFAC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803801B0 0037CFB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803801B4 0037CFB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*803801B8 0037CFB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803801BC 0037CFBC*/ PPC::Runtime::ASM::bctrl();
/*803801C0 0037CFC0*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDE8 @ Get_MemoryOffset_SDA21);
/*803801C4 0037CFC4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*803801C8 0037CFC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r27));
/*803801CC 0037CFCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r27));
/*803801D0 0037CFD0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803801D4 0037CFD4*/ PPC::Runtime::ASM::bne(.L_803801E8);
/*803801D8 0037CFD8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*803801DC 0037CFDC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x138);
/*803801E0 0037CFE0*/ PPC::Runtime::ASM::li(context->r4, 0x68);
/*803801E4 0037CFE4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803801E8, 0x803801E8) //this is a jump label
/*803801E8 0037CFE8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803801EC 0037CFEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803801F0 0037CFF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*803801F4 0037CFF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803801F8 0037CFF8*/ PPC::Runtime::ASM::bctrl();
/*803801FC 0037CFFC*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDF0 @ Get_MemoryOffset_SDA21);
/*80380200 0037D000*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*80380204 0037D004*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r27));
/*80380208 0037D008*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r27));
/*8038020C 0037D00C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80380210 0037D010*/ PPC::Runtime::ASM::bne(.L_80380224);
/*80380214 0037D014*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*80380218 0037D018*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x15c);
/*8038021C 0037D01C*/ PPC::Runtime::ASM::li(context->r4, 0x6a);
/*80380220 0037D020*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380224, 0x80380224) //this is a jump label
/*80380224 0037D024*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4CB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80380228 0037D028*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8038022C 0037D02C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80380230 0037D030*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80380234 0037D034*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80380238 0037D038*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038023C 0037D03C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*80380240 0037D040*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80380244 0037D044*/ PPC::Runtime::ASM::bctrl();
/*80380248 0037D048*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038024C 0037D04C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 80380250 0037D050  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80380254 0037D054*/ PPC::Runtime::ASM::bne(.L_80380268);
/*80380258 0037D058*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*8038025C 0037D05C*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*80380260 0037D060*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*80380264 0037D064*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380268, 0x80380268) //this is a jump label
/*80380268 0037D068*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8038026C 0037D06C*/ PPC::Runtime::ASM::beq(.L_803802B0);
/*80380270 0037D070*/ PPC::Runtime::ASM::bne(.L_80380284);
/*80380274 0037D074*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*80380278 0037D078*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8038027C 0037D07C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*80380280 0037D080*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380284, 0x80380284) //this is a jump label
/*80380284 0037D084*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80380288 0037D088*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038028C 0037D08C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80380290 0037D090*/ PPC::Runtime::ASM::bne(.L_803802A0);
/*80380294 0037D094*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80380298 0037D098*/ PPC::Runtime::ASM::beq(.L_803802A0);
/*8038029C 0037D09C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803802A0, 0x803802A0) //this is a jump label
/* 803802A0 0037D0A0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803802A4 0037D0A4*/ PPC::Runtime::ASM::beq(.L_803802B0);
/*803802A8 0037D0A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803802AC 0037D0AC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_803802B0, 0x803802B0) //this is a jump label
/*803802B0 0037D0B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*803802B4 0037D0B4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803802B8 0037D0B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803802BC 0037D0BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*803802C0 0037D0C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803802C4 0037D0C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*803802C8 0037D0C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803802CC 0037D0CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803802D0 0037D0D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*803802D4 0037D0D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803802D8 0037D0D8*/ PPC::Runtime::ASM::bctrl();
/*803802DC 0037D0DC*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDD8 @ Get_MemoryOffset_SDA21);
/*803802E0 0037D0E0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 803802E4 0037D0E4  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*803802E8 0037D0E8*/ PPC::Runtime::ASM::bne(.L_803802FC);
/*803802EC 0037D0EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*803802F0 0037D0F0*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*803802F4 0037D0F4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*803802F8 0037D0F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803802FC, 0x803802FC) //this is a jump label
/*803802FC 0037D0FC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80380300 0037D100*/ PPC::Runtime::ASM::beq(.L_80380344);
/*80380304 0037D104*/ PPC::Runtime::ASM::bne(.L_80380318);
/*80380308 0037D108*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*8038030C 0037D10C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80380310 0037D110*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*80380314 0037D114*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380318, 0x80380318) //this is a jump label
/*80380318 0037D118*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8038031C 0037D11C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80380320 0037D120*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80380324 0037D124*/ PPC::Runtime::ASM::bne(.L_80380334);
/*80380328 0037D128*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8038032C 0037D12C*/ PPC::Runtime::ASM::beq(.L_80380334);
/*80380330 0037D130*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80380334, 0x80380334) //this is a jump label
/* 80380334 0037D134  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80380338 0037D138*/ PPC::Runtime::ASM::beq(.L_80380344);
/*8038033C 0037D13C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80380340 0037D140*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_80380344, 0x80380344) //this is a jump label
/*80380344 0037D144*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*80380348 0037D148*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8038034C 0037D14C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r27));
/*80380350 0037D150*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*80380354 0037D154*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r27));
/*80380358 0037D158*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*8038035C 0037D15C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r27));
/*80380360 0037D160*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80380364 0037D164*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*80380368 0037D168*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8038036C 0037D16C*/ PPC::Runtime::ASM::bctrl();
/*80380370 0037D170*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDE0 @ Get_MemoryOffset_SDA21);
/*80380374 0037D174*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 80380378 0037D178  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8038037C 0037D17C*/ PPC::Runtime::ASM::bne(.L_80380390);
/*80380380 0037D180*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*80380384 0037D184*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*80380388 0037D188*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*8038038C 0037D18C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380390, 0x80380390) //this is a jump label
/*80380390 0037D190*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80380394 0037D194*/ PPC::Runtime::ASM::beq(.L_803803D8);
/*80380398 0037D198*/ PPC::Runtime::ASM::bne(.L_803803AC);
/*8038039C 0037D19C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*803803A0 0037D1A0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*803803A4 0037D1A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*803803A8 0037D1A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803803AC, 0x803803AC) //this is a jump label
/*803803AC 0037D1AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*803803B0 0037D1B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803803B4 0037D1B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*803803B8 0037D1B8*/ PPC::Runtime::ASM::bne(.L_803803C8);
/*803803BC 0037D1BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*803803C0 0037D1C0*/ PPC::Runtime::ASM::beq(.L_803803C8);
/*803803C4 0037D1C4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803803C8, 0x803803C8) //this is a jump label
/* 803803C8 0037D1C8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803803CC 0037D1CC*/ PPC::Runtime::ASM::beq(.L_803803D8);
/*803803D0 0037D1D0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803803D4 0037D1D4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_803803D8, 0x803803D8) //this is a jump label
/*803803D8 0037D1D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*803803DC 0037D1DC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803803E0 0037D1E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r27));
/*803803E4 0037D1E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*803803E8 0037D1E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r27));
/*803803EC 0037D1EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*803803F0 0037D1F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r27));
/*803803F4 0037D1F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803803F8 0037D1F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*803803FC 0037D1FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80380400 0037D200*/ PPC::Runtime::ASM::bctrl();
/*80380404 0037D204*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDE8 @ Get_MemoryOffset_SDA21);
/*80380408 0037D208*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8038040C 0037D20C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*80380410 0037D210*/ PPC::Runtime::ASM::bne(.L_80380424);
/*80380414 0037D214*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*80380418 0037D218*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*8038041C 0037D21C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*80380420 0037D220*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380424, 0x80380424) //this is a jump label
/*80380424 0037D224*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80380428 0037D228*/ PPC::Runtime::ASM::beq(.L_8038046C);
/*8038042C 0037D22C*/ PPC::Runtime::ASM::bne(.L_80380440);
/*80380430 0037D230*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*80380434 0037D234*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80380438 0037D238*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*8038043C 0037D23C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80380440, 0x80380440) //this is a jump label
/*80380440 0037D240*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80380444 0037D244*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80380448 0037D248*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8038044C 0037D24C*/ PPC::Runtime::ASM::bne(.L_8038045C);
/*80380450 0037D250*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80380454 0037D254*/ PPC::Runtime::ASM::beq(.L_8038045C);
/*80380458 0037D258*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8038045C, 0x8038045C) //this is a jump label
/* 8038045C 0037D25C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80380460 0037D260*/ PPC::Runtime::ASM::beq(.L_8038046C);
/*80380464 0037D264*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80380468 0037D268*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8038046C, 0x8038046C) //this is a jump label
/*8038046C 0037D26C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*80380470 0037D270*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80380474 0037D274*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r27));
/*80380478 0037D278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*8038047C 0037D27C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r27));
/*80380480 0037D280*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*80380484 0037D284*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r27));
/*80380488 0037D288*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038048C 0037D28C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r12));
/*80380490 0037D290*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80380494 0037D294*/ PPC::Runtime::ASM::bctrl();
/*80380498 0037D298*/ PPC::Runtime::ASM::li(context->r4, lbl_805DBDF0 @ Get_MemoryOffset_SDA21);
/*8038049C 0037D29C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 803804A0 0037D2A0  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*803804A4 0037D2A4*/ PPC::Runtime::ASM::bne(.L_803804B8);
/*803804A8 0037D2A8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*803804AC 0037D2AC*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*803804B0 0037D2B0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*803804B4 0037D2B4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803804B8, 0x803804B8) //this is a jump label
/*803804B8 0037D2B8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*803804BC 0037D2BC*/ PPC::Runtime::ASM::beq(.L_80380500);
/*803804C0 0037D2C0*/ PPC::Runtime::ASM::bne(.L_803804D4);
/*803804C4 0037D2C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DBDC8 @ Get_MemoryOffset_SDA21);
/*803804C8 0037D2C8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*803804CC 0037D2CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBDD0 @ Get_MemoryOffset_SDA21);
/*803804D0 0037D2D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803804D4, 0x803804D4) //this is a jump label
/*803804D4 0037D2D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*803804D8 0037D2D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803804DC 0037D2DC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*803804E0 0037D2E0*/ PPC::Runtime::ASM::bne(.L_803804F0);
/*803804E4 0037D2E4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*803804E8 0037D2E8*/ PPC::Runtime::ASM::beq(.L_803804F0);
/*803804EC 0037D2EC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803804F0, 0x803804F0) //this is a jump label
/* 803804F0 0037D2F0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803804F4 0037D2F4*/ PPC::Runtime::ASM::beq(.L_80380500);
/*803804F8 0037D2F8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803804FC 0037D2FC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_80380500, 0x80380500) //this is a jump label
/*80380500 0037D300*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r28));
/*80380504 0037D304*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x58);
/*80380508 0037D308*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8038050C 0037D30C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r27));
/*80380510 0037D310*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80380514 0037D314*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*80380518 0037D318*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r27));
/*8038051C 0037D31C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*80380520 0037D320*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r27));
/*80380524 0037D324*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80380528 0037D328*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x64);
/*8038052C 0037D32C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80380530 0037D330*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80380534 0037D334*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80380538 0037D338*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x7c);
/*8038053C 0037D33C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80380540 0037D340*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80380544 0037D344*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80380548 0037D348*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x70);
/*8038054C 0037D34C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80380550 0037D350*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80380554 0037D354*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*80380558 0037D358*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038055C 0037D35C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80380560 0037D360*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*80380564 0037D364*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80380568 0037D368*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4CB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038056C 0037D36C*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r27));
/*80380570 0037D370*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80380574 0037D374*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r27));
/*80380578 0037D378*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8038057C 0037D37C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*80380580 0037D380*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*80380584 0037D384*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*80380588 0037D388*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8038058C 0037D38C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r27));
/*80380590 0037D390*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*80380594 0037D394*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*80380598 0037D398*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*8038059C 0037D39C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803805A0 0037D3A0*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*803805A4 0037D3A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803805A8 0037D3A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803805AC 0037D3AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803805B0 0037D3B0*/ PPC::Runtime::ASM::blr();
}