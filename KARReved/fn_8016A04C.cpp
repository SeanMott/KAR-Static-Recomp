//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80169E60.hpp"
#include "fn_80169E60.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80167EF8.hpp"



void fn_8016A04C(PPC::Runtime::GCContext* context)
{
/*8016A04C 00166E4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8016A050 00166E50*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016A054 00166E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8016A058 00166E58*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8016A05C 00166E5C*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8016A060 00166E60*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8016A064 00166E64*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8016A068 00166E68*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8016A06C 00166E6C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016A070 00166E70*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xaa0);
/*8016A074 00166E74*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8016A078 00166E78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa0, context->r3));
/*8016A07C 00166E7C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8016A080 00166E80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016A084 00166E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016A088 00166E88*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8016A08C 00166E8C*/ PPC::Runtime::ASM::lis(context->r4, fn_80169E60 @ Get_MemoryOffset_HighBit);
/*8016A090 00166E90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016A094 00166E94*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016A098 00166E98*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8016A09C 00166E9C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80169E60 @ Get_MemoryOffset_LowBit);
/*8016A0A0 00166EA0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8016A0A4 00166EA4*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*8016A0A8 00166EA8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8016A0AC 00166EAC*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0xa);
/*8016A0B0 00166EB0*/ PPC::Runtime::ASM::extsb(context->r5, context->r28);
/*8016A0B4 00166EB4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8016A0B8 00166EB8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016A0BC 00166EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016A0C0 00166EC0*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r4);
/*8016A0C4 00166EC4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8016A0C8 00166EC8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0AF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016A0CC 00166ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016A0D0 00166ED0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8016A0D4 00166ED4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016A0D8 00166ED8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016A0DC 00166EDC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*8016A0E0 00166EE0*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8016A0E4 00166EE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016A0E8 00166EE8*/ PPC::Runtime::ASM::li(context->r4, 0x79);
/*8016A0EC 00166EEC*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8016A0F0 00166EF0*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x4);
/*8016A0F4 00166EF4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8016A0F8 00166EF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8016A0FC 00166EFC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8016A100 00166F00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016A104 00166F04*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r25));
/*8016A108 00166F08*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r25));
/*8016A10C 00166F0C*/ PPC::Runtime::ASM::bl(fn_80167EF8);
/*8016A110 00166F10*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8016A114 00166F14*/ PPC::Runtime::ASM::bne(.L_8016A128);
/*8016A118 00166F18*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B68 @ Get_MemoryOffset_SDA21);
/*8016A11C 00166F1C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8016A120 00166F20*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B70 @ Get_MemoryOffset_SDA21);
/*8016A124 00166F24*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A128, 0x8016A128) //this is a jump label
/*8016A128 00166F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016A12C 00166F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016A130 00166F30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8016A134 00166F34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8016A138 00166F38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016A13C 00166F3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8016A140 00166F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8016A144 00166F44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8016A148 00166F48*/ PPC::Runtime::ASM::bne(.L_8016A194);
/*8016A14C 00166F4C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8016A150 00166F50*/ PPC::Runtime::ASM::beq(.L_8016A194);
/*8016A154 00166F54*/ PPC::Runtime::ASM::bne(.L_8016A168);
/*8016A158 00166F58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B68 @ Get_MemoryOffset_SDA21);
/*8016A15C 00166F5C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8016A160 00166F60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B70 @ Get_MemoryOffset_SDA21);
/*8016A164 00166F64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016A168, 0x8016A168) //this is a jump label
/*8016A168 00166F68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8016A16C 00166F6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016A170 00166F70*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8016A174 00166F74*/ PPC::Runtime::ASM::bne(.L_8016A184);
/*8016A178 00166F78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016A17C 00166F7C*/ PPC::Runtime::ASM::beq(.L_8016A184);
/*8016A180 00166F80*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8016A184, 0x8016A184) //this is a jump label
/*8016A184 00166F84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016A188 00166F88*/ PPC::Runtime::ASM::bne(.L_8016A194);
/*8016A18C 00166F8C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016A190 00166F90*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8016A194, 0x8016A194) //this is a jump label
/*8016A194 00166F94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*8016A198 00166F98*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016A19C 00166F9C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016A1A0 00166FA0*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8016A1A4 00166FA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8016A1A8 00166FA8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8016A1AC 00166FAC*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8016A1B0 00166FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8016A1B4 00166FB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016A1B8 00166FB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8016A1BC 00166FBC*/ PPC::Runtime::ASM::blr();
}