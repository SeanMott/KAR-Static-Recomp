//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"



void fn_debugInitMenu(PPC::Runtime::GCContext* context)
{
/*800AB2D4 000A80D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800AB2D8 000A80D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AB2DC 000A80DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800AB2E0 000A80E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800AB2E4 000A80E4*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800AB2E8 000A80E8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DF170 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB2EC 000A80EC*/ PPC::Runtime::ASM::lis(context->r10, MemoryOffset_659 @ Get_MemoryOffset_HighBit);
/*800AB2F0 000A80F0*/ PPC::Runtime::ASM::lis(context->r9, lbl_80557008 @ Get_MemoryOffset_HighBit);
/*800AB2F4 000A80F4*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*800AB2F8 000A80F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800AB2FC 000A80FC*/ PPC::Runtime::ASM::addi(context->r3, context->r9, lbl_80557008 @ Get_MemoryOffset_LowBit);
/*800AB300 000A8100*/ PPC::Runtime::ASM::mr(context->r24, context->r4);
/*800AB304 000A8104*/ PPC::Runtime::ASM::mr(context->r25, context->r5);
/*800AB308 000A8108*/ PPC::Runtime::ASM::mr(context->r27, context->r6);
/*800AB30C 000A810C*/ PPC::Runtime::ASM::mr(context->r28, context->r7);
/*800AB310 000A8110*/ PPC::Runtime::ASM::mr(context->r29, context->r8);
/*800AB314 000A8114*/ PPC::Runtime::ASM::addi(context->r31, context->r10, MemoryOffset_659 @ Get_MemoryOffset_LowBit);
/*800AB318 000A8118*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/* 800AB31C 000A811C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*800AB320 000A8120*/ PPC::Runtime::ASM::bne(.L_800AB340);
/*800AB324 000A8124*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x68);
/*800AB328 000A8128*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800AB32C 000A812C*/ PPC::Runtime::ASM::bl(OSReport);
/*800AB330 000A8130*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x80);
/*800AB334 000A8134*/ PPC::Runtime::ASM::li(context->r4, 0x83);
/*800AB338 000A8138*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5BC0 @ Get_MemoryOffset_SDA21);
/*800AB33C 000A813C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800AB340, 0x800AB340) //this is a jump label
/*800AB340 000A8140*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800AB344 000A8144*/ PPC::Runtime::ASM::beq(.L_800AB4A4);
/*800AB348 000A8148*/ PPC::Runtime::ASM::sth(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800AB34C 000A814C*/ PPC::Runtime::ASM::mullw(context->r0, context->r27, context->r28);
/*800AB350 000A8150*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800AB354 000A8154*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF184 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB358 000A8158*/ PPC::Runtime::ASM::sth(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*800AB35C 000A815C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*800AB360 000A8160*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF188 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB364 000A8164*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800AB368 000A8168*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x780);
/*800AB36C 000A816C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800AB370 000A8170*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*800AB374 000A8174*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*800AB378 000A8178*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*800AB37C 000A817C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r30));
/*800AB380 000A8180*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800AB384 000A8184*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800AB388 000A8188*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800AB38C 000A818C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DF174 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB390 000A8190*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*800AB394 000A8194*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DF178 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB398 000A8198*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*800AB39C 000A819C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DF17C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB3A0 000A81A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*800AB3A4 000A81A4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DF180 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB3A8 000A81A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*800AB3AC 000A81AC*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*800AB3B0 000A81B0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*800AB3B4 000A81B4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r30));
/*800AB3B8 000A81B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r30));
/*800AB3BC 000A81BC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 2, 24, 29);
/*800AB3C0 000A81C0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r30));
/*800AB3C4 000A81C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r30));
/*800AB3C8 000A81C8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 0, 30, 31);
/*800AB3CC 000A81CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r30));
/*800AB3D0 000A81D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800AB3D4 000A81D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*800AB3D8 000A81D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*800AB3DC 000A81DC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*800AB3E0 000A81E0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*800AB3E4 000A81E4*/ PPC::Runtime::ASM::ble(.L_800AB404);
/*800AB3E8 000A81E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c);
/*800AB3EC 000A81EC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800AB3F0 000A81F0*/ PPC::Runtime::ASM::bl(OSReport);
/*800AB3F4 000A81F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x80);
/*800AB3F8 000A81F8*/ PPC::Runtime::ASM::li(context->r4, 0x192);
/*800AB3FC 000A81FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5BC0 @ Get_MemoryOffset_SDA21);
/*800AB400 000A8200*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800AB404, 0x800AB404) //this is a jump label
/*800AB404 000A8204*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800AB408 000A8208*/ PPC::Runtime::ASM::bne(.L_800AB434);
/*800AB40C 000A820C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557034 @ Get_MemoryOffset_HighBit);
/*800AB410 000A8210*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557034 @ Get_MemoryOffset_LowBit);
/*800AB414 000A8214*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800AB418 000A8218*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 1);
/*800AB41C 000A821C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*800AB420 000A8220*/ PPC::Runtime::ASM::mullw(context->r5, context->r28, context->r0);
/*800AB424 000A8224*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AB428 000A8228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*800AB42C 000A822C*/ PPC::Runtime::ASM::bl(memset);
/*800AB430 000A8230*/ PPC::Runtime::ASM::b(.L_800AB43C);
RUNTIME_PPC_JUMP_LABEL(.L_800AB434, 0x800AB434) //this is a jump label
/*800AB434 000A8234*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800AB438 000A8238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800AB43C, 0x800AB43C) //this is a jump label
/*800AB43C 000A823C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD69C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB440 000A8240*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800AB444 000A8244*/ PPC::Runtime::ASM::beq(.L_800AB4A0);
/*800AB448 000A8248*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AB44C 000A824C*/ PPC::Runtime::ASM::b(.L_800AB470);
RUNTIME_PPC_JUMP_LABEL(.L_800AB450, 0x800AB450) //this is a jump label
/*800AB450 000A8250*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*800AB454 000A8254*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*800AB458 000A8258*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*800AB45C 000A825C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800AB460 000A8260*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800AB464 000A8264*/ PPC::Runtime::ASM::blt(.L_800AB478);
/*800AB468 000A8268*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800AB46C 000A826C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_800AB470, 0x800AB470) //this is a jump label
/*800AB470 000A8270*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800AB474 000A8274*/ PPC::Runtime::ASM::bne(.L_800AB450);
RUNTIME_PPC_JUMP_LABEL(.L_800AB478, 0x800AB478) //this is a jump label
/*800AB478 000A8278*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800AB47C 000A827C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*800AB480 000A8280*/ PPC::Runtime::ASM::beq(.L_800AB490);
/*800AB484 000A8284*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*800AB488 000A8288*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800AB48C 000A828C*/ PPC::Runtime::ASM::b(.L_800AB4A4);
RUNTIME_PPC_JUMP_LABEL(.L_800AB490, 0x800AB490) //this is a jump label
/*800AB490 000A8290*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800AB494 000A8294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800AB498 000A8298*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DD69C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800AB49C 000A829C*/ PPC::Runtime::ASM::b(.L_800AB4A4);
RUNTIME_PPC_JUMP_LABEL(.L_800AB4A0, 0x800AB4A0) //this is a jump label
/*800AB4A0 000A82A0*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DD69C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_800AB4A4, 0x800AB4A4) //this is a jump label
/*800AB4A4 000A82A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800AB4A8 000A82A8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800AB4AC 000A82AC*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800AB4B0 000A82B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800AB4B4 000A82B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AB4B8 000A82B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800AB4BC 000A82BC*/ PPC::Runtime::ASM::blr();
}