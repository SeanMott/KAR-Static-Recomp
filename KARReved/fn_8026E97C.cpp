//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7648.hpp"
#include "fn_801C7548.hpp"
#include "fn_8026C100.hpp"
#include "fn_80262FDC.hpp"
#include "fn_8026DFA4.hpp"
#include "fn_801C7648.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_8026D6A0.hpp"



void fn_8026E97C(PPC::Runtime::GCContext* context)
{
/*8026E97C 0026B77C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*8026E980 0026B780*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026E984 0026B784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8026E988 0026B788*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*8026E98C 0026B78C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*8026E990 0026B790*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8026E994 0026B794*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*8026E998 0026B798*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*8026E99C 0026B79C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026E9A0 0026B7A0*/ PPC::Runtime::ASM::beq(.L_8026E9C4);
/*8026E9A4 0026B7A4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8026E9A8 0026B7A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r6));
/*8026E9AC 0026B7AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r6));
/*8026E9B0 0026B7B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r6));
/*8026E9B4 0026B7B4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026E9B8 0026B7B8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8026E9BC 0026B7BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8026E9C0 0026B7C0*/ PPC::Runtime::ASM::b(.L_8026E9DC);
RUNTIME_PPC_JUMP_LABEL(.L_8026E9C4, 0x8026E9C4) //this is a jump label
/*8026E9C4 0026B7C4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*8026E9C8 0026B7C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*8026E9CC 0026B7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8026E9D0 0026B7D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026E9D4 0026B7D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8026E9D8 0026B7D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026E9DC, 0x8026E9DC) //this is a jump label
/*8026E9DC 0026B7DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026E9E0 0026B7E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026E9E4 0026B7E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8026E9E8 0026B7E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8026E9EC 0026B7EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8026E9F0 0026B7F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8026E9F4 0026B7F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8026E9F8 0026B7F8*/ PPC::Runtime::ASM::beq(.L_8026EA08);
/*8026E9FC 0026B7FC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x80);
/*8026EA00 0026B800*/ PPC::Runtime::ASM::bl(fn_801C7648);
/*8026EA04 0026B804*/ PPC::Runtime::ASM::b(.L_8026EA20);
RUNTIME_PPC_JUMP_LABEL(.L_8026EA08, 0x8026EA08) //this is a jump label
/*8026EA08 0026B808*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*8026EA0C 0026B80C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r30));
/*8026EA10 0026B810*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8026EA14 0026B814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8026EA18 0026B818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r30));
/*8026EA1C 0026B81C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026EA20, 0x8026EA20) //this is a jump label
/*8026EA20 0026B820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026EA24 0026B824*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026EA28 0026B828*/ PPC::Runtime::ASM::beq(.L_8026EA38);
/*8026EA2C 0026B82C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x74);
/*8026EA30 0026B830*/ PPC::Runtime::ASM::bl(fn_801C7548);
/*8026EA34 0026B834*/ PPC::Runtime::ASM::b(.L_8026EA50);
RUNTIME_PPC_JUMP_LABEL(.L_8026EA38, 0x8026EA38) //this is a jump label
/*8026EA38 0026B838*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*8026EA3C 0026B83C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r30));
/*8026EA40 0026B840*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8026EA44 0026B844*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8026EA48 0026B848*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r30));
/*8026EA4C 0026B84C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026EA50, 0x8026EA50) //this is a jump label
/*8026EA50 0026B850*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026EA54 0026B854*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x50);
/*8026EA58 0026B858*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8026EA5C 0026B85C*/ PPC::Runtime::ASM::bl(fn_8026C100);
/*8026EA60 0026B860*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*8026EA64 0026B864*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8026EA68 0026B868*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026EA6C 0026B86C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026EA70 0026B870*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x98);
/*8026EA74 0026B874*/ PPC::Runtime::ASM::bl(fn_8026DFA4);
/*8026EA78 0026B878*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*8026EA7C 0026B87C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055E964 @ Get_MemoryOffset_HighBit);
/*8026EA80 0026B880*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8026EA84 0026B884*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18055E964 @ Get_MemoryOffset_LowBit);
/*8026EA88 0026B888*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*8026EA8C 0026B88C*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*8026EA90 0026B890*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8026EA94 0026B894*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r3));
/*8026EA98 0026B898*/ PPC::Runtime::ASM::fsubs(context->f5, context->f2, context->f1);
/*8026EA9C 0026B89C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8026EAA0 0026B8A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8026EAA4 0026B8A4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f4);
/*8026EAA8 0026B8A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r3));
/*8026EAAC 0026B8AC*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f2);
/*8026EAB0 0026B8B0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r3));
/*8026EAB4 0026B8B4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f5, context->f0);
/*8026EAB8 0026B8B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EABC 0026B8BC*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8026EAC0 0026B8C0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f3, context->f1);
/*8026EAC4 0026B8C4*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8026EAC8 0026B8C8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8026EACC 0026B8CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EAD0 0026B8D0*/ PPC::Runtime::ASM::bge(.L_8026EAE0);
/*8026EAD4 0026B8D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8026EAD8 0026B8D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8026EADC 0026B8DC*/ PPC::Runtime::ASM::b(.L_8026ED34);
RUNTIME_PPC_JUMP_LABEL(.L_8026EAE0, 0x8026EAE0) //this is a jump label
/*8026EAE0 0026B8E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026EAE4 0026B8E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026EAE8 0026B8E8*/ PPC::Runtime::ASM::beq(.L_8026EB0C);
/*8026EAEC 0026B8EC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8026EAF0 0026B8F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r6));
/*8026EAF4 0026B8F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r6));
/*8026EAF8 0026B8F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r6));
/*8026EAFC 0026B8FC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026EB00 0026B900*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8026EB04 0026B904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8026EB08 0026B908*/ PPC::Runtime::ASM::b(.L_8026EB24);
RUNTIME_PPC_JUMP_LABEL(.L_8026EB0C, 0x8026EB0C) //this is a jump label
/*8026EB0C 0026B90C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*8026EB10 0026B910*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*8026EB14 0026B914*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8026EB18 0026B918*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026EB1C 0026B91C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8026EB20 0026B920*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026EB24, 0x8026EB24) //this is a jump label
/*8026EB24 0026B924*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8026EB28 0026B928*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026EB2C 0026B92C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*8026EB30 0026B930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8026EB34 0026B934*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026EB38 0026B938*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026EB3C 0026B93C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026EB40 0026B940*/ PPC::Runtime::ASM::beq(.L_8026EB50);
/*8026EB44 0026B944*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*8026EB48 0026B948*/ PPC::Runtime::ASM::bl(fn_801C7648);
/*8026EB4C 0026B94C*/ PPC::Runtime::ASM::b(.L_8026EB68);
RUNTIME_PPC_JUMP_LABEL(.L_8026EB50, 0x8026EB50) //this is a jump label
/*8026EB50 0026B950*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*8026EB54 0026B954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r30));
/*8026EB58 0026B958*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8026EB5C 0026B95C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8026EB60 0026B960*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r30));
/*8026EB64 0026B964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026EB68, 0x8026EB68) //this is a jump label
/*8026EB68 0026B968*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8026EB6C 0026B96C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8026EB70 0026B970*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026EB74 0026B974*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EB78 0026B978*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EB7C 0026B97C*/ PPC::Runtime::ASM::bge(.L_8026EB88);
/*8026EB80 0026B980*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8026EB84 0026B984*/ PPC::Runtime::ASM::b(.L_8026EBDC);
RUNTIME_PPC_JUMP_LABEL(.L_8026EB88, 0x8026EB88) //this is a jump label
/*8026EB88 0026B988*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026EB8C 0026B98C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*8026EB90 0026B990*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026EB94 0026B994*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8026EB98 0026B998*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026EB9C 0026B99C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026EBA0 0026B9A0*/ PPC::Runtime::ASM::fadds(context->f4, context->f1, context->f0);
/*8026EBA4 0026B9A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026EBA8 0026B9A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8026EBAC 0026B9AC*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f2);
/*8026EBB0 0026B9B0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8026EBB4 0026B9B4*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8026EBB8 0026B9B8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8026EBBC 0026B9BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8026EBC0 0026B9C0*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026EBC4 0026B9C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EBC8 0026B9C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EBCC 0026B9CC*/ PPC::Runtime::ASM::ble(.L_8026EBD8);
/*8026EBD0 0026B9D0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026EBD4 0026B9D4*/ PPC::Runtime::ASM::b(.L_8026EBDC);
RUNTIME_PPC_JUMP_LABEL(.L_8026EBD8, 0x8026EBD8) //this is a jump label
/*8026EBD8 0026B9D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8026EBDC, 0x8026EBDC) //this is a jump label
/*8026EBDC 0026B9DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8026EBE0 0026B9E0*/ PPC::Runtime::ASM::bne(.L_8026EBF0);
/*8026EBE4 0026B9E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8026EBE8 0026B9E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8026EBEC 0026B9EC*/ PPC::Runtime::ASM::b(.L_8026ED34);
RUNTIME_PPC_JUMP_LABEL(.L_8026EBF0, 0x8026EBF0) //this is a jump label
/*8026EBF0 0026B9F0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8c);
/*8026EBF4 0026B9F4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8026EBF8 0026B9F8*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026EBFC 0026B9FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EC00 0026BA00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EC04 0026BA04*/ PPC::Runtime::ASM::bge(.L_8026EC10);
/*8026EC08 0026BA08*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026EC0C 0026BA0C*/ PPC::Runtime::ASM::b(.L_8026EC4C);
RUNTIME_PPC_JUMP_LABEL(.L_8026EC10, 0x8026EC10) //this is a jump label
/*8026EC10 0026BA10*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8026EC14 0026BA14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026EC18 0026BA18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8026EC1C 0026BA1C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8026EC20 0026BA20*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8026EC24 0026BA24*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8026EC28 0026BA28*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8026EC2C 0026BA2C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*8026EC30 0026BA30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E30B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EC34 0026BA34*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8026EC38 0026BA38*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EC3C 0026BA3C*/ PPC::Runtime::ASM::ble(.L_8026EC48);
/*8026EC40 0026BA40*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026EC44 0026BA44*/ PPC::Runtime::ASM::b(.L_8026EC4C);
RUNTIME_PPC_JUMP_LABEL(.L_8026EC48, 0x8026EC48) //this is a jump label
/*8026EC48 0026BA48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8026EC4C, 0x8026EC4C) //this is a jump label
/*8026EC4C 0026BA4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8026EC50 0026BA50*/ PPC::Runtime::ASM::bne(.L_8026ED28);
/*8026EC54 0026BA54*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8c);
/*8026EC58 0026BA58*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8026EC5C 0026BA5C*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026EC60 0026BA60*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EC64 0026BA64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026EC68 0026BA68*/ PPC::Runtime::ASM::bge(.L_8026EC74);
/*8026EC6C 0026BA6C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026EC70 0026BA70*/ PPC::Runtime::ASM::b(.L_8026ECB0);
RUNTIME_PPC_JUMP_LABEL(.L_8026EC74, 0x8026EC74) //this is a jump label
/*8026EC74 0026BA74*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8026EC78 0026BA78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026EC7C 0026BA7C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8026EC80 0026BA80*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8026EC84 0026BA84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026EC88 0026BA88*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8026EC8C 0026BA8C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026EC90 0026BA90*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*8026EC94 0026BA94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E30B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026EC98 0026BA98*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8026EC9C 0026BA9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026ECA0 0026BAA0*/ PPC::Runtime::ASM::ble(.L_8026ECAC);
/*8026ECA4 0026BAA4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026ECA8 0026BAA8*/ PPC::Runtime::ASM::b(.L_8026ECB0);
RUNTIME_PPC_JUMP_LABEL(.L_8026ECAC, 0x8026ECAC) //this is a jump label
/*8026ECAC 0026BAAC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8026ECB0, 0x8026ECB0) //this is a jump label
/*8026ECB0 0026BAB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8026ECB4 0026BAB4*/ PPC::Runtime::ASM::bne(.L_8026ED28);
/*8026ECB8 0026BAB8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8c);
/*8026ECBC 0026BABC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8026ECC0 0026BAC0*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*8026ECC4 0026BAC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026ECC8 0026BAC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026ECCC 0026BACC*/ PPC::Runtime::ASM::bge(.L_8026ECD8);
/*8026ECD0 0026BAD0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026ECD4 0026BAD4*/ PPC::Runtime::ASM::b(.L_8026ED14);
RUNTIME_PPC_JUMP_LABEL(.L_8026ECD8, 0x8026ECD8) //this is a jump label
/*8026ECD8 0026BAD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8026ECDC 0026BADC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026ECE0 0026BAE0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026ECE4 0026BAE4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8026ECE8 0026BAE8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026ECEC 0026BAEC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8026ECF0 0026BAF0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026ECF4 0026BAF4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*8026ECF8 0026BAF8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E30B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026ECFC 0026BAFC*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*8026ED00 0026BB00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026ED04 0026BB04*/ PPC::Runtime::ASM::ble(.L_8026ED10);
/*8026ED08 0026BB08*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8026ED0C 0026BB0C*/ PPC::Runtime::ASM::b(.L_8026ED14);
RUNTIME_PPC_JUMP_LABEL(.L_8026ED10, 0x8026ED10) //this is a jump label
/*8026ED10 0026BB10*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8026ED14, 0x8026ED14) //this is a jump label
/*8026ED14 0026BB14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8026ED18 0026BB18*/ PPC::Runtime::ASM::bne(.L_8026ED28);
/*8026ED1C 0026BB1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8026ED20 0026BB20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8026ED24 0026BB24*/ PPC::Runtime::ASM::b(.L_8026ED34);
RUNTIME_PPC_JUMP_LABEL(.L_8026ED28, 0x8026ED28) //this is a jump label
/*8026ED28 0026BB28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8026ED2C 0026BB2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8c);
/*8026ED30 0026BB30*/ PPC::Runtime::ASM::bl(fn_8026D6A0);
RUNTIME_PPC_JUMP_LABEL(.L_8026ED34, 0x8026ED34) //this is a jump label
/*8026ED34 0026BB34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8026ED38 0026BB38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*8026ED3C 0026BB3C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*8026ED40 0026BB40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026ED44 0026BB44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*8026ED48 0026BB48*/ PPC::Runtime::ASM::blr();
}