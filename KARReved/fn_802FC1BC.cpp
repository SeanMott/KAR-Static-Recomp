//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_802EFFB8.hpp"



void fn_802FC1BC(PPC::Runtime::GCContext* context)
{
/*802FC1BC 002F8FBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FC1C0 002F8FC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FC1C4 002F8FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FC1C8 002F8FC8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FC1CC 002F8FCC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FC1D0 002F8FD0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802FC1D4 002F8FD4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FC1D8 002F8FD8*/ PPC::Runtime::ASM::beq(.L_802FC300);
/*802FC1DC 002F8FDC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D90E8 @ Get_MemoryOffset_HighBit);
/*802FC1E0 002F8FE0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x50);
/*802FC1E4 002F8FE4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D90E8 @ Get_MemoryOffset_LowBit);
/*802FC1E8 002F8FE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC1EC 002F8FEC*/ PPC::Runtime::ASM::beq(.L_802FC238);
/*802FC1F0 002F8FF0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802FC1F4 002F8FF4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802FC1F8 002F8FF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*802FC1FC 002F8FFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*802FC200 002F9000*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802FC204 002F9004*/ PPC::Runtime::ASM::beq(.L_802FC210);
/*802FC208 002F9008*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FC20C 002F900C*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802FC210, 0x802FC210) //this is a jump label
/*802FC210 002F9010*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x50);
/*802FC214 002F9014*/ PPC::Runtime::ASM::beq(.L_802FC238);
/*802FC218 002F9018*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802FC21C 002F901C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x50);
/*802FC220 002F9020*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802FC224 002F9024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*802FC228 002F9028*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*802FC22C 002F902C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FC230 002F9030*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC234 002F9034*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FC238, 0x802FC238) //this is a jump label
/*802FC238 002F9038*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC23C 002F903C*/ PPC::Runtime::ASM::beq(.L_802FC2F0);
/*802FC240 002F9040*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FC244 002F9044*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FC248 002F9048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC24C 002F904C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC250 002F9050*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FC254 002F9054*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FC258 002F9058*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC25C 002F905C*/ PPC::Runtime::ASM::bctrl();
/*802FC260 002F9060*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC264 002F9064*/ PPC::Runtime::ASM::beq(.L_802FC2B0);
/*802FC268 002F9068*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FC26C 002F906C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC270 002F9070*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FC274 002F9074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC278 002F9078*/ PPC::Runtime::ASM::beq(.L_802FC2B0);
/*802FC27C 002F907C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FC280 002F9080*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC284 002F9084*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FC288 002F9088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC28C 002F908C*/ PPC::Runtime::ASM::beq(.L_802FC2B0);
/*802FC290 002F9090*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FC294 002F9094*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FC298 002F9098*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FC29C 002F909C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC2A0 002F90A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC2A4 002F90A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FC2A8 002F90A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC2AC 002F90AC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FC2B0, 0x802FC2B0) //this is a jump label
/*802FC2B0 002F90B0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC2B4 002F90B4*/ PPC::Runtime::ASM::beq(.L_802FC2F0);
/*802FC2B8 002F90B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FC2BC 002F90BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FC2C0 002F90C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FC2C4 002F90C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FC2C8 002F90C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC2CC 002F90CC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FC2D0 002F90D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC2D4 002F90D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FC2D8 002F90D8*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FC2DC 002F90DC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC2E0 002F90E0*/ PPC::Runtime::ASM::beq(.L_802FC2F0);
/*802FC2E4 002F90E4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FC2E8 002F90E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FC2EC 002F90EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FC2F0, 0x802FC2F0) //this is a jump label
/*802FC2F0 002F90F0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FC2F4 002F90F4*/ PPC::Runtime::ASM::ble(.L_802FC300);
/*802FC2F8 002F90F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FC2FC 002F90FC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FC300, 0x802FC300) //this is a jump label
/*802FC300 002F9100*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FC304 002F9104*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FC308 002F9108*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FC30C 002F910C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FC310 002F9110*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FC314 002F9114*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FC318 002F9118*/ PPC::Runtime::ASM::blr();
}