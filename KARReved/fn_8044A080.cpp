//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803EE8B8.hpp"
#include "fn_803EF060.hpp"
#include "fn___assert.hpp"
#include "fn___assert.hpp"



void fn_8044A080(PPC::Runtime::GCContext* context)
{
/*8044A080 00446E80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8044A084 00446E84*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044A088 00446E88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8044A08C 00446E8C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8044A090 00446E90*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8044A094 00446E94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8044A098 00446E98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044A09C 00446E9C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044A0A0 00446EA0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8044A0A4 00446EA4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8044A0A8 00446EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8044A0AC 00446EAC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044A0B0 00446EB0*/ PPC::Runtime::ASM::beq(.L_8044A0E0);
/*8044A0B4 00446EB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*8044A0B8 00446EB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8044A0BC 00446EBC*/ PPC::Runtime::ASM::beq(.L_8044A0C8);
/*8044A0C0 00446EC0*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E6168 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044A0C4 00446EC4*/ PPC::Runtime::ASM::b(.L_8044A120);
RUNTIME_PPC_JUMP_LABEL(.L_8044A0C8, 0x8044A0C8) //this is a jump label
/*8044A0C8 00446EC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8044A0CC 00446ECC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8044A0D0 00446ED0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8044A0D4 00446ED4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8044A0D8 00446ED8*/ PPC::Runtime::ASM::fmuls(context->f31, context->f2, context->f0);
/*8044A0DC 00446EDC*/ PPC::Runtime::ASM::b(.L_8044A120);
RUNTIME_PPC_JUMP_LABEL(.L_8044A0E0, 0x8044A0E0) //this is a jump label
/*8044A0E0 00446EE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8044A0E4 00446EE4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8044A0E8 00446EE8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x146, context->r3));
/*8044A0EC 00446EEC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8044A0F0 00446EF0*/ PPC::Runtime::ASM::bne(.L_8044A120);
/*8044A0F4 00446EF4*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*8044A0F8 00446EF8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8044A0FC 00446EFC*/ PPC::Runtime::ASM::b(.L_8044A114);
RUNTIME_PPC_JUMP_LABEL(.L_8044A100, 0x8044A100) //this is a jump label
/*8044A100 00446F00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8044A104 00446F04*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8044A108 00446F08*/ PPC::Runtime::ASM::bl(fn_803EE8B8);
/*8044A10C 00446F0C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8044A110 00446F10*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044A114, 0x8044A114) //this is a jump label
/*8044A114 00446F14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*8044A118 00446F18*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8044A11C 00446F1C*/ PPC::Runtime::ASM::blt(.L_8044A100);
RUNTIME_PPC_JUMP_LABEL(.L_8044A120, 0x8044A120) //this is a jump label
/*8044A120 00446F20*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*8044A124 00446F24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 28, 28);
/*8044A128 00446F28*/ PPC::Runtime::ASM::bne(.L_8044A194);
/*8044A12C 00446F2C*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*8044A130 00446F30*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8044A134 00446F34*/ PPC::Runtime::ASM::b(.L_8044A188);
RUNTIME_PPC_JUMP_LABEL(.L_8044A138, 0x8044A138) //this is a jump label
/*8044A138 00446F38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8044A13C 00446F3C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8044A140 00446F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044A144 00446F44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 13, 13);
/*8044A148 00446F48*/ PPC::Runtime::ASM::beq(.L_8044A150);
/*8044A14C 00446F4C*/ PPC::Runtime::ASM::li(context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044A150, 0x8044A150) //this is a jump label
/*8044A150 00446F50*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8044A154 00446F54*/ PPC::Runtime::ASM::bl(fn_803EF060);
/*8044A158 00446F58*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8044A15C 00446F5C*/ PPC::Runtime::ASM::beq(.L_8044A180);
/*8044A160 00446F60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8044A164 00446F64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044A168 00446F68*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 13, 11);
/*8044A16C 00446F6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044A170 00446F70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8044A174 00446F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044A178 00446F78*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x4);
/*8044A17C 00446F7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8044A180, 0x8044A180) //this is a jump label
/*8044A180 00446F80*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8044A184 00446F84*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044A188, 0x8044A188) //this is a jump label
/*8044A188 00446F88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*8044A18C 00446F8C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8044A190 00446F90*/ PPC::Runtime::ASM::blt(.L_8044A138);
RUNTIME_PPC_JUMP_LABEL(.L_8044A194, 0x8044A194) //this is a jump label
/*8044A194 00446F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8044A198 00446F98*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044A19C 00446F9C*/ PPC::Runtime::ASM::beq(.L_8044A228);
/*8044A1A0 00446FA0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8044A1A4 00446FA4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8044A1A8 00446FA8*/ PPC::Runtime::ASM::beq(.L_8044A228);
/*8044A1AC 00446FAC*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x98);
/*8044A1B0 00446FB0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_HighBit);
/*8044A1B4 00446FB4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180597660 @ Get_MemoryOffset_LowBit);
/*8044A1B8 00446FB8*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r4);
/*8044A1BC 00446FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8044A1C0 00446FC0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044A1C4 00446FC4*/ PPC::Runtime::ASM::beq(.L_8044A1DC);
/*8044A1C8 00446FC8*/ PPC::Runtime::ASM::lis(context->r4, lbl_80509398 @ Get_MemoryOffset_HighBit);
/*8044A1CC 00446FCC*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044A1D0 00446FD0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80509398 @ Get_MemoryOffset_LowBit);
/*8044A1D4 00446FD4*/ PPC::Runtime::ASM::li(context->r4, 0x86f);
/*8044A1D8 00446FD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044A1DC, 0x8044A1DC) //this is a jump label
/*8044A1DC 00446FDC*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r28));
/*8044A1E0 00446FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8044A1E4 00446FE4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044A1E8 00446FE8*/ PPC::Runtime::ASM::beq(.L_8044A200);
/*8044A1EC 00446FEC*/ PPC::Runtime::ASM::lis(context->r4, lbl_80509398 @ Get_MemoryOffset_HighBit);
/*8044A1F0 00446FF0*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044A1F4 00446FF4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80509398 @ Get_MemoryOffset_LowBit);
/*8044A1F8 00446FF8*/ PPC::Runtime::ASM::li(context->r4, 0x845);
/*8044A1FC 00446FFC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044A200, 0x8044A200) //this is a jump label
/*8044A200 00447000*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE50C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044A204 00447004*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*8044A208 00447008*/ PPC::Runtime::ASM::b(.L_8044A218);
RUNTIME_PPC_JUMP_LABEL(.L_8044A20C, 0x8044A20C) //this is a jump label
/*8044A20C 0044700C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8044A210 00447010*/ PPC::Runtime::ASM::beq(.L_8044A228);
/*8044A214 00447014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8044A218, 0x8044A218) //this is a jump label
/*8044A218 00447018*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8044A21C 0044701C*/ PPC::Runtime::ASM::bne(.L_8044A20C);
/*8044A220 00447020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8044A224 00447024*/ PPC::Runtime::ASM::stw(context->r28, STRUCT_BYTE4_COUNT_1805DE50C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044A228, 0x8044A228) //this is a jump label
/*8044A228 00447028*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8044A22C 0044702C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8044A230 00447030*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8044A234 00447034*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8044A238 00447038*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044A23C 0044703C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044A240 00447040*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8044A244 00447044*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044A248 00447048*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8044A24C 0044704C*/ PPC::Runtime::ASM::blr();
}