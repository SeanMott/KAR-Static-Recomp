//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F1C24.hpp"
#include "fn_801F1C24.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_801F1E8C(PPC::Runtime::GCContext* context)
{
/*801F1E8C 001EEC8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xa0, context->r1));
/*801F1E90 001EEC90*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F1E94 001EEC94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*801F1E98 001EEC98*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*801F1E9C 001EEC9C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*801F1EA0 001EECA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*801F1EA4 001EECA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*801F1EA8 001EECA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*801F1EAC 001EECAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r3));
/*801F1EB0 001EECB0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/* 801F1EB4 001EECB4  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801F1EB8 001EECB8*/ PPC::Runtime::ASM::bne(.L_801F23D4);
/*801F1EBC 001EECBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801F1EC0 001EECC0*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD850 @ Get_MemoryOffset_SDA21);
/*801F1EC4 001EECC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F1EC8 001EECC8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801F1ECC 001EECCC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801F1ED0 001EECD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801F1ED4 001EECD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801F1ED8 001EECD8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801F1EDC 001EECDC*/ PPC::Runtime::ASM::lwzx(context->r31, context->r4, context->r0);
/*801F1EE0 001EECE0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1EE4 001EECE4*/ PPC::Runtime::ASM::bne(.L_801F1EF8);
/*801F1EE8 001EECE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1EEC 001EECEC*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801F1EF0 001EECF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1EF4 001EECF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1EF8, 0x801F1EF8) //this is a jump label
/*801F1EF8 001EECF8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1EFC 001EECFC*/ PPC::Runtime::ASM::beq(.L_801F1F40);
/*801F1F00 001EED00*/ PPC::Runtime::ASM::bne(.L_801F1F14);
/*801F1F04 001EED04*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1F08 001EED08*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F1F0C 001EED0C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1F10 001EED10*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1F14, 0x801F1F14) //this is a jump label
/*801F1F14 001EED14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801F1F18 001EED18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F1F1C 001EED1C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F1F20 001EED20*/ PPC::Runtime::ASM::bne(.L_801F1F30);
/*801F1F24 001EED24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F1F28 001EED28*/ PPC::Runtime::ASM::beq(.L_801F1F30);
/*801F1F2C 001EED2C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F1F30, 0x801F1F30) //this is a jump label
/*801F1F30 001EED30*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F1F34 001EED34*/ PPC::Runtime::ASM::beq(.L_801F1F40);
/*801F1F38 001EED38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F1F3C 001EED3C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_801F1F40, 0x801F1F40) //this is a jump label
/*801F1F40 001EED40*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*801F1F44 001EED44*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801F1F48 001EED48*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetRotation);
/*801F1F4C 001EED4C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ad8);
/*801F1F50 001EED50*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801F1F54 001EED54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2008 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F1F58 001EED58*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801F1F5C 001EED5C*/ PPC::Runtime::ASM::beq(.L_801F2104);
/*801F1F60 001EED60*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1F64 001EED64*/ PPC::Runtime::ASM::bne(.L_801F1F78);
/*801F1F68 001EED68*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1F6C 001EED6C*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801F1F70 001EED70*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1F74 001EED74*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1F78, 0x801F1F78) //this is a jump label
/*801F1F78 001EED78*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1F7C 001EED7C*/ PPC::Runtime::ASM::beq(.L_801F1FC0);
/*801F1F80 001EED80*/ PPC::Runtime::ASM::bne(.L_801F1F94);
/*801F1F84 001EED84*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1F88 001EED88*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F1F8C 001EED8C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1F90 001EED90*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1F94, 0x801F1F94) //this is a jump label
/*801F1F94 001EED94*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801F1F98 001EED98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F1F9C 001EED9C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F1FA0 001EEDA0*/ PPC::Runtime::ASM::bne(.L_801F1FB0);
/*801F1FA4 001EEDA4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F1FA8 001EEDA8*/ PPC::Runtime::ASM::beq(.L_801F1FB0);
/*801F1FAC 001EEDAC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F1FB0, 0x801F1FB0) //this is a jump label
/*801F1FB0 001EEDB0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F1FB4 001EEDB4*/ PPC::Runtime::ASM::beq(.L_801F1FC0);
/*801F1FB8 001EEDB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F1FBC 001EEDBC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_801F1FC0, 0x801F1FC0) //this is a jump label
/*801F1FC0 001EEDC0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*801F1FC4 001EEDC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*801F1FC8 001EEDC8*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetScale);
/*801F1FCC 001EEDCC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1FD0 001EEDD0*/ PPC::Runtime::ASM::bne(.L_801F1FE4);
/*801F1FD4 001EEDD4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1FD8 001EEDD8*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801F1FDC 001EEDDC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1FE0 001EEDE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1FE4, 0x801F1FE4) //this is a jump label
/*801F1FE4 001EEDE4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1FE8 001EEDE8*/ PPC::Runtime::ASM::beq(.L_801F202C);
/*801F1FEC 001EEDEC*/ PPC::Runtime::ASM::bne(.L_801F2000);
/*801F1FF0 001EEDF0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1FF4 001EEDF4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F1FF8 001EEDF8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1FFC 001EEDFC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2000, 0x801F2000) //this is a jump label
/*801F2000 001EEE00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801F2004 001EEE04*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F2008 001EEE08*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F200C 001EEE0C*/ PPC::Runtime::ASM::bne(.L_801F201C);
/*801F2010 001EEE10*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F2014 001EEE14*/ PPC::Runtime::ASM::beq(.L_801F201C);
/*801F2018 001EEE18*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F201C, 0x801F201C) //this is a jump label
/*801F201C 001EEE1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F2020 001EEE20*/ PPC::Runtime::ASM::beq(.L_801F202C);
/*801F2024 001EEE24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F2028 001EEE28*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_801F202C, 0x801F202C) //this is a jump label
/*801F202C 001EEE2C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*801F2030 001EEE30*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*801F2034 001EEE34*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetTranslate);
/*801F2038 001EEE38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x48);
/*801F203C 001EEE3C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*801F2040 001EEE40*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1b0c);
/*801F2044 001EEE44*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x18);
/*801F2048 001EEE48*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801F204C 001EEE4C*/ PPC::Runtime::ASM::bl(fn_HSD_MtxSRT);
/*801F2050 001EEE50*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x48);
/*801F2054 001EEE54*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801F2058 001EEE58*/ PPC::Runtime::ASM::bl(fn_PSMTXInverse);
/*801F205C 001EEE5C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x48);
/*801F2060 001EEE60*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1ad8);
/*801F2064 001EEE64*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x3c);
/*801F2068 001EEE68*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*801F206C 001EEE6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x48);
/*801F2070 001EEE70*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1ae4);
/*801F2074 001EEE74*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x30);
/*801F2078 001EEE78*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*801F207C 001EEE7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801F2080 001EEE80*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1ac0);
/*801F2084 001EEE84*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1af0);
/*801F2088 001EEE88*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x3c);
/*801F208C 001EEE8C*/ PPC::Runtime::ASM::bl(fn_801F1C24);
/*801F2090 001EEE90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801F2094 001EEE94*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1acc);
/*801F2098 001EEE98*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1afc);
/*801F209C 001EEE9C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x30);
/*801F20A0 001EEEA0*/ PPC::Runtime::ASM::bl(fn_801F1C24);
/*801F20A4 001EEEA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2038 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F20A8 001EEEA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r30));
/*801F20AC 001EEEAC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b08, context->r30));
/*801F20B0 001EEEB0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f0);
/*801F20B4 001EEEB4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2008 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F20B8 001EEEB8*/ PPC::Runtime::ASM::fsubs(context->f3, context->f2, context->f4);
/*801F20BC 001EEEBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*801F20C0 001EEEC0*/ PPC::Runtime::ASM::bge(.L_801F20CC);
/*801F20C4 001EEEC4*/ PPC::Runtime::ASM::fneg(context->f0, context->f3);
/*801F20C8 001EEEC8*/ PPC::Runtime::ASM::b(.L_801F20D0);
RUNTIME_PPC_JUMP_LABEL(.L_801F20CC, 0x801F20CC) //this is a jump label
/*801F20CC 001EEECC*/ PPC::Runtime::ASM::fmr(context->f0, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_801F20D0, 0x801F20D0) //this is a jump label
/*801F20D0 001EEED0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E203C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F20D4 001EEED4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801F20D8 001EEED8*/ PPC::Runtime::ASM::ble(.L_801F20F0);
/*801F20DC 001EEEDC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f4);
/*801F20E0 001EEEE0*/ PPC::Runtime::ASM::ble(.L_801F20E8);
/*801F20E4 001EEEE4*/ PPC::Runtime::ASM::b(.L_801F20F4);
RUNTIME_PPC_JUMP_LABEL(.L_801F20E8, 0x801F20E8) //this is a jump label
/*801F20E8 001EEEE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2040 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F20EC 001EEEEC*/ PPC::Runtime::ASM::b(.L_801F20F4);
RUNTIME_PPC_JUMP_LABEL(.L_801F20F0, 0x801F20F0) //this is a jump label
/*801F20F0 001EEEF0*/ PPC::Runtime::ASM::fmr(context->f1, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_801F20F4, 0x801F20F4) //this is a jump label
/*801F20F4 001EEEF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b08, context->r30));
/*801F20F8 001EEEF8*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*801F20FC 001EEEFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b08, context->r30));
/*801F2100 001EEF00*/ PPC::Runtime::ASM::b(.L_801F2134);
RUNTIME_PPC_JUMP_LABEL(.L_801F2104, 0x801F2104) //this is a jump label
/*801F2104 001EEF04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac0, context->r30));
/*801F2108 001EEF08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801F210C 001EEF0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac4, context->r30));
/*801F2110 001EEF10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801F2114 001EEF14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac8, context->r30));
/*801F2118 001EEF18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F211C 001EEF1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1acc, context->r30));
/*801F2120 001EEF20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801F2124 001EEF24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ad0, context->r30));
/*801F2128 001EEF28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F212C 001EEF2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ad4, context->r30));
/*801F2130 001EEF30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801F2134, 0x801F2134) //this is a jump label
/*801F2134 001EEF34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F2138 001EEF38*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*801F213C 001EEF3C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F2140 001EEF40*/ PPC::Runtime::ASM::bne(.L_801F2154);
/*801F2144 001EEF44*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F2148 001EEF48*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801F214C 001EEF4C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F2150 001EEF50*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2154, 0x801F2154) //this is a jump label
/*801F2154 001EEF54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801F2158 001EEF58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801F215C 001EEF5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*801F2160 001EEF60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*801F2164 001EEF64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F2168 001EEF68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*801F216C 001EEF6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F2170 001EEF70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801F2174 001EEF74*/ PPC::Runtime::ASM::bne(.L_801F21C0);
/*801F2178 001EEF78*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F217C 001EEF7C*/ PPC::Runtime::ASM::beq(.L_801F21C0);
/*801F2180 001EEF80*/ PPC::Runtime::ASM::bne(.L_801F2194);
/*801F2184 001EEF84*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F2188 001EEF88*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F218C 001EEF8C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F2190 001EEF90*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2194, 0x801F2194) //this is a jump label
/*801F2194 001EEF94*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F2198 001EEF98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F219C 001EEF9C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F21A0 001EEFA0*/ PPC::Runtime::ASM::bne(.L_801F21B0);
/*801F21A4 001EEFA4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F21A8 001EEFA8*/ PPC::Runtime::ASM::beq(.L_801F21B0);
/*801F21AC 001EEFAC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F21B0, 0x801F21B0) //this is a jump label
/*801F21B0 001EEFB0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F21B4 001EEFB4*/ PPC::Runtime::ASM::bne(.L_801F21C0);
/*801F21B8 001EEFB8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F21BC 001EEFBC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801F21C0, 0x801F21C0) //this is a jump label
/*801F21C0 001EEFC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F21C4 001EEFC4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*801F21C8 001EEFC8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F21CC 001EEFCC*/ PPC::Runtime::ASM::bne(.L_801F21E0);
/*801F21D0 001EEFD0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F21D4 001EEFD4*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801F21D8 001EEFD8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F21DC 001EEFDC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F21E0, 0x801F21E0) //this is a jump label
/*801F21E0 001EEFE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801F21E4 001EEFE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F21E8 001EEFE8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*801F21EC 001EEFEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*801F21F0 001EEFF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801F21F4 001EEFF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*801F21F8 001EEFF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F21FC 001EEFFC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801F2200 001EF000*/ PPC::Runtime::ASM::bne(.L_801F224C);
/*801F2204 001EF004*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F2208 001EF008*/ PPC::Runtime::ASM::beq(.L_801F224C);
/*801F220C 001EF00C*/ PPC::Runtime::ASM::bne(.L_801F2220);
/*801F2210 001EF010*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F2214 001EF014*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F2218 001EF018*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F221C 001EF01C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2220, 0x801F2220) //this is a jump label
/*801F2220 001EF020*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F2224 001EF024*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F2228 001EF028*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F222C 001EF02C*/ PPC::Runtime::ASM::bne(.L_801F223C);
/*801F2230 001EF030*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F2234 001EF034*/ PPC::Runtime::ASM::beq(.L_801F223C);
/*801F2238 001EF038*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F223C, 0x801F223C) //this is a jump label
/*801F223C 001EF03C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F2240 001EF040*/ PPC::Runtime::ASM::bne(.L_801F224C);
/*801F2244 001EF044*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F2248 001EF048*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801F224C, 0x801F224C) //this is a jump label
/*801F224C 001EF04C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F2250 001EF050*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2044 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F2254 001EF054*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b08, context->r30));
/*801F2258 001EF058*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*801F225C 001EF05C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*801F2260 001EF060*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F2264 001EF064*/ PPC::Runtime::ASM::bne(.L_801F2278);
/*801F2268 001EF068*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F226C 001EF06C*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*801F2270 001EF070*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F2274 001EF074*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2278, 0x801F2278) //this is a jump label
/*801F2278 001EF078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F227C 001EF07C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*801F2280 001EF080*/ PPC::Runtime::ASM::beq(.L_801F2298);
/*801F2284 001EF084*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_15 @ Get_MemoryOffset_HighBit);
/*801F2288 001EF088*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F228C 001EF08C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_15 @ Get_MemoryOffset_LowBit);
/*801F2290 001EF090*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*801F2294 001EF094*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2298, 0x801F2298) //this is a jump label
/*801F2298 001EF098*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*801F229C 001EF09C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F22A0 001EF0A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801F22A4 001EF0A4*/ PPC::Runtime::ASM::bne(.L_801F22F0);
/*801F22A8 001EF0A8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F22AC 001EF0AC*/ PPC::Runtime::ASM::beq(.L_801F22F0);
/*801F22B0 001EF0B0*/ PPC::Runtime::ASM::bne(.L_801F22C4);
/*801F22B4 001EF0B4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F22B8 001EF0B8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F22BC 001EF0BC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F22C0 001EF0C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F22C4, 0x801F22C4) //this is a jump label
/*801F22C4 001EF0C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F22C8 001EF0C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F22CC 001EF0CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F22D0 001EF0D0*/ PPC::Runtime::ASM::bne(.L_801F22E0);
/*801F22D4 001EF0D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F22D8 001EF0D8*/ PPC::Runtime::ASM::beq(.L_801F22E0);
/*801F22DC 001EF0DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F22E0, 0x801F22E0) //this is a jump label
/*801F22E0 001EF0E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F22E4 001EF0E4*/ PPC::Runtime::ASM::bne(.L_801F22F0);
/*801F22E8 001EF0E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F22EC 001EF0EC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801F22F0, 0x801F22F0) //this is a jump label
/*801F22F0 001EF0F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F22F4 001EF0F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2044 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F22F8 001EF0F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b08, context->r30));
/*801F22FC 001EF0FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*801F2300 001EF100*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*801F2304 001EF104*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F2308 001EF108*/ PPC::Runtime::ASM::bne(.L_801F231C);
/*801F230C 001EF10C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F2310 001EF110*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*801F2314 001EF114*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F2318 001EF118*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F231C, 0x801F231C) //this is a jump label
/*801F231C 001EF11C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F2320 001EF120*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*801F2324 001EF124*/ PPC::Runtime::ASM::beq(.L_801F233C);
/*801F2328 001EF128*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_15 @ Get_MemoryOffset_HighBit);
/*801F232C 001EF12C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F2330 001EF130*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_15 @ Get_MemoryOffset_LowBit);
/*801F2334 001EF134*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*801F2338 001EF138*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F233C, 0x801F233C) //this is a jump label
/*801F233C 001EF13C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*801F2340 001EF140*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F2344 001EF144*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801F2348 001EF148*/ PPC::Runtime::ASM::bne(.L_801F2394);
/*801F234C 001EF14C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801F2350 001EF150*/ PPC::Runtime::ASM::beq(.L_801F2394);
/*801F2354 001EF154*/ PPC::Runtime::ASM::bne(.L_801F2368);
/*801F2358 001EF158*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F235C 001EF15C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801F2360 001EF160*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F2364 001EF164*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F2368, 0x801F2368) //this is a jump label
/*801F2368 001EF168*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801F236C 001EF16C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F2370 001EF170*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801F2374 001EF174*/ PPC::Runtime::ASM::bne(.L_801F2384);
/*801F2378 001EF178*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801F237C 001EF17C*/ PPC::Runtime::ASM::beq(.L_801F2384);
/*801F2380 001EF180*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F2384, 0x801F2384) //this is a jump label
/*801F2384 001EF184*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F2388 001EF188*/ PPC::Runtime::ASM::bne(.L_801F2394);
/*801F238C 001EF18C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F2390 001EF190*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801F2394, 0x801F2394) //this is a jump label
/*801F2394 001EF194*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F2398 001EF198*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1ac0);
/*801F239C 001EF19C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1ad8);
/*801F23A0 001EF1A0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801F23A4 001EF1A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F23A8 001EF1A8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1acc);
/*801F23AC 001EF1AC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1ae4);
/*801F23B0 001EF1B0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801F23B4 001EF1B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801F23B8 001EF1B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0c, context->r30));
/*801F23BC 001EF1BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F23C0 001EF1C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b10, context->r30));
/*801F23C4 001EF1C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F23C8 001EF1C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b14, context->r30));
/*801F23CC 001EF1CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F23D0 001EF1D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801F23D4, 0x801F23D4) //this is a jump label
/*801F23D4 001EF1D4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*801F23D8 001EF1D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*801F23DC 001EF1DC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*801F23E0 001EF1E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*801F23E4 001EF1E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*801F23E8 001EF1E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*801F23EC 001EF1EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F23F0 001EF1F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xa0);
/*801F23F4 001EF1F4*/ PPC::Runtime::ASM::blr();
}