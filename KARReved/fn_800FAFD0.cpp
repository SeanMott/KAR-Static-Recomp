//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FB44C.hpp"
#include "fn_800F7AB8.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F579C.hpp"
#include "fn_800F5C68.hpp"
#include "fn_800FAC5C.hpp"
#include "fn_800FAC5C.hpp"
#include "fn_800F6134.hpp"
#include "fn_800F5F88.hpp"
#include "fn_800F6030.hpp"
#include "fn_800F6090.hpp"
#include "fn_800F579C.hpp"
#include "fn_800F5C68.hpp"
#include "fn_800F5F88.hpp"
#include "fn_800F6030.hpp"
#include "fn_800FB494.hpp"
#include "fn_800F72AC.hpp"
#include "fn_800EA084.hpp"
#include "fn_8022FFA8.hpp"
#include "fn_killWhispy.hpp"



void fn_800FAFD0(PPC::Runtime::GCContext* context)
{
/*800FAFD0 000F7DD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800FAFD4 000F7DD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FAFD8 000F7DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800FAFDC 000F7DDC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800FAFE0 000F7DE0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800FAFE4 000F7DE4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800FAFE8 000F7DE8*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*800FAFEC 000F7DEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FAFF0 000F7DF0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800FAFF4 000F7DF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FAFF8 000F7DF8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800FAFFC 000F7DFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FB000 000F7E00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800FB004 000F7E04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FB008 000F7E08*/ PPC::Runtime::ASM::ble(.L_800FB298);
/*800FB00C 000F7E0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*800FB010 000F7E10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800FB014 000F7E14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800FB018 000F7E18*/ PPC::Runtime::ASM::bge(.L_800FB020);
/*800FB01C 000F7E1C*/ PPC::Runtime::ASM::b(.L_800FB024);
RUNTIME_PPC_JUMP_LABEL(.L_800FB020, 0x800FB020) //this is a jump label
/*800FB020 000F7E20*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FB024, 0x800FB024) //this is a jump label
/*800FB024 000F7E24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800FB028 000F7E28*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800FB02C 000F7E2C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*800FB030 000F7E30*/ PPC::Runtime::ASM::ble(.L_800FB1D4);
/*800FB034 000F7E34*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*800FB038 000F7E38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800FB03C 000F7E3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r31));
/* 800FB040 000F7E40  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800FB044 000F7E44*/ PPC::Runtime::ASM::beq(.L_800FB054);
/*800FB048 000F7E48*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB04C 000F7E4C*/ PPC::Runtime::ASM::bl(fn_800FB44C);
/*800FB050 000F7E50*/ PPC::Runtime::ASM::b(.L_800FB290);
RUNTIME_PPC_JUMP_LABEL(.L_800FB054, 0x800FB054) //this is a jump label
/*800FB054 000F7E54*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*800FB058 000F7E58*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB05C 000F7E5C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800FB060 000F7E60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r27));
/*800FB064 000F7E64*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800FB068 000F7E68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB06C 000F7E6C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FB070 000F7E70*/ PPC::Runtime::ASM::lwzx(context->r24, context->r4, context->r0);
/*800FB074 000F7E74*/ PPC::Runtime::ASM::bl(fn_800F7AB8);
/*800FB078 000F7E78*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FB07C 000F7E7C*/ PPC::Runtime::ASM::bne(.L_800FB114);
/*800FB080 000F7E80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB084 000F7E84*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800FB088 000F7E88*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*800FB08C 000F7E8C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FB090 000F7E90*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FB094 000F7E94*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF8D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB098 000F7E98*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800FB09C 000F7E9C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FB0A0 000F7EA0*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FB0A4 000F7EA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB0A8 000F7EA8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB0AC 000F7EAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*800FB0B0 000F7EB0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800FB0B4 000F7EB4*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800FB0B8 000F7EB8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB0BC 000F7EBC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FB0C0 000F7EC0*/ PPC::Runtime::ASM::bl(fn_800F579C);
/*800FB0C4 000F7EC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB0C8 000F7EC8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB0CC 000F7ECC*/ PPC::Runtime::ASM::bl(fn_800F5C68);
/*800FB0D0 000F7ED0*/ PPC::Runtime::ASM::lis(context->r4, fn_800FAC5C @ Get_MemoryOffset_HighBit);
/*800FB0D4 000F7ED4*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800FB0D8 000F7ED8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800FAC5C @ Get_MemoryOffset_LowBit);
/*800FB0DC 000F7EDC*/ PPC::Runtime::ASM::bl(fn_800F6134);
/*800FB0E0 000F7EE0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r27));
/*800FB0E4 000F7EE4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800FB0E8 000F7EE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB0EC 000F7EEC*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800FB0F0 000F7EF0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*800FB0F4 000F7EF4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB0F8 000F7EF8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*800FB0FC 000F7EFC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800FB100 000F7F00*/ PPC::Runtime::ASM::bl(fn_800F5F88);
/*800FB104 000F7F04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB108 000F7F08*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800FB10C 000F7F0C*/ PPC::Runtime::ASM::bl(fn_800F6030);
/*800FB110 000F7F10*/ PPC::Runtime::ASM::b(.L_800FB290);
RUNTIME_PPC_JUMP_LABEL(.L_800FB114, 0x800FB114) //this is a jump label
/*800FB114 000F7F14*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*800FB118 000F7F18*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FB11C 000F7F1C*/ PPC::Runtime::ASM::bl(fn_800F6090);
/*800FB120 000F7F20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FB124 000F7F24*/ PPC::Runtime::ASM::bne(.L_800FB13C);
/*800FB128 000F7F28*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1001 @ Get_MemoryOffset_HighBit);
/*800FB12C 000F7F2C*/ PPC::Runtime::ASM::li(context->r4, 0xbc);
/*800FB130 000F7F30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1001 @ Get_MemoryOffset_LowBit);
/*800FB134 000F7F34*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6220 @ Get_MemoryOffset_SDA21);
/*800FB138 000F7F38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FB13C, 0x800FB13C) //this is a jump label
/*800FB13C 000F7F3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*800FB140 000F7F40*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB144 000F7F44*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r27));
/*800FB148 000F7F48*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800FB14C 000F7F4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FB150 000F7F50*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FB154 000F7F54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF8D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB158 000F7F58*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*800FB15C 000F7F5C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r27));
/*800FB160 000F7F60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*800FB164 000F7F64*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB168 000F7F68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB16C 000F7F6C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*800FB170 000F7F70*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f0);
/*800FB174 000F7F74*/ PPC::Runtime::ASM::bl(fn_800F579C);
/*800FB178 000F7F78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB17C 000F7F7C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB180 000F7F80*/ PPC::Runtime::ASM::bl(fn_800F5C68);
/*800FB184 000F7F84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*800FB188 000F7F88*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800FB18C 000F7F8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r27));
/*800FB190 000F7F90*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800FB194 000F7F94*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800FB198 000F7F98*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800FB19C 000F7F9C*/ PPC::Runtime::ASM::fdivs(context->f2, context->f1, context->f0);
/*800FB1A0 000F7FA0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF8D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB1A4 000F7FA4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800FB1A8 000F7FA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB1AC 000F7FAC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*800FB1B0 000F7FB0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FB1B4 000F7FB4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*800FB1B8 000F7FB8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f4);
/*800FB1BC 000F7FBC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f0, context->f4);
/*800FB1C0 000F7FC0*/ PPC::Runtime::ASM::bl(fn_800F5F88);
/*800FB1C4 000F7FC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FB1C8 000F7FC8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800FB1CC 000F7FCC*/ PPC::Runtime::ASM::bl(fn_800F6030);
/*800FB1D0 000F7FD0*/ PPC::Runtime::ASM::b(.L_800FB290);
RUNTIME_PPC_JUMP_LABEL(.L_800FB1D4, 0x800FB1D4) //this is a jump label
/*800FB1D4 000F7FD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r31));
/*800FB1D8 000F7FD8*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
/* 800FB1DC 000F7FDC  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800FB1E0 000F7FE0*/ PPC::Runtime::ASM::beq(.L_800FB1F0);
/*800FB1E4 000F7FE4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB1E8 000F7FE8*/ PPC::Runtime::ASM::bl(fn_800FB494);
/*800FB1EC 000F7FEC*/ PPC::Runtime::ASM::b(.L_800FB290);
RUNTIME_PPC_JUMP_LABEL(.L_800FB1F0, 0x800FB1F0) //this is a jump label
/*800FB1F0 000F7FF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FB1F4 000F7FF4*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*800FB1F8 000F7FF8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB1FC 000F7FFC*/ PPC::Runtime::ASM::mr(context->r23, context->r31);
/*800FB200 000F8000*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FB204 000F8004*/ PPC::Runtime::ASM::mr(context->r26, context->r25);
/*800FB208 000F8008*/ PPC::Runtime::ASM::mr(context->r27, context->r25);
/*800FB20C 000F800C*/ PPC::Runtime::ASM::mr(context->r28, context->r25);
/*800FB210 000F8010*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800FB214 000F8014*/ PPC::Runtime::ASM::mr(context->r29, context->r25);
RUNTIME_PPC_JUMP_LABEL(.L_800FB218, 0x800FB218) //this is a jump label
/*800FB218 000F8018*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r23));
/*800FB21C 000F801C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r23));
/*800FB220 000F8020*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r27);
/*800FB224 000F8024*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r26);
/*800FB228 000F8028*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*800FB22C 000F802C*/ PPC::Runtime::ASM::beq(.L_800FB23C);
/*800FB230 000F8030*/ PPC::Runtime::ASM::bl(fn_800F72AC);
/*800FB234 000F8034*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r23));
/*800FB238 000F8038*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_800FB23C, 0x800FB23C) //this is a jump label
/*800FB23C 000F803C*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
/*800FB240 000F8040*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x8);
/*800FB244 000F8044*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x3);
/*800FB248 000F8048*/ PPC::Runtime::ASM::blt(.L_800FB218);
/*800FB24C 000F804C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800FB250 000F8050*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800FB254 000F8054*/ PPC::Runtime::ASM::ble(.L_800FB264);
/*800FB258 000F8058*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*800FB25C 000F805C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FB260 000F8060*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FB264, 0x800FB264) //this is a jump label
/*800FB264 000F8064*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FB268 000F8068*/ PPC::Runtime::ASM::bl(fn_8022FFA8);
/*800FB26C 000F806C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB270 000F8070*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FB274 000F8074*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r24));
/*800FB278 000F8078*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800FB27C 000F807C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FB280 000F8080*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF8D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB284 000F8084*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800FB288 000F8088*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FB28C 000F808C*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_800FB290, 0x800FB290) //this is a jump label
/*800FB290 000F8090*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800FB294 000F8094*/ PPC::Runtime::ASM::b(.L_800FB29C);
RUNTIME_PPC_JUMP_LABEL(.L_800FB298, 0x800FB298) //this is a jump label
/*800FB298 000F8098*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FB29C, 0x800FB29C) //this is a jump label
/*800FB29C 000F809C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800FB2A0 000F80A0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800FB2A4 000F80A4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800FB2A8 000F80A8*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*800FB2AC 000F80AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800FB2B0 000F80B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FB2B4 000F80B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800FB2B8 000F80B8*/ PPC::Runtime::ASM::blr();
}