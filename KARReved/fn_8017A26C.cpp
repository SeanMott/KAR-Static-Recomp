//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138BA4.hpp"



void fn_8017A26C(PPC::Runtime::GCContext* context)
{
/*8017A26C 0017706C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8017A270 00177070*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017A274 00177074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017A278 00177078*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017A27C 0017707C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017A280 00177080*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8017A284 00177084*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017A288 00177088*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8017A28C 0017708C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017A290 00177090*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe94, context->r3));
/*8017A294 00177094*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017A298 00177098*/ PPC::Runtime::ASM::beq(.L_8017A3BC);
/*8017A29C 0017709C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8017A2A0 001770A0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8017A2A4 001770A4*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017A2A8 001770A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8017A2AC 001770AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8017A2B0 001770B0*/ PPC::Runtime::ASM::bgt(.L_8017A2E8);
/*8017A2B4 001770B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8017A2B8 001770B8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A2BC 001770BC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8017A2C0 001770C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8017A2C4 001770C4*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A2C8 001770C8*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8017A2CC 001770CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8017A2D0 001770D0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A2D4 001770D4*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8017A2D8 001770D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8017A2DC 001770DC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A2E0 001770E0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8017A2E4 001770E4*/ PPC::Runtime::ASM::b(.L_8017A3BC);
RUNTIME_PPC_JUMP_LABEL(.L_8017A2E8, 0x8017A2E8) //this is a jump label
/*8017A2E8 001770E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8017A2EC 001770EC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A2F0 001770F0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8017A2F4 001770F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8017A2F8 001770F8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A2FC 001770FC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8017A300 00177100*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8017A304 00177104*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A308 00177108*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8017A30C 0017710C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8017A310 00177110*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A314 00177114*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8017A318 00177118*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8017A31C 0017711C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0xa);
/*8017A320 00177120*/ PPC::Runtime::ASM::blt(.L_8017A36C);
/*8017A324 00177124*/ PPC::Runtime::ASM::lis(context->r3, 0x51ec);
/*8017A328 00177128*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*8017A32C 0017712C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7ae1);
/*8017A330 00177130*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/* 8017A334 00177134  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*8017A338 00177138*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x6667);
/*8017A33C 0017713C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017A340 00177140*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*8017A344 00177144*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8017A348 00177148*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8017A34C 0017714C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x64);
/*8017A350 00177150*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r6);
/* 8017A354 00177154  7C 05 00 96 */ mulhw context->r0 , context->r5 , context->r0
/*8017A358 00177158*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8017A35C 0017715C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8017A360 00177160*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8017A364 00177164*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8017A368 00177168*/ PPC::Runtime::ASM::b(.L_8017A378);
RUNTIME_PPC_JUMP_LABEL(.L_8017A36C, 0x8017A36C) //this is a jump label
/*8017A36C 0017716C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8017A370 00177170*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017A374 00177174*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_8017A378, 0x8017A378) //this is a jump label
/*8017A378 00177178*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8017A37C 0017717C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8017A380 00177180*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8017A384 00177184*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/* 8017A388 00177188  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*8017A38C 0017718C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017A390 00177190*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8017A394 00177194*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8017A398 00177198*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8017A39C 0017719C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8017A3A0 001771A0*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r5);
/*8017A3A4 001771A4*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8017A3A8 001771A8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017A3AC 001771AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8017A3B0 001771B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017A3B4 001771B4*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8017A3B8 001771B8*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_8017A3BC, 0x8017A3BC) //this is a jump label
/*8017A3BC 001771BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017A3C0 001771C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017A3C4 001771C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017A3C8 001771C8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017A3CC 001771CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017A3D0 001771D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8017A3D4 001771D4*/ PPC::Runtime::ASM::blr();
}