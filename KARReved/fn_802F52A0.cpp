//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EFE44.hpp"



void fn_802F52A0(PPC::Runtime::GCContext* context)
{
/*802F52A0 002F20A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802F52A4 002F20A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F52A8 002F20A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F52AC 002F20AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F52B0 002F20B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802F52B4 002F20B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F52B8 002F20B8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F52BC 002F20BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F52C0 002F20C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*802F52C4 002F20C4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F52C8 002F20C8*/ PPC::Runtime::ASM::beq(.L_802F530C);
/*802F52CC 002F20CC*/ PPC::Runtime::ASM::bne(.L_802F52E0);
/*802F52D0 002F20D0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F52D4 002F20D4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F52D8 002F20D8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F52DC 002F20DC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F52E0, 0x802F52E0) //this is a jump label
/*802F52E0 002F20E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F52E4 002F20E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F52E8 002F20E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F52EC 002F20EC*/ PPC::Runtime::ASM::bne(.L_802F52FC);
/*802F52F0 002F20F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F52F4 002F20F4*/ PPC::Runtime::ASM::beq(.L_802F52FC);
/*802F52F8 002F20F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F52FC, 0x802F52FC) //this is a jump label
/* 802F52FC 002F20FC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F5300 002F2100*/ PPC::Runtime::ASM::beq(.L_802F530C);
/*802F5304 002F2104*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F5308 002F2108*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_802F530C, 0x802F530C) //this is a jump label
/*802F530C 002F210C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F5310 002F2110*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F5314 002F2114*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*802F5318 002F2118*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*802F531C 002F211C*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x44);
/*802F5320 002F2120*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802F5324 002F2124  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802F5328 002F2128*/ PPC::Runtime::ASM::bne(.L_802F533C);
/*802F532C 002F212C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F5330 002F2130*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*802F5334 002F2134*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F5338 002F2138*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F533C, 0x802F533C) //this is a jump label
/*802F533C 002F213C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802F5340 002F2140*/ PPC::Runtime::ASM::bne(.L_802F5354);
/*802F5344 002F2144*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F5348 002F2148*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*802F534C 002F214C*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 3 @ Get_MemoryOffset_SDA21);
/*802F5350 002F2150*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F5354, 0x802F5354) //this is a jump label
/*802F5354 002F2154*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802F5358 002F2158*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*802F535C 002F215C*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*802F5360 002F2160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F5364 002F2164*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F5368 002F2168*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*802F536C 002F216C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F5370 002F2170*/ PPC::Runtime::ASM::beq(.L_802F53B4);
/*802F5374 002F2174*/ PPC::Runtime::ASM::bne(.L_802F5388);
/*802F5378 002F2178*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F537C 002F217C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F5380 002F2180*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F5384 002F2184*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F5388, 0x802F5388) //this is a jump label
/*802F5388 002F2188*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F538C 002F218C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F5390 002F2190*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F5394 002F2194*/ PPC::Runtime::ASM::bne(.L_802F53A4);
/*802F5398 002F2198*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F539C 002F219C*/ PPC::Runtime::ASM::beq(.L_802F53A4);
/*802F53A0 002F21A0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F53A4, 0x802F53A4) //this is a jump label
/* 802F53A4 002F21A4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F53A8 002F21A8*/ PPC::Runtime::ASM::bne(.L_802F53B4);
/*802F53AC 002F21AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F53B0 002F21B0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802F53B4, 0x802F53B4) //this is a jump label
/*802F53B4 002F21B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F53B8 002F21B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F53BC 002F21BC*/ PPC::Runtime::ASM::bl(fn_802EFE44);
/*802F53C0 002F21C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F53C4 002F21C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F53C8 002F21C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F53CC 002F21CC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F53D0 002F21D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F53D4 002F21D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802F53D8 002F21D8*/ PPC::Runtime::ASM::blr();
}