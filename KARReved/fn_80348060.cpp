//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803490C0.hpp"
#include "fn_8034A74C.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379784.hpp"



void fn_80348060(PPC::Runtime::GCContext* context)
{
/*80348060 00344E60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*80348064 00344E64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80348068 00344E68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8034806C 00344E6C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80348070 00344E70*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80348074 00344E74*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xb0);
/*80348078 00344E78*/ PPC::Runtime::ASM::bl(_savegpr_21);
/*8034807C 00344E7C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDC60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348080 00344E80*/ PPC::Runtime::ASM::mr(context->r21, context->r3);
/*80348084 00344E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80348088 00344E88*/ PPC::Runtime::ASM::lis(context->r5, lbl_804E9078 @ Get_MemoryOffset_HighBit);
/*8034808C 00344E8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*80348090 00344E90*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_804E9078 @ Get_MemoryOffset_LowBit);
/*80348094 00344E94*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r21));
/*80348098 00344E98*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8034809C 00344E9C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803480A0 00344EA0*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*803480A4 00344EA4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
/*803480A8 00344EA8*/ PPC::Runtime::ASM::bne(.L_803480BC);
/*803480AC 00344EAC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*803480B0 00344EB0*/ PPC::Runtime::ASM::li(context->r4, 0x2fa);
/*803480B4 00344EB4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*803480B8 00344EB8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803480BC, 0x803480BC) //this is a jump label
/*803480BC 00344EBC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r22));
/*803480C0 00344EC0*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r21));
/*803480C4 00344EC4*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*803480C8 00344EC8*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*803480CC 00344ECC*/ PPC::Runtime::ASM::bne(.L_803480E0);
/*803480D0 00344ED0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*803480D4 00344ED4*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*803480D8 00344ED8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*803480DC 00344EDC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803480E0, 0x803480E0) //this is a jump label
/*803480E0 00344EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*803480E4 00344EE4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*803480E8 00344EE8*/ PPC::Runtime::ASM::beq(.L_803480FC);
/*803480EC 00344EEC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xa20);
/*803480F0 00344EF0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*803480F4 00344EF4*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*803480F8 00344EF8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803480FC, 0x803480FC) //this is a jump label
/*803480FC 00344EFC*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r22));
/*80348100 00344F00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*80348104 00344F04*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80348108 00344F08*/ PPC::Runtime::ASM::bne(.L_80348154);
/*8034810C 00344F0C*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*80348110 00344F10*/ PPC::Runtime::ASM::beq(.L_80348154);
/*80348114 00344F14*/ PPC::Runtime::ASM::bne(.L_80348128);
/*80348118 00344F18*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*8034811C 00344F1C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80348120 00344F20*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*80348124 00344F24*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80348128, 0x80348128) //this is a jump label
/*80348128 00344F28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*8034812C 00344F2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80348130 00344F30*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80348134 00344F34*/ PPC::Runtime::ASM::bne(.L_80348144);
/*80348138 00344F38*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8034813C 00344F3C*/ PPC::Runtime::ASM::beq(.L_80348144);
/*80348140 00344F40*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80348144, 0x80348144) //this is a jump label
/* 80348144 00344F44  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80348148 00344F48*/ PPC::Runtime::ASM::bne(.L_80348154);
/*8034814C 00344F4C*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80348150 00344F50*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80348154, 0x80348154) //this is a jump label
/*80348154 00344F54*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348158 00344F58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8034815C 00344F5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80348160 00344F60*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80348164 00344F64*/ PPC::Runtime::ASM::bctrl();
/*80348168 00344F68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8034816C 00344F6C*/ PPC::Runtime::ASM::beq(.L_803485F0);
/*80348170 00344F70*/ PPC::Runtime::ASM::mr(context->r29, context->r21);
/*80348174 00344F74*/ PPC::Runtime::ASM::mr(context->r28, context->r21);
/*80348178 00344F78*/ PPC::Runtime::ASM::mr(context->r27, context->r21);
/*8034817C 00344F7C*/ PPC::Runtime::ASM::addi(context->r26, context->r1, 0x4c);
/*80348180 00344F80*/ PPC::Runtime::ASM::li(context->r24, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80348184, 0x80348184) //this is a jump label
/*80348184 00344F84*/ PPC::Runtime::ASM::add(context->r25, context->r21, context->r24);
/*80348188 00344F88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r25));
/*8034818C 00344F8C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348190 00344F90*/ PPC::Runtime::ASM::beq(.L_80348494);
/*80348194 00344F94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r25));
/*80348198 00344F98*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8034819C 00344F9C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803481A0 00344FA0*/ PPC::Runtime::ASM::beq(.L_803483EC);
/*803481A4 00344FA4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803481A8 00344FA8*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*803481AC 00344FAC*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r25));
/*803481B0 00344FB0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r22));
/*803481B4 00344FB4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r22));
/*803481B8 00344FB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r22));
/*803481BC 00344FBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x294, context->r21));
/*803481C0 00344FC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r21));
/*803481C4 00344FC4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_803481C8, 0x803481C8) //this is a jump label
/*803481C8 00344FC8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDC60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803481CC 00344FCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*803481D0 00344FD0*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x18);
/*803481D4 00344FD4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803481D8 00344FD8*/ PPC::Runtime::ASM::beq(.L_80348264);
/*803481DC 00344FDC*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x54);
/*803481E0 00344FE0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*803481E4 00344FE4*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*803481E8 00344FE8*/ PPC::Runtime::ASM::addi(context->r5, context->r21, 0x294);
/*803481EC 00344FEC*/ PPC::Runtime::ASM::bl(fn_803490C0);
/*803481F0 00344FF0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDC60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803481F4 00344FF4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803481F8 00344FF8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*803481FC 00344FFC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x28);
/*80348200 00345000*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x40);
/*80348204 00345004*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xc);
/*80348208 00345008*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8034820C 0034500C*/ PPC::Runtime::ASM::bl(fn_8034A74C);
/*80348210 00345010*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80348214 00345014*/ PPC::Runtime::ASM::beq(.L_80348248);
/*80348218 00345018*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*8034821C 0034501C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*80348220 00345020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80348224 00345024*/ PPC::Runtime::ASM::beq(.L_80348248);
/*80348228 00345028*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8034822C 0034502C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80348230 00345030*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*80348234 00345034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80348238 00345038*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8034823C 0034503C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80348240 00345040*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80348244 00345044*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80348248, 0x80348248) //this is a jump label
/*80348248 00345048*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8034824C 0034504C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*80348250 00345050*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*80348254 00345054*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80348258 00345058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8034825C 0034505C*/ PPC::Runtime::ASM::beq(.L_80348264);
/*80348260 00345060*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_80348264, 0x80348264) //this is a jump label
/*80348264 00345064*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*80348268 00345068*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8034826C 0034506C*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x4);
/*80348270 00345070*/ PPC::Runtime::ASM::blt(.L_803481C8);
/*80348274 00345074*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80348278 00345078*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8034827C 0034507C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E45E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348280 00345080*/ PPC::Runtime::ASM::fsubs(context->f31, context->f1, context->f0);
/*80348284 00345084*/ PPC::Runtime::ASM::bne(.L_80348298);
/*80348288 00345088*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*8034828C 0034508C*/ PPC::Runtime::ASM::li(context->r4, 0x3c6);
/*80348290 00345090*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*80348294 00345094*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80348298, 0x80348298) //this is a jump label
/*80348298 00345098*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r22));
/*8034829C 0034509C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*803482A0 003450A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*803482A4 003450A4*/ PPC::Runtime::ASM::bne(.L_803482F0);
/*803482A8 003450A8*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*803482AC 003450AC*/ PPC::Runtime::ASM::beq(.L_803482F0);
/*803482B0 003450B0*/ PPC::Runtime::ASM::bne(.L_803482C4);
/*803482B4 003450B4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*803482B8 003450B8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*803482BC 003450BC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*803482C0 003450C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803482C4, 0x803482C4) //this is a jump label
/*803482C4 003450C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*803482C8 003450C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803482CC 003450CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*803482D0 003450D0*/ PPC::Runtime::ASM::bne(.L_803482E0);
/*803482D4 003450D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*803482D8 003450D8*/ PPC::Runtime::ASM::beq(.L_803482E0);
/*803482DC 003450DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803482E0, 0x803482E0) //this is a jump label
/* 803482E0 003450E0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803482E4 003450E4*/ PPC::Runtime::ASM::bne(.L_803482F0);
/*803482E8 003450E8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*803482EC 003450EC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_803482F0, 0x803482F0) //this is a jump label
/*803482F0 003450F0*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*803482F4 003450F4*/ PPC::Runtime::ASM::mr(context->r22, context->r21);
/*803482F8 003450F8*/ PPC::Runtime::ASM::stb(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r25));
/*803482FC 003450FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r21));
/*80348300 00345100*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80348304 00345104*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_80348308, 0x80348308) //this is a jump label
/*80348308 00345108*/ PPC::Runtime::ASM::addi(context->r0, context->r23, 0x68);
/*8034830C 0034510C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r21, context->r0);
/*80348310 00345110*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348314 00345114*/ PPC::Runtime::ASM::bne(.L_80348350);
/*80348318 00345118*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034831C 0034511C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80348320 00345120*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB1C0 @ Get_MemoryOffset_SDA21);
/*80348324 00345124*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB1B8 @ Get_MemoryOffset_SDA21);
/*80348328 00345128*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8034832C 0034512C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80348330 00345130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80348334 00345134*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x23c);
/*80348338 00345138*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8034833C 0034513C*/ PPC::Runtime::ASM::bne(.L_80348344);
/*80348340 00345140*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x174);
RUNTIME_PPC_JUMP_LABEL(.L_80348344, 0x80348344) //this is a jump label
/*80348344 00345144*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r3));
/*80348348 00345148*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8034834C 0034514C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_80348350, 0x80348350) //this is a jump label
/*80348350 00345150*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*80348354 00345154*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x4);
/*80348358 00345158*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x4);
/*8034835C 0034515C*/ PPC::Runtime::ASM::blt(.L_80348308);
/*80348360 00345160*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x294, context->r21));
/*80348364 00345164*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x74);
/*80348368 00345168*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r21));
/*8034836C 0034516C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80348370 00345170*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r21));
/*80348374 00345174*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80348378 00345178*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8034837C 0034517C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80348380 00345180*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*80348384 00345184*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80348388 00345188*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x74);
/*8034838C 0034518C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80348390 00345190*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x10);
/*80348394 00345194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80348398 00345198*/ PPC::Runtime::ASM::li(context->r4, 0x2afc);
/*8034839C 0034519C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803483A0 003451A0*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803483A4 003451A4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803483A8 003451A8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803483AC 003451AC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803483B0 003451B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803483B4 003451B4*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*803483B8 003451B8*/ PPC::Runtime::ASM::lis(context->r4, 0x8);
/*803483BC 003451BC*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x1a4);
/*803483C0 003451C0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x36);
/*803483C4 003451C4*/ PPC::Runtime::ASM::addi(context->r5, context->r21, 0x294);
/*803483C8 003451C8*/ PPC::Runtime::ASM::bl(fn_80379784);
/*803483CC 003451CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803483D0 003451D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803483D4 003451D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB234 @ Get_MemoryOffset_SDA21);
/*803483D8 003451D8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB22C @ Get_MemoryOffset_SDA21);
/*803483DC 003451DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803483E0 003451E0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803483E4 003451E4*/ PPC::Runtime::ASM::bl(fn_80384F44);
/*803483E8 003451E8*/ PPC::Runtime::ASM::b(.L_803485D8);
RUNTIME_PPC_JUMP_LABEL(.L_803483EC, 0x803483EC) //this is a jump label
/*803483EC 003451EC*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*803483F0 003451F0*/ PPC::Runtime::ASM::bne(.L_80348404);
/*803483F4 003451F4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*803483F8 003451F8*/ PPC::Runtime::ASM::li(context->r4, 0x3fd);
/*803483FC 003451FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*80348400 00345200*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80348404, 0x80348404) //this is a jump label
/*80348404 00345204*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E45E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348408 00345208*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r22));
/*8034840C 0034520C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80348410 00345210*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*80348414 00345214*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f2);
/*80348418 00345218*/ PPC::Runtime::ASM::ble(.L_80348420);
/*8034841C 0034521C*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_80348420, 0x80348420) //this is a jump label
/*80348420 00345220*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*80348424 00345224*/ PPC::Runtime::ASM::bne(.L_80348438);
/*80348428 00345228*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*8034842C 0034522C*/ PPC::Runtime::ASM::li(context->r4, 0x3c6);
/*80348430 00345230*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*80348434 00345234*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80348438, 0x80348438) //this is a jump label
/*80348438 00345238*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r22));
/*8034843C 0034523C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*80348440 00345240*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80348444 00345244*/ PPC::Runtime::ASM::bne(.L_803485D8);
/*80348448 00345248*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8034844C 0034524C*/ PPC::Runtime::ASM::beq(.L_803485D8);
/*80348450 00345250*/ PPC::Runtime::ASM::bne(.L_80348464);
/*80348454 00345254*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*80348458 00345258*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8034845C 0034525C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*80348460 00345260*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80348464, 0x80348464) //this is a jump label
/*80348464 00345264*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
/*80348468 00345268*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8034846C 0034526C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80348470 00345270*/ PPC::Runtime::ASM::bne(.L_80348480);
/*80348474 00345274*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80348478 00345278*/ PPC::Runtime::ASM::beq(.L_80348480);
/*8034847C 0034527C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80348480, 0x80348480) //this is a jump label
/* 80348480 00345280  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80348484 00345284*/ PPC::Runtime::ASM::bne(.L_803485D8);
/*80348488 00345288*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8034848C 0034528C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*80348490 00345290*/ PPC::Runtime::ASM::b(.L_803485D8);
RUNTIME_PPC_JUMP_LABEL(.L_80348494, 0x80348494) //this is a jump label
/*80348494 00345294*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348498 00345298*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E456C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034849C 0034529C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r3));
/*803484A0 003452A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803484A4 003452A4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*803484A8 003452A8*/ PPC::Runtime::ASM::beq(.L_803485D8);
/*803484AC 003452AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*803484B0 003452B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803484B4 003452B4*/ PPC::Runtime::ASM::beq(.L_803484C0);
/*803484B8 003452B8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*803484BC 003452BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803484C0, 0x803484C0) //this is a jump label
/*803484C0 003452C0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803484C4 003452C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803484C8 003452C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB1C0 @ Get_MemoryOffset_SDA21);
/*803484CC 003452CC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB1B8 @ Get_MemoryOffset_SDA21);
/*803484D0 003452D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803484D4 003452D4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803484D8 003452D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803484DC 003452DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x23c);
/*803484E0 003452E0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803484E4 003452E4*/ PPC::Runtime::ASM::bne(.L_803484EC);
/*803484E8 003452E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x174);
RUNTIME_PPC_JUMP_LABEL(.L_803484EC, 0x803484EC) //this is a jump label
/*803484EC 003452EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r3));
/*803484F0 003452F0*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*803484F4 003452F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r21));
/*803484F8 003452F8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*803484FC 003452FC*/ PPC::Runtime::ASM::bge(.L_803485D8);
/*80348500 00345300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*80348504 00345304*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348508 00345308*/ PPC::Runtime::ASM::bne(.L_803485D8);
/*8034850C 0034530C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r21));
/*80348510 00345310*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80348514 00345314*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348518 00345318*/ PPC::Runtime::ASM::beq(.L_80348550);
/*8034851C 0034531C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x69, context->r21));
/*80348520 00345320*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80348524 00345324*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348528 00345328*/ PPC::Runtime::ASM::beq(.L_80348550);
/*8034852C 0034532C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r21));
/*80348530 00345330*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80348534 00345334*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348538 00345338*/ PPC::Runtime::ASM::beq(.L_80348550);
/*8034853C 0034533C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6b, context->r21));
/*80348540 00345340*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80348544 00345344*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80348548 00345348*/ PPC::Runtime::ASM::beq(.L_80348550);
/*8034854C 0034534C*/ PPC::Runtime::ASM::li(context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_80348550, 0x80348550) //this is a jump label
/*80348550 00345350*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x4);
/*80348554 00345354*/ PPC::Runtime::ASM::bge(.L_80348578);
/*80348558 00345358*/ PPC::Runtime::ASM::add(context->r3, context->r21, context->r3);
/*8034855C 0034535C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80348560 00345360*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*80348564 00345364*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80348568 00345368*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*8034856C 0034536C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r21));
/*80348570 00345370*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80348574 00345374*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_80348578, 0x80348578) //this is a jump label
/*80348578 00345378*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*8034857C 0034537C*/ PPC::Runtime::ASM::mr(context->r22, context->r21);
RUNTIME_PPC_JUMP_LABEL(.L_80348580, 0x80348580) //this is a jump label
/*80348580 00345380*/ PPC::Runtime::ASM::addi(context->r0, context->r23, 0x68);
/*80348584 00345384*/ PPC::Runtime::ASM::lbzx(context->r0, context->r21, context->r0);
/*80348588 00345388*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8034858C 0034538C*/ PPC::Runtime::ASM::bne(.L_803485C8);
/*80348590 00345390*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348594 00345394*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80348598 00345398*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB1C0 @ Get_MemoryOffset_SDA21);
/*8034859C 0034539C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB1B8 @ Get_MemoryOffset_SDA21);
/*803485A0 003453A0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803485A4 003453A4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803485A8 003453A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803485AC 003453AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x23c);
/*803485B0 003453B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803485B4 003453B4*/ PPC::Runtime::ASM::bne(.L_803485BC);
/*803485B8 003453B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x174);
RUNTIME_PPC_JUMP_LABEL(.L_803485BC, 0x803485BC) //this is a jump label
/*803485BC 003453BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r3));
/*803485C0 003453C0*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*803485C4 003453C4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_803485C8, 0x803485C8) //this is a jump label
/*803485C8 003453C8*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*803485CC 003453CC*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x4);
/*803485D0 003453D0*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x4);
/*803485D4 003453D4*/ PPC::Runtime::ASM::blt(.L_80348580);
RUNTIME_PPC_JUMP_LABEL(.L_803485D8, 0x803485D8) //this is a jump label
/*803485D8 003453D8*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*803485DC 003453DC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4c);
/*803485E0 003453E0*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x4);
/*803485E4 003453E4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x3c);
/*803485E8 003453E8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*803485EC 003453EC*/ PPC::Runtime::ASM::blt(.L_80348184);
RUNTIME_PPC_JUMP_LABEL(.L_803485F0, 0x803485F0) //this is a jump label
/*803485F0 003453F0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*803485F4 003453F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xb0);
/*803485F8 003453F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803485FC 003453FC*/ PPC::Runtime::ASM::bl(_restgpr_21);
/*80348600 00345400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*80348604 00345404*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80348608 00345408*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*8034860C 0034540C*/ PPC::Runtime::ASM::blr();
}