//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_grGetItemData.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "memset.hpp"



void fn_800EC364(PPC::Runtime::GCContext* context)
{
/*800EC364 000E9164*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800EC368 000E9168*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EC36C 000E916C*/ PPC::Runtime::ASM::lis(context->r4, lbl_805576A8 @ Get_MemoryOffset_HighBit);
/*800EC370 000E9170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EC374 000E9174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800EC378 000E9178*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_805576A8 @ Get_MemoryOffset_LowBit);
/*800EC37C 000E917C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800EC380 000E9180*/ PPC::Runtime::ASM::bl(fn_grGetItemData);
/* 800EC384 000E9184  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*800EC388 000E9188*/ PPC::Runtime::ASM::beq(.L_800EC4B4);
/*800EC38C 000E918C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800EC390 000E9190*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800EC394 000E9194*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800EC398 000E9198*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC39C 000E919C*/ PPC::Runtime::ASM::beq(.L_800EC4B4);
/*800EC3A0 000E91A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800EC3A4 000E91A4*/ PPC::Runtime::ASM::li(context->r5, 0x2ac);
/*800EC3A8 000E91A8*/ PPC::Runtime::ASM::bl(memset);
/*800EC3AC 000E91AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800EC3B0 000E91B0*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800EC3B4 000E91B4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC3B8 000E91B8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*800EC3BC 000E91BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800EC3C0 000E91C0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800EC3C4 000E91C4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800EC3C8 000E91C8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC3CC 000E91CC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800EC3D0 000E91D0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800EC3D4 000E91D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC3D8 000E91D8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800EC3DC 000E91DC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800EC3E0 000E91E0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC3E4 000E91E4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800EC3E8 000E91E8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800EC3EC 000E91EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC3F0 000E91F0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EC3F4 000E91F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC3F8 000E91F8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r3));
/*800EC3FC 000E91FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC400 000E9200*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x250, context->r3));
/*800EC404 000E9204*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC408 000E9208*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x254, context->r3));
/*800EC40C 000E920C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC410 000E9210*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x258, context->r3));
/*800EC414 000E9214*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC418 000E9218*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25c, context->r3));
/*800EC41C 000E921C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC420 000E9220*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r3));
/*800EC424 000E9224*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC428 000E9228*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x264, context->r3));
/*800EC42C 000E922C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC430 000E9230*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r3));
/*800EC434 000E9234*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC438 000E9238*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r3));
/*800EC43C 000E923C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC440 000E9240*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x270, context->r3));
/*800EC444 000E9244*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC448 000E9248*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r3));
/*800EC44C 000E924C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC450 000E9250*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r3));
/*800EC454 000E9254*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC458 000E9258*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27c, context->r3));
/*800EC45C 000E925C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC460 000E9260*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x280, context->r3));
/*800EC464 000E9264*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC468 000E9268*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x284, context->r3));
/*800EC46C 000E926C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC470 000E9270*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x288, context->r3));
/*800EC474 000E9274*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC478 000E9278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28c, context->r3));
/*800EC47C 000E927C*/ PPC::Runtime::ASM::b(.L_800EC484);
/*800EC480 000E9280*/ PPC::Runtime::ASM::b(.L_800EC4B4);
RUNTIME_PPC_JUMP_LABEL(.L_800EC484, 0x800EC484) //this is a jump label
/*800EC484 000E9284*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*800EC488 000E9288*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800EC48C 000E928C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC490 000E9290*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800EC494 000E9294*/ PPC::Runtime::ASM::li(context->r5, 0x275);
/*800EC498 000E9298*/ PPC::Runtime::ASM::bl(memset);
/*800EC49C 000E929C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*800EC4A0 000E92A0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800EC4A4 000E92A4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD6E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EC4A8 000E92A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800EC4AC 000E92AC*/ PPC::Runtime::ASM::li(context->r5, 0x74);
/*800EC4B0 000E92B0*/ PPC::Runtime::ASM::bl(memset);
RUNTIME_PPC_JUMP_LABEL(.L_800EC4B4, 0x800EC4B4) //this is a jump label
/*800EC4B4 000E92B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800EC4B8 000E92B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800EC4BC 000E92BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800EC4C0 000E92C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EC4C4 000E92C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800EC4C8 000E92C8*/ PPC::Runtime::ASM::blr();
}