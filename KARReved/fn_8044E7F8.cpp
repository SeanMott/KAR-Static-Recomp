//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803EC02C.hpp"
#include "OSReport.hpp"
#include "fn___assert.hpp"
#include "OSReport.hpp"
#include "fn___assert.hpp"
#include "fn_80446D3C.hpp"
#include "fn_AISetDSPSampleRate.hpp"
#include "fn_ARAlloc.hpp"
#include "fn_80446ACC.hpp"
#include "fn_ARAlloc.hpp"
#include "fn_8044C728.hpp"
#include "fn_8044C728.hpp"
#include "fn_803ED76C.hpp"
#include "fn_AISetStreamVolLeft.hpp"
#include "fn_AISetStreamVolRight.hpp"
#include "fn_ARAlloc.hpp"
#include "fn_OSGetSoundMode.hpp"



void fn_8044E7F8(PPC::Runtime::GCContext* context)
{
/*8044E7F8 0044B5F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8044E7FC 0044B5FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044E800 0044B600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8044E804 0044B604*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8044E808 0044B608*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8044E80C 0044B60C*/ PPC::Runtime::ASM::lis(context->r7, lbl_80508D58 @ Get_MemoryOffset_HighBit);
/*8044E810 0044B610*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_HighBit);
/*8044E814 0044B614*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8044E818 0044B618*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8044E81C 0044B61C*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*8044E820 0044B620*/ PPC::Runtime::ASM::addi(context->r28, context->r7, lbl_80508D58 @ Get_MemoryOffset_LowBit);
/*8044E824 0044B624*/ PPC::Runtime::ASM::addi(context->r31, context->r6, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_LowBit);
/*8044E828 0044B628*/ PPC::Runtime::ASM::bl(fn_803EC02C);
/*8044E82C 0044B62C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*8044E830 0044B630*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8044E834 0044B634*/ PPC::Runtime::ASM::blt(.L_8044E844);
/*8044E838 0044B638*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8044E83C 0044B63C*/ PPC::Runtime::ASM::bgt(.L_8044E844);
/*8044E840 0044B640*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044E844, 0x8044E844) //this is a jump label
/*8044E844 0044B644*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8044E848 0044B648*/ PPC::Runtime::ASM::bne(.L_8044E868);
/*8044E84C 0044B64C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x868);
/*8044E850 0044B650*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8044E854 0044B654*/ PPC::Runtime::ASM::bl(OSReport);
/*8044E858 0044B658*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x890);
/*8044E85C 0044B65C*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044E860 0044B660*/ PPC::Runtime::ASM::li(context->r4, 0xf72);
/*8044E864 0044B664*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044E868, 0x8044E868) //this is a jump label
/*8044E868 0044B668*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x1);
/*8044E86C 0044B66C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8044E870 0044B670*/ PPC::Runtime::ASM::blt(.L_8044E880);
/*8044E874 0044B674*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x3);
/*8044E878 0044B678*/ PPC::Runtime::ASM::bgt(.L_8044E880);
/*8044E87C 0044B67C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044E880, 0x8044E880) //this is a jump label
/*8044E880 0044B680*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8044E884 0044B684*/ PPC::Runtime::ASM::bne(.L_8044E8A4);
/*8044E888 0044B688*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x8c0);
/*8044E88C 0044B68C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8044E890 0044B690*/ PPC::Runtime::ASM::bl(OSReport);
/*8044E894 0044B694*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x8ec);
/*8044E898 0044B698*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044E89C 0044B69C*/ PPC::Runtime::ASM::li(context->r4, 0xf73);
/*8044E8A0 0044B6A0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044E8A4, 0x8044E8A4) //this is a jump label
/*8044E8A4 0044B6A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8044E8A8 0044B6A8*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8044E8AC 0044B6AC*/ PPC::Runtime::ASM::bl(fn_80446D3C);
/*8044E8B0 0044B6B0*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*8044E8B4 0044B6B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8044E8B8 0044B6B8*/ PPC::Runtime::ASM::mullw(context->r4, context->r30, context->r0);
/*8044E8BC 0044B6BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8044E8C0 0044B6C0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE53C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E8C4 0044B6C4*/ PPC::Runtime::ASM::bl(fn_AISetDSPSampleRate);
/*8044E8C8 0044B6C8*/ PPC::Runtime::ASM::li(context->r3, 0x500);
/*8044E8CC 0044B6CC*/ PPC::Runtime::ASM::bl(fn_ARAlloc);
/*8044E8D0 0044B6D0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8044E8D4 0044B6D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8044E8D8 0044B6D8*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DE540 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E8DC 0044B6DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8044E8E0 0044B6E0*/ PPC::Runtime::ASM::li(context->r6, 0x500);
/*8044E8E4 0044B6E4*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*8044E8E8 0044B6E8*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8044E8EC 0044B6EC*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8044E8F0 0044B6F0*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8044E8F4 0044B6F4*/ PPC::Runtime::ASM::bl(fn_80446ACC);
/*8044E8F8 0044B6F8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE540 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E8FC 0044B6FC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8044E900 0044B700*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*8044E904 0044B704*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE540 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E908 0044B708*/ PPC::Runtime::ASM::bl(fn_ARAlloc);
/*8044E90C 0044B70C*/ PPC::Runtime::ASM::lis(context->r4, fn_8044C728 @ Get_MemoryOffset_HighBit);
/*8044E910 0044B710*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a0, context->r31));
/*8044E914 0044B714*/ PPC::Runtime::ASM::addi(context->r3, context->r4, fn_8044C728 @ Get_MemoryOffset_LowBit);
/*8044E918 0044B718*/ PPC::Runtime::ASM::bl(fn_803ED76C);
/*8044E91C 0044B71C*/ PPC::Runtime::ASM::lfs(context->f1, StructValues_Float_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E920 0044B720*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8044E924 0044B724*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E6210 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E928 0044B728*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE530 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E92C 0044B72C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8044E930 0044B730*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8044E934 0044B734*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8044E938 0044B738*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8044E93C 0044B73C*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolLeft);
/*8044E940 0044B740*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE530 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E944 0044B744*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8044E948 0044B748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8044E94C 0044B74C*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*8044E950 0044B750*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E6178 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E954 0044B754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044E958 0044B758*/ PPC::Runtime::ASM::lfs(context->f2, StructValues_Float_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E95C 0044B75C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8044E960 0044B760*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8044E964 0044B764*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8044E968 0044B768*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8044E96C 0044B76C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044E970 0044B770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8044E974 0044B774*/ PPC::Runtime::ASM::bl(fn_AISetStreamVolRight);
/*8044E978 0044B778*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E615C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044E97C 0044B77C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x33c0);
/*8044E980 0044B780*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8044E984 0044B784*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8044E988 0044B788*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c0, context->r31));
/*8044E98C 0044B78C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x33d8);
/*8044E990 0044B790*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8044E994 0044B794*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8044E998 0044B798*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8044E99C, 0x8044E99C) //this is a jump label
/*8044E99C 0044B79C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8044E9A0 0044B7A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8044E9A4 0044B7A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8044E9A8 0044B7A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*8044E9AC 0044B7AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8044E9B0 0044B7B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*8044E9B4 0044B7B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*8044E9B8 0044B7B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
/*8044E9BC 0044B7BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r5));
/*8044E9C0 0044B7C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r5));
/*8044E9C4 0044B7C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r5));
/*8044E9C8 0044B7C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*8044E9CC 0044B7CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r5));
/*8044E9D0 0044B7D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*8044E9D4 0044B7D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r5));
/*8044E9D8 0044B7D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r5));
/*8044E9DC 0044B7DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r5));
/*8044E9E0 0044B7E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r5));
/*8044E9E4 0044B7E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r5));
/*8044E9E8 0044B7E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r5));
/*8044E9EC 0044B7EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r5));
/*8044E9F0 0044B7F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r5));
/*8044E9F4 0044B7F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r5));
/*8044E9F8 0044B7F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r5));
/*8044E9FC 0044B7FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r5));
/*8044EA00 0044B800*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r5));
/*8044EA04 0044B804*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r5));
/*8044EA08 0044B808*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8044EA0C 0044B80C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r5));
/*8044EA10 0044B810*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r5));
/*8044EA14 0044B814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r5));
/*8044EA18 0044B818*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r5));
/*8044EA1C 0044B81C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r5));
/*8044EA20 0044B820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r5));
/*8044EA24 0044B824*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r5));
/*8044EA28 0044B828*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r5));
/*8044EA2C 0044B82C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r5));
/*8044EA30 0044B830*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r5));
/*8044EA34 0044B834*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r5));
/*8044EA38 0044B838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r5));
/*8044EA3C 0044B83C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r5));
/*8044EA40 0044B840*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r5));
/*8044EA44 0044B844*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r5));
/*8044EA48 0044B848*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r5));
/*8044EA4C 0044B84C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r5));
/*8044EA50 0044B850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r5));
/*8044EA54 0044B854*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r5));
/*8044EA58 0044B858*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r5));
/*8044EA5C 0044B85C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r5));
/*8044EA60 0044B860*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x180);
/*8044EA64 0044B864*/ PPC::Runtime::ASM::bdnz(.L_8044E99C);
/*8044EA68 0044B868*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a0, context->r31));
/*8044EA6C 0044B86C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE53C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EA70 0044B870*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r29);
/*8044EA74 0044B874*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE54C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EA78 0044B878*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 16);
/*8044EA7C 0044B87C*/ PPC::Runtime::ASM::bl(fn_ARAlloc);
/*8044EA80 0044B880*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE534 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EA84 0044B884*/ PPC::Runtime::ASM::bl(fn_OSGetSoundMode);
/*8044EA88 0044B888*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8044EA8C 0044B88C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE538 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EA90 0044B890*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x2ec0);
/*8044EA94 0044B894*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E6180 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EA98 0044B898*/ PPC::Runtime::ASM::lfd(context->f5, STRUCT_DOUBLE_COUNT_1805E6178 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EA9C 0044B89C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8044EAA0 0044B8A0*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E6188 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EAA4 0044B8A4*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*8044EAA8 0044B8A8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8044EAAC, 0x8044EAAC) //this is a jump label
/*8044EAAC 0044B8AC*/ PPC::Runtime::ASM::xoris(context->r0, context->r5, 0x8000);
/*8044EAB0 0044B8B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044EAB4 0044B8B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8044EAB8 0044B8B8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044EABC 0044B8BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f5);
/*8044EAC0 0044B8C0*/ PPC::Runtime::ASM::fmuls(context->f7, context->f6, context->f0);
/*8044EAC4 0044B8C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f7, context->f4);
/*8044EAC8 0044B8C8*/ PPC::Runtime::ASM::ble(.L_8044EB20);
/*8044EACC 0044B8CC*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f7);
/*8044EAD0 0044B8D0*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E6190 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EAD4 0044B8D4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E6198 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EAD8 0044B8D8*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8044EADC 0044B8DC*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8044EAE0 0044B8E0*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f7, context->f0, context->f2);
/*8044EAE4 0044B8E4*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8044EAE8 0044B8E8*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8044EAEC 0044B8EC*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8044EAF0 0044B8F0*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f7, context->f0, context->f2);
/*8044EAF4 0044B8F4*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8044EAF8 0044B8F8*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8044EAFC 0044B8FC*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8044EB00 0044B900*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f7, context->f0, context->f2);
/*8044EB04 0044B904*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8044EB08 0044B908*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8044EB0C 0044B90C*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8044EB10 0044B910*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f7, context->f0, context->f2);
/*8044EB14 0044B914*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8044EB18 0044B918*/ PPC::Runtime::ASM::fmul(context->f0, context->f7, context->f0);
/*8044EB1C 0044B91C*/ PPC::Runtime::ASM::b(.L_8044EB4C);
RUNTIME_PPC_JUMP_LABEL(.L_8044EB20, 0x8044EB20) //this is a jump label
/*8044EB20 0044B920*/ PPC::Runtime::ASM::fcmpu(cr0, context->f4, context->f7);
/*8044EB24 0044B924*/ PPC::Runtime::ASM::bne(.L_8044EB30);
/*8044EB28 0044B928*/ PPC::Runtime::ASM::fmr(context->f0, context->f4);
/*8044EB2C 0044B92C*/ PPC::Runtime::ASM::b(.L_8044EB4C);
RUNTIME_PPC_JUMP_LABEL(.L_8044EB30, 0x8044EB30) //this is a jump label
/*8044EB30 0044B930*/ PPC::Runtime::ASM::fcmpu(cr0, context->f7, context->f4);
/*8044EB34 0044B934*/ PPC::Runtime::ASM::beq(.L_8044EB44);
/*8044EB38 0044B938*/ PPC::Runtime::ASM::lis(context->r3, StructValues_NaN @ Get_MemoryOffset_HighBit);
/*8044EB3C 0044B93C*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_NaN @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8044EB40 0044B940*/ PPC::Runtime::ASM::b(.L_8044EB4C);
RUNTIME_PPC_JUMP_LABEL(.L_8044EB44, 0x8044EB44) //this is a jump label
/*8044EB44 0044B944*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_inf @ Get_MemoryOffset_HighBit);
/*8044EB48 0044B948*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_Float_inf @ Get_MemoryOffset_LowBit ( context->r3 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044EB4C, 0x8044EB4C) //this is a jump label
/*8044EB4C 0044B94C*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8044EB50 0044B950*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8044EB54 0044B954*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8044EB58 0044B958*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8044EB5C 0044B95C*/ PPC::Runtime::ASM::bdnz(.L_8044EAAC);
/*8044EB60 0044B960*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2ec0);
/*8044EB64 0044B964*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8044EB68 0044B968*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*8044EB6C 0044B96C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8044EB70 0044B970*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r3));
/*8044EB74 0044B974*/ PPC::Runtime::ASM::ble(.L_8044EC20);
/*8044EB78 0044B978*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x8);
/*8044EB7C 0044B97C*/ PPC::Runtime::ASM::subi(context->r3, context->r30, 0x8);
/*8044EB80 0044B980*/ PPC::Runtime::ASM::ble(.L_8044EBEC);
/*8044EB84 0044B984*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7);
/*8044EB88 0044B988*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x39d8);
/*8044EB8C 0044B98C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*8044EB90 0044B990*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE520 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EB94 0044B994*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8044EB98 0044B998*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8044EB9C 0044B99C*/ PPC::Runtime::ASM::ble(.L_8044EBE8);
RUNTIME_PPC_JUMP_LABEL(.L_8044EBA0, 0x8044EBA0) //this is a jump label
/*8044EBA0 0044B9A0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8044EBA4 0044B9A4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x28);
/*8044EBA8 0044B9A8*/ PPC::Runtime::ASM::addi(context->r10, context->r4, 0x50);
/*8044EBAC 0044B9AC*/ PPC::Runtime::ASM::addi(context->r9, context->r4, 0x78);
/*8044EBB0 0044B9B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8044EBB4 0044B9B4*/ PPC::Runtime::ASM::addi(context->r8, context->r4, 0xa0);
/*8044EBB8 0044B9B8*/ PPC::Runtime::ASM::addi(context->r7, context->r4, 0xc8);
/*8044EBBC 0044B9BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xf0);
/*8044EBC0 0044B9C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*8044EBC4 0044B9C4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x118);
/*8044EBC8 0044B9C8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*8044EBCC 0044B9CC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r4));
/*8044EBD0 0044B9D0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r4));
/*8044EBD4 0044B9D4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r4));
/*8044EBD8 0044B9D8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r4));
/*8044EBDC 0044B9DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r4));
/*8044EBE0 0044B9E0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x140);
/*8044EBE4 0044B9E4*/ PPC::Runtime::ASM::bdnz(.L_8044EBA0);
RUNTIME_PPC_JUMP_LABEL(.L_8044EBE8, 0x8044EBE8) //this is a jump label
/*8044EBE8 0044B9E8*/ PPC::Runtime::ASM::stw(context->r5, STRUCT_BYTE4_COUNT_1805DE520 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044EBEC, 0x8044EBEC) //this is a jump label
/*8044EBEC 0044B9EC*/ PPC::Runtime::ASM::mulli(context->r3, context->r6, 0x28);
/*8044EBF0 0044B9F0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x39d8);
/*8044EBF4 0044B9F4*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r30);
/*8044EBF8 0044B9F8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE520 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EBFC 0044B9FC*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*8044EC00 0044BA00*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8044EC04 0044BA04*/ PPC::Runtime::ASM::cmpw(context->r6, context->r30);
/*8044EC08 0044BA08*/ PPC::Runtime::ASM::bge(.L_8044EC1C);
RUNTIME_PPC_JUMP_LABEL(.L_8044EC0C, 0x8044EC0C) //this is a jump label
/*8044EC0C 0044BA0C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8044EC10 0044BA10*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8044EC14 0044BA14*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x28);
/*8044EC18 0044BA18*/ PPC::Runtime::ASM::bdnz(.L_8044EC0C);
RUNTIME_PPC_JUMP_LABEL(.L_8044EC1C, 0x8044EC1C) //this is a jump label
/*8044EC1C 0044BA1C*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DE520 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044EC20, 0x8044EC20) //this is a jump label
/*8044EC20 0044BA20*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE53C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EC24 0044BA24*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8044EC28 0044BA28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8044EC2C 0044BA2C*/ PPC::Runtime::ASM::ble(.L_8044ECB4);
/*8044EC30 0044BA30*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x8);
/*8044EC34 0044BA34*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x8);
/*8044EC38 0044BA38*/ PPC::Runtime::ASM::ble(.L_8044EC84);
/*8044EC3C 0044BA3C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*8044EC40 0044BA40*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*8044EC44 0044BA44*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*8044EC48 0044BA48*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8044EC4C 0044BA4C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8044EC50 0044BA50*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8044EC54 0044BA54*/ PPC::Runtime::ASM::ble(.L_8044EC84);
RUNTIME_PPC_JUMP_LABEL(.L_8044EC58, 0x8044EC58) //this is a jump label
/*8044EC58 0044BA58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8044EC5C 0044BA5C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*8044EC60 0044BA60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8044EC64 0044BA64*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8044EC68 0044BA68*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8044EC6C 0044BA6C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*8044EC70 0044BA70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*8044EC74 0044BA74*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8044EC78 0044BA78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8044EC7C 0044BA7C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x20);
/*8044EC80 0044BA80*/ PPC::Runtime::ASM::bdnz(.L_8044EC58);
RUNTIME_PPC_JUMP_LABEL(.L_8044EC84, 0x8044EC84) //this is a jump label
/*8044EC84 0044BA84*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE53C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044EC88 0044BA88*/ PPC::Runtime::ASM::slwi(context->r4, context->r7, 2);
/*8044EC8C 0044BA8C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*8044EC90 0044BA90*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8044EC94 0044BA94*/ PPC::Runtime::ASM::subf(context->r0, context->r7, context->r6);
/*8044EC98 0044BA98*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r4);
/*8044EC9C 0044BA9C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8044ECA0 0044BAA0*/ PPC::Runtime::ASM::cmpw(context->r7, context->r6);
/*8044ECA4 0044BAA4*/ PPC::Runtime::ASM::bge(.L_8044ECB4);
RUNTIME_PPC_JUMP_LABEL(.L_8044ECA8, 0x8044ECA8) //this is a jump label
/*8044ECA8 0044BAA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8044ECAC 0044BAAC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8044ECB0 0044BAB0*/ PPC::Runtime::ASM::bdnz(.L_8044ECA8);
RUNTIME_PPC_JUMP_LABEL(.L_8044ECB4, 0x8044ECB4) //this is a jump label
/*8044ECB4 0044BAB4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8044ECB8 0044BAB8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8044ECBC 0044BABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8044ECC0 0044BAC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044ECC4 0044BAC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8044ECC8 0044BAC8*/ PPC::Runtime::ASM::blr();
}