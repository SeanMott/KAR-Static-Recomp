//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8017A9DC.hpp"
#include "fn_8017A9DC.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80179414.hpp"



void fn_8017AAFC(PPC::Runtime::GCContext* context)
{
/*8017AAFC 001778FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8017AB00 00177900*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017AB04 00177904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8017AB08 00177908*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8017AB0C 0017790C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8017AB10 00177910*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8017AB14 00177914*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8017AB18 00177918*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8017AB1C 0017791C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017AB20 00177920*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8017AB24 00177924*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe98, context->r3));
/*8017AB28 00177928*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8017AB2C 0017792C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8017AB30 00177930*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8017AB34 00177934*/ PPC::Runtime::ASM::lis(context->r4, fn_8017A9DC @ Get_MemoryOffset_HighBit);
/*8017AB38 00177938*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8017AB3C 0017793C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8017AB40 00177940*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8017AB44 00177944*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8017A9DC @ Get_MemoryOffset_LowBit);
/*8017AB48 00177948*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8017AB4C 0017794C*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8017AB50 00177950*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8017AB54 00177954*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8017AB58 00177958*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe98, context->r31));
/*8017AB5C 0017795C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017AB60 00177960*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8017AB64 00177964*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0CF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017AB68 00177968*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017AB6C 0017796C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8017AB70 00177970*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017AB74 00177974*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0CF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017AB78 00177978*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*8017AB7C 0017797C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8017AB80 00177980*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8017AB84 00177984*/ PPC::Runtime::ASM::li(context->r4, 0xaa);
/*8017AB88 00177988*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8017AB8C 0017798C*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8017AB90 00177990*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8017AB94 00177994*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8017AB98 00177998*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8017AB9C 0017799C*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*8017ABA0 001779A0*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*8017ABA4 001779A4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8017ABA8 001779A8*/ PPC::Runtime::ASM::bl(fn_80179414);
/*8017ABAC 001779AC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8017ABB0 001779B0*/ PPC::Runtime::ASM::bne(.L_8017ABC4);
/*8017ABB4 001779B4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DB0 @ Get_MemoryOffset_SDA21);
/*8017ABB8 001779B8*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8017ABBC 001779BC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DB8 @ Get_MemoryOffset_SDA21);
/*8017ABC0 001779C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017ABC4, 0x8017ABC4) //this is a jump label
/*8017ABC4 001779C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017ABC8 001779C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017ABCC 001779CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8017ABD0 001779D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8017ABD4 001779D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8017ABD8 001779D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8017ABDC 001779DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8017ABE0 001779E0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8017ABE4 001779E4*/ PPC::Runtime::ASM::bne(.L_8017AC30);
/*8017ABE8 001779E8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8017ABEC 001779EC*/ PPC::Runtime::ASM::beq(.L_8017AC30);
/*8017ABF0 001779F0*/ PPC::Runtime::ASM::bne(.L_8017AC04);
/*8017ABF4 001779F4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DB0 @ Get_MemoryOffset_SDA21);
/*8017ABF8 001779F8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8017ABFC 001779FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DB8 @ Get_MemoryOffset_SDA21);
/*8017AC00 00177A00*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017AC04, 0x8017AC04) //this is a jump label
/*8017AC04 00177A04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8017AC08 00177A08*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8017AC0C 00177A0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8017AC10 00177A10*/ PPC::Runtime::ASM::bne(.L_8017AC20);
/*8017AC14 00177A14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8017AC18 00177A18*/ PPC::Runtime::ASM::beq(.L_8017AC20);
/*8017AC1C 00177A1C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8017AC20, 0x8017AC20) //this is a jump label
/*8017AC20 00177A20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8017AC24 00177A24*/ PPC::Runtime::ASM::bne(.L_8017AC30);
/*8017AC28 00177A28*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8017AC2C 00177A2C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8017AC30, 0x8017AC30) //this is a jump label
/*8017AC30 00177A30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9c, context->r31));
/*8017AC34 00177A34*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8017AC38 00177A38*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8017AC3C 00177A3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8017AC40 00177A40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017AC44 00177A44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8017AC48 00177A48*/ PPC::Runtime::ASM::blr();
}