//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_vResetJoyValues.hpp"
#include "fn_801DC534.hpp"



void fn_801CA00C(PPC::Runtime::GCContext* context)
{
/*801CA00C 001C6E0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801CA010 001C6E10*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CA014 001C6E14*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA018 001C6E18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CA01C 001C6E1C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801CA020 001C6E20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CA024 001C6E24*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CA028 001C6E28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CA02C 001C6E2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x754, context->r3));
/*801CA030 001C6E30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801CA034 001C6E34*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb74, context->r3));
/*801CA038 001C6E38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb78, context->r3));
/*801CA03C 001C6E3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8c, context->r3));
/*801CA040 001C6E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb88, context->r3));
/*801CA044 001C6E44*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ac, context->r3));
/*801CA048 001C6E48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r3));
/*801CA04C 001C6E4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x758, context->r3));
/*801CA050 001C6E50*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r3));
/*801CA054 001C6E54*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9c, context->r3));
/*801CA058 001C6E58*/ PPC::Runtime::ASM::bl(fn_vResetJoyValues);
/*801CA05C 001C6E5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CA060 001C6E60*/ PPC::Runtime::ASM::bl(fn_801DC534);
/*801CA064 001C6E64*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA068 001C6E68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801CA06C 001C6E6C*/ PPC::Runtime::ASM::beq(.L_801CA090);
/*801CA070 001C6E70*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801CA074 001C6E74*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7);
/*801CA078 001C6E78*/ PPC::Runtime::ASM::ble(.L_801CA090);
/*801CA07C 001C6E7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc38, context->r31));
/*801CA080 001C6E80*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801CA084 001C6E84*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*801CA088 001C6E88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc38, context->r31));
/*801CA08C 001C6E8C*/ PPC::Runtime::ASM::b(.L_801CA210);
RUNTIME_PPC_JUMP_LABEL(.L_801CA090, 0x801CA090) //this is a jump label
/*801CA090 001C6E90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r31));
/*801CA094 001C6E94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r31));
/*801CA098 001C6E98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA09C 001C6E9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x418, context->r31));
/*801CA0A0 001C6EA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41c, context->r31));
/*801CA0A4 001C6EA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r31));
/*801CA0A8 001C6EA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CA0AC 001C6EAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x420, context->r31));
/*801CA0B0 001C6EB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x448, context->r31));
/*801CA0B4 001C6EB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44c, context->r31));
/*801CA0B8 001C6EB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA0BC 001C6EBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r31));
/*801CA0C0 001C6EC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x428, context->r31));
/*801CA0C4 001C6EC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x450, context->r31));
/*801CA0C8 001C6EC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CA0CC 001C6ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42c, context->r31));
/*801CA0D0 001C6ED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r31));
/*801CA0D4 001C6ED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x458, context->r31));
/*801CA0D8 001C6ED8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x430, context->r31));
/*801CA0DC 001C6EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x434, context->r31));
/*801CA0E0 001C6EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45c, context->r31));
/*801CA0E4 001C6EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x438, context->r31));
/*801CA0E8 001C6EE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801CA0EC 001C6EEC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801CA0F0 001C6EF0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801CA0F4 001C6EF4*/ PPC::Runtime::ASM::bne(.L_801CA108);
/*801CA0F8 001C6EF8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801CA0FC 001C6EFC*/ PPC::Runtime::ASM::li(context->r4, 0x290);
/*801CA100 001C6F00*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801CA104 001C6F04*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801CA108, 0x801CA108) //this is a jump label
/*801CA108 001C6F08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CA10C 001C6F0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA110 001C6F10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*801CA114 001C6F14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CA118 001C6F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801CA11C 001C6F1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA120 001C6F20*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801CA124 001C6F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*801CA128 001C6F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801CA12C 001C6F2C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801CA130 001C6F30*/ PPC::Runtime::ASM::bne(.L_801CA17C);
/*801CA134 001C6F34*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801CA138 001C6F38*/ PPC::Runtime::ASM::beq(.L_801CA17C);
/*801CA13C 001C6F3C*/ PPC::Runtime::ASM::bne(.L_801CA150);
/*801CA140 001C6F40*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801CA144 001C6F44*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801CA148 001C6F48*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801CA14C 001C6F4C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801CA150, 0x801CA150) //this is a jump label
/*801CA150 001C6F50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801CA154 001C6F54*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CA158 001C6F58*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801CA15C 001C6F5C*/ PPC::Runtime::ASM::bne(.L_801CA16C);
/*801CA160 001C6F60*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801CA164 001C6F64*/ PPC::Runtime::ASM::beq(.L_801CA16C);
/*801CA168 001C6F68*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801CA16C, 0x801CA16C) //this is a jump label
/*801CA16C 001C6F6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CA170 001C6F70*/ PPC::Runtime::ASM::bne(.L_801CA17C);
/*801CA174 001C6F74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CA178 001C6F78*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801CA17C, 0x801CA17C) //this is a jump label
/*801CA17C 001C6F7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801CA180 001C6F80*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801CA184 001C6F84*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801CA188 001C6F88*/ PPC::Runtime::ASM::bne(.L_801CA19C);
/*801CA18C 001C6F8C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801CA190 001C6F90*/ PPC::Runtime::ASM::li(context->r4, 0x290);
/*801CA194 001C6F94*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801CA198 001C6F98*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801CA19C, 0x801CA19C) //this is a jump label
/*801CA19C 001C6F9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CA1A0 001C6FA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA1A4 001C6FA4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*801CA1A8 001C6FA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CA1AC 001C6FAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801CA1B0 001C6FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA1B4 001C6FB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801CA1B8 001C6FB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*801CA1BC 001C6FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801CA1C0 001C6FC0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801CA1C4 001C6FC4*/ PPC::Runtime::ASM::bne(.L_801CA210);
/*801CA1C8 001C6FC8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801CA1CC 001C6FCC*/ PPC::Runtime::ASM::beq(.L_801CA210);
/*801CA1D0 001C6FD0*/ PPC::Runtime::ASM::bne(.L_801CA1E4);
/*801CA1D4 001C6FD4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801CA1D8 001C6FD8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801CA1DC 001C6FDC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801CA1E0 001C6FE0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801CA1E4, 0x801CA1E4) //this is a jump label
/*801CA1E4 001C6FE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801CA1E8 001C6FE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CA1EC 001C6FEC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801CA1F0 001C6FF0*/ PPC::Runtime::ASM::bne(.L_801CA200);
/*801CA1F4 001C6FF4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801CA1F8 001C6FF8*/ PPC::Runtime::ASM::beq(.L_801CA200);
/*801CA1FC 001C6FFC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801CA200, 0x801CA200) //this is a jump label
/*801CA200 001C7000*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CA204 001C7004*/ PPC::Runtime::ASM::bne(.L_801CA210);
/*801CA208 001C7008*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801CA20C 001C700C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801CA210, 0x801CA210) //this is a jump label
/*801CA210 001C7010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801CA214 001C7014*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801CA218 001C7018*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CA21C 001C701C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801CA220 001C7020*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801CA224 001C7024*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*801CA228 001C7028*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r5));
/*801CA22C 001C702C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801CA230 001C7030*/ PPC::Runtime::ASM::bctrl();
/*801CA234 001C7034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CA238 001C7038*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CA23C 001C703C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CA240 001C7040*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CA244 001C7044*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801CA248 001C7048*/ PPC::Runtime::ASM::blr();
}