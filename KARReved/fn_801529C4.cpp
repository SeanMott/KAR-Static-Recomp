//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80151020.hpp"
#include "fn_80150208.hpp"
#include "fn_80150208.hpp"
#include "fn_80150208.hpp"
#include "fn_80150208.hpp"
#include "fn_80150208.hpp"



void fn_801529C4(PPC::Runtime::GCContext* context)
{
/*801529C4 0014F7C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801529C8 0014F7C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801529CC 0014F7CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801529D0 0014F7D0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801529D4 0014F7D4*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801529D8 0014F7D8*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*801529DC 0014F7DC*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*801529E0 0014F7E0*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*801529E4 0014F7E4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801529E8 0014F7E8*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*801529EC 0014F7EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801529F0 0014F7F0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801529F4 0014F7F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r3));
/*801529F8 0014F7F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801529FC 0014F7FC*/ PPC::Runtime::ASM::beq(.L_80152E74);
/*80152A00 0014F800*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80152A04 0014F804*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80152A08 0014F808*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80152A0C 0014F80C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80152A10 0014F810*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r30));
/*80152A14 0014F814*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r30));
/*80152A18 0014F818*/ PPC::Runtime::ASM::blt(.L_80152A44);
/*80152A1C 0014F81C*/ PPC::Runtime::ASM::subi(context->r0, context->r28, 0x5);
/*80152A20 0014F820*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80152A24 0014F824*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*80152A28 0014F828*/ PPC::Runtime::ASM::bl(fn_80151020);
/*80152A2C 0014F82C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80152A30 0014F830*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80152A34 0014F834*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E071C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152A38 0014F838*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80152A3C 0014F83C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80152A40 0014F840*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152A44, 0x80152A44) //this is a jump label
/*80152A44 0014F844*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80152A48 0014F848*/ PPC::Runtime::ASM::beq(.L_80152AD4);
/*80152A4C 0014F84C*/ PPC::Runtime::ASM::bge(.L_80152A60);
/*80152A50 0014F850*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80152A54 0014F854*/ PPC::Runtime::ASM::beq(.L_80152A70);
/*80152A58 0014F858*/ PPC::Runtime::ASM::bge(.L_80152A8C);
/*80152A5C 0014F85C*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152A60, 0x80152A60) //this is a jump label
/*80152A60 0014F860*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80152A64 0014F864*/ PPC::Runtime::ASM::beq(.L_80152B2C);
/*80152A68 0014F868*/ PPC::Runtime::ASM::bge(.L_80152B54);
/*80152A6C 0014F86C*/ PPC::Runtime::ASM::b(.L_80152B00);
RUNTIME_PPC_JUMP_LABEL(.L_80152A70, 0x80152A70) //this is a jump label
/*80152A70 0014F870*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x1);
/*80152A74 0014F874*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80152A78 0014F878*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
/*80152A7C 0014F87C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80152A80 0014F880*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80152A84 0014F884*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80152A88 0014F888*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152A8C, 0x80152A8C) //this is a jump label
/*80152A8C 0014F88C*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x1);
/*80152A90 0014F890*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80152A94 0014F894*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
/*80152A98 0014F898*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80152A9C 0014F89C*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80152AA0 0014F8A0*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80152AA4 0014F8A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80152AA8 0014F8A8*/ PPC::Runtime::ASM::bge(.L_80152ABC);
/*80152AAC 0014F8AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80152AB0 0014F8B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0720 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152AB4 0014F8B4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80152AB8 0014F8B8*/ PPC::Runtime::ASM::b(.L_80152AC8);
RUNTIME_PPC_JUMP_LABEL(.L_80152ABC, 0x80152ABC) //this is a jump label
/*80152ABC 0014F8BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80152AC0 0014F8C0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0720 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152AC4 0014F8C4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80152AC8, 0x80152AC8) //this is a jump label
/*80152AC8 0014F8C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80152ACC 0014F8CC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80152AD0 0014F8D0*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152AD4, 0x80152AD4) //this is a jump label
/*80152AD4 0014F8D4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80152AD8 0014F8D8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80152ADC 0014F8DC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80152AE0 0014F8E0*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80152AE4 0014F8E4*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80152AE8 0014F8E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80152AEC 0014F8EC*/ PPC::Runtime::ASM::bge(.L_80152AF8);
/*80152AF0 0014F8F0*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80152AF4 0014F8F4*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152AF8, 0x80152AF8) //this is a jump label
/*80152AF8 0014F8F8*/ PPC::Runtime::ASM::li(context->r29, 0x2);
/*80152AFC 0014F8FC*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152B00, 0x80152B00) //this is a jump label
/*80152B00 0014F900*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80152B04 0014F904*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80152B08 0014F908*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80152B0C 0014F90C*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80152B10 0014F910*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80152B14 0014F914*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80152B18 0014F918*/ PPC::Runtime::ASM::bge(.L_80152B24);
/*80152B1C 0014F91C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80152B20 0014F920*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152B24, 0x80152B24) //this is a jump label
/*80152B24 0014F924*/ PPC::Runtime::ASM::li(context->r29, 0x2);
/*80152B28 0014F928*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152B2C, 0x80152B2C) //this is a jump label
/*80152B2C 0014F92C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80152B30 0014F930*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80152B34 0014F934*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80152B38 0014F938*/ PPC::Runtime::ASM::bl(fn_80150208);
/*80152B3C 0014F93C*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*80152B40 0014F940*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80152B44 0014F944*/ PPC::Runtime::ASM::bge(.L_80152B50);
/*80152B48 0014F948*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80152B4C 0014F94C*/ PPC::Runtime::ASM::b(.L_80152B54);
RUNTIME_PPC_JUMP_LABEL(.L_80152B50, 0x80152B50) //this is a jump label
/*80152B50 0014F950*/ PPC::Runtime::ASM::li(context->r29, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80152B54, 0x80152B54) //this is a jump label
/*80152B54 0014F954*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80152B58 0014F958*/ PPC::Runtime::ASM::bne(.L_80152B6C);
/*80152B5C 0014F95C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152B60 0014F960*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80152B64 0014F964*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152B68 0014F968*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152B6C, 0x80152B6C) //this is a jump label
/*80152B6C 0014F96C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80152B70 0014F970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80152B74 0014F974*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80152B78 0014F978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80152B7C 0014F97C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80152B80 0014F980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80152B84 0014F984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80152B88 0014F988*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80152B8C 0014F98C*/ PPC::Runtime::ASM::bne(.L_80152BD8);
/*80152B90 0014F990*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80152B94 0014F994*/ PPC::Runtime::ASM::beq(.L_80152BD8);
/*80152B98 0014F998*/ PPC::Runtime::ASM::bne(.L_80152BAC);
/*80152B9C 0014F99C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152BA0 0014F9A0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80152BA4 0014F9A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152BA8 0014F9A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152BAC, 0x80152BAC) //this is a jump label
/*80152BAC 0014F9AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80152BB0 0014F9B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80152BB4 0014F9B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80152BB8 0014F9B8*/ PPC::Runtime::ASM::bne(.L_80152BC8);
/*80152BBC 0014F9BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80152BC0 0014F9C0*/ PPC::Runtime::ASM::beq(.L_80152BC8);
/*80152BC4 0014F9C4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80152BC8, 0x80152BC8) //this is a jump label
/*80152BC8 0014F9C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80152BCC 0014F9CC*/ PPC::Runtime::ASM::bne(.L_80152BD8);
/*80152BD0 0014F9D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80152BD4 0014F9D4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80152BD8, 0x80152BD8) //this is a jump label
/*80152BD8 0014F9D8*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80152BDC 0014F9DC*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r30));
/*80152BE0 0014F9E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80152BE4 0014F9E4*/ PPC::Runtime::ASM::beq(.L_80152D40);
/*80152BE8 0014F9E8*/ PPC::Runtime::ASM::bge(.L_80152BFC);
/*80152BEC 0014F9EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80152BF0 0014F9F0*/ PPC::Runtime::ASM::beq(.L_80152C08);
/*80152BF4 0014F9F4*/ PPC::Runtime::ASM::bge(.L_80152CA4);
/*80152BF8 0014F9F8*/ PPC::Runtime::ASM::b(.L_80152E74);
RUNTIME_PPC_JUMP_LABEL(.L_80152BFC, 0x80152BFC) //this is a jump label
/*80152BFC 0014F9FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80152C00 0014FA00*/ PPC::Runtime::ASM::bge(.L_80152E74);
/*80152C04 0014FA04*/ PPC::Runtime::ASM::b(.L_80152DDC);
RUNTIME_PPC_JUMP_LABEL(.L_80152C08, 0x80152C08) //this is a jump label
/*80152C08 0014FA08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80152C0C 0014FA0C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152C10 0014FA10*/ PPC::Runtime::ASM::bne(.L_80152C24);
/*80152C14 0014FA14*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152C18 0014FA18*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*80152C1C 0014FA1C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152C20 0014FA20*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152C24, 0x80152C24) //this is a jump label
/*80152C24 0014FA24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152C28 0014FA28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80152C2C 0014FA2C*/ PPC::Runtime::ASM::beq(.L_80152C44);
/*80152C30 0014FA30*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1225 @ Get_MemoryOffset_HighBit);
/*80152C34 0014FA34*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152C38 0014FA38*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1225 @ Get_MemoryOffset_LowBit);
/*80152C3C 0014FA3C*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*80152C40 0014FA40*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152C44, 0x80152C44) //this is a jump label
/*80152C44 0014FA44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0718 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152C48 0014FA48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80152C4C 0014FA4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152C50 0014FA50*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80152C54 0014FA54*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152C58 0014FA58*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152C5C 0014FA5C*/ PPC::Runtime::ASM::beq(.L_80152E74);
/*80152C60 0014FA60*/ PPC::Runtime::ASM::bne(.L_80152C74);
/*80152C64 0014FA64*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152C68 0014FA68*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80152C6C 0014FA6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152C70 0014FA70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152C74, 0x80152C74) //this is a jump label
/*80152C74 0014FA74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152C78 0014FA78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80152C7C 0014FA7C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80152C80 0014FA80*/ PPC::Runtime::ASM::bne(.L_80152C90);
/*80152C84 0014FA84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80152C88 0014FA88*/ PPC::Runtime::ASM::beq(.L_80152C90);
/*80152C8C 0014FA8C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80152C90, 0x80152C90) //this is a jump label
/*80152C90 0014FA90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80152C94 0014FA94*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152C98 0014FA98*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80152C9C 0014FA9C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*80152CA0 0014FAA0*/ PPC::Runtime::ASM::b(.L_80152E74);
RUNTIME_PPC_JUMP_LABEL(.L_80152CA4, 0x80152CA4) //this is a jump label
/*80152CA4 0014FAA4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80152CA8 0014FAA8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152CAC 0014FAAC*/ PPC::Runtime::ASM::bne(.L_80152CC0);
/*80152CB0 0014FAB0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152CB4 0014FAB4*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*80152CB8 0014FAB8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152CBC 0014FABC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152CC0, 0x80152CC0) //this is a jump label
/*80152CC0 0014FAC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152CC4 0014FAC4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80152CC8 0014FAC8*/ PPC::Runtime::ASM::beq(.L_80152CE0);
/*80152CCC 0014FACC*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1225 @ Get_MemoryOffset_HighBit);
/*80152CD0 0014FAD0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152CD4 0014FAD4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1225 @ Get_MemoryOffset_LowBit);
/*80152CD8 0014FAD8*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*80152CDC 0014FADC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152CE0, 0x80152CE0) //this is a jump label
/*80152CE0 0014FAE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0724 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152CE4 0014FAE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80152CE8 0014FAE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152CEC 0014FAEC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80152CF0 0014FAF0*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152CF4 0014FAF4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152CF8 0014FAF8*/ PPC::Runtime::ASM::beq(.L_80152E74);
/*80152CFC 0014FAFC*/ PPC::Runtime::ASM::bne(.L_80152D10);
/*80152D00 0014FB00*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152D04 0014FB04*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80152D08 0014FB08*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152D0C 0014FB0C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152D10, 0x80152D10) //this is a jump label
/*80152D10 0014FB10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152D14 0014FB14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80152D18 0014FB18*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80152D1C 0014FB1C*/ PPC::Runtime::ASM::bne(.L_80152D2C);
/*80152D20 0014FB20*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80152D24 0014FB24*/ PPC::Runtime::ASM::beq(.L_80152D2C);
/*80152D28 0014FB28*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80152D2C, 0x80152D2C) //this is a jump label
/*80152D2C 0014FB2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80152D30 0014FB30*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152D34 0014FB34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80152D38 0014FB38*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*80152D3C 0014FB3C*/ PPC::Runtime::ASM::b(.L_80152E74);
RUNTIME_PPC_JUMP_LABEL(.L_80152D40, 0x80152D40) //this is a jump label
/*80152D40 0014FB40*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80152D44 0014FB44*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152D48 0014FB48*/ PPC::Runtime::ASM::bne(.L_80152D5C);
/*80152D4C 0014FB4C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152D50 0014FB50*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*80152D54 0014FB54*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152D58 0014FB58*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152D5C, 0x80152D5C) //this is a jump label
/*80152D5C 0014FB5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152D60 0014FB60*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80152D64 0014FB64*/ PPC::Runtime::ASM::beq(.L_80152D7C);
/*80152D68 0014FB68*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1225 @ Get_MemoryOffset_HighBit);
/*80152D6C 0014FB6C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152D70 0014FB70*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1225 @ Get_MemoryOffset_LowBit);
/*80152D74 0014FB74*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*80152D78 0014FB78*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152D7C, 0x80152D7C) //this is a jump label
/*80152D7C 0014FB7C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152D80 0014FB80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80152D84 0014FB84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152D88 0014FB88*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80152D8C 0014FB8C*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152D90 0014FB90*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152D94 0014FB94*/ PPC::Runtime::ASM::beq(.L_80152E74);
/*80152D98 0014FB98*/ PPC::Runtime::ASM::bne(.L_80152DAC);
/*80152D9C 0014FB9C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152DA0 0014FBA0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80152DA4 0014FBA4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152DA8 0014FBA8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152DAC, 0x80152DAC) //this is a jump label
/*80152DAC 0014FBAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152DB0 0014FBB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80152DB4 0014FBB4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80152DB8 0014FBB8*/ PPC::Runtime::ASM::bne(.L_80152DC8);
/*80152DBC 0014FBBC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80152DC0 0014FBC0*/ PPC::Runtime::ASM::beq(.L_80152DC8);
/*80152DC4 0014FBC4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80152DC8, 0x80152DC8) //this is a jump label
/*80152DC8 0014FBC8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80152DCC 0014FBCC*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152DD0 0014FBD0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80152DD4 0014FBD4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*80152DD8 0014FBD8*/ PPC::Runtime::ASM::b(.L_80152E74);
RUNTIME_PPC_JUMP_LABEL(.L_80152DDC, 0x80152DDC) //this is a jump label
/*80152DDC 0014FBDC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80152DE0 0014FBE0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152DE4 0014FBE4*/ PPC::Runtime::ASM::bne(.L_80152DF8);
/*80152DE8 0014FBE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152DEC 0014FBEC*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*80152DF0 0014FBF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152DF4 0014FBF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152DF8, 0x80152DF8) //this is a jump label
/*80152DF8 0014FBF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152DFC 0014FBFC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*80152E00 0014FC00*/ PPC::Runtime::ASM::beq(.L_80152E18);
/*80152E04 0014FC04*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1225 @ Get_MemoryOffset_HighBit);
/*80152E08 0014FC08*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152E0C 0014FC0C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1225 @ Get_MemoryOffset_LowBit);
/*80152E10 0014FC10*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*80152E14 0014FC14*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152E18, 0x80152E18) //this is a jump label
/*80152E18 0014FC18*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E072C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80152E1C 0014FC1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80152E20 0014FC20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152E24 0014FC24*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80152E28 0014FC28*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152E2C 0014FC2C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80152E30 0014FC30*/ PPC::Runtime::ASM::beq(.L_80152E74);
/*80152E34 0014FC34*/ PPC::Runtime::ASM::bne(.L_80152E48);
/*80152E38 0014FC38*/ PPC::Runtime::ASM::li(context->r3, lbl_805D67C8 @ Get_MemoryOffset_SDA21);
/*80152E3C 0014FC3C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80152E40 0014FC40*/ PPC::Runtime::ASM::li(context->r5, lbl_805D67D0 @ Get_MemoryOffset_SDA21);
/*80152E44 0014FC44*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80152E48, 0x80152E48) //this is a jump label
/*80152E48 0014FC48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80152E4C 0014FC4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80152E50 0014FC50*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80152E54 0014FC54*/ PPC::Runtime::ASM::bne(.L_80152E64);
/*80152E58 0014FC58*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80152E5C 0014FC5C*/ PPC::Runtime::ASM::beq(.L_80152E64);
/*80152E60 0014FC60*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80152E64, 0x80152E64) //this is a jump label
/*80152E64 0014FC64*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80152E68 0014FC68*/ PPC::Runtime::ASM::bne(.L_80152E74);
/*80152E6C 0014FC6C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80152E70 0014FC70*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80152E74, 0x80152E74) //this is a jump label
/*80152E74 0014FC74*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80152E78 0014FC78*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80152E7C 0014FC7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80152E80 0014FC80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80152E84 0014FC84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80152E88 0014FC88*/ PPC::Runtime::ASM::blr();
}