//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_8037B33C.hpp"
#include "fn_802EFFB8.hpp"



void fn_802FD1C0(PPC::Runtime::GCContext* context)
{
/*802FD1C0 002F9FC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802FD1C4 002F9FC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FD1C8 002F9FC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FD1CC 002F9FCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FD1D0 002F9FD0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FD1D4 002F9FD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 802FD1D8 002F9FD8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FD1DC 002F9FDC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD1E0 002F9FE0*/ PPC::Runtime::ASM::beq(.L_802FD384);
/*802FD1E4 002F9FE4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D9980 @ Get_MemoryOffset_HighBit);
/*802FD1E8 002F9FE8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*802FD1EC 002F9FEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D9980 @ Get_MemoryOffset_LowBit);
/*802FD1F0 002F9FF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD1F4 002F9FF4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD1F8 002F9FF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc4, context->r29));
/*802FD1FC 002F9FFC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*802FD200 002FA000*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FD204 002FA004*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*802FD208 002FA008*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc8, context->r29));
/*802FD20C 002FA00C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8c);
/*802FD210 002FA010*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FD214 002FA014*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbcc, context->r29));
/*802FD218 002FA018*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd8, context->r29));
/*802FD21C 002FA01C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd4, context->r29));
/*802FD220 002FA020*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd0, context->r29));
/*802FD224 002FA024*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbdc, context->r29));
/*802FD228 002FA028*/ PPC::Runtime::ASM::beq(.L_802FD274);
/*802FD22C 002FA02C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802FD230 002FA030*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802FD234 002FA034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802FD238 002FA038*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*802FD23C 002FA03C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802FD240 002FA040*/ PPC::Runtime::ASM::beq(.L_802FD24C);
/*802FD244 002FA044*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FD248 002FA048*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802FD24C, 0x802FD24C) //this is a jump label
/*802FD24C 002FA04C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8c);
/*802FD250 002FA050*/ PPC::Runtime::ASM::beq(.L_802FD274);
/*802FD254 002FA054*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802FD258 002FA058*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c);
/*802FD25C 002FA05C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802FD260 002FA060*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802FD264 002FA064*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802FD268 002FA068*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD26C 002FA06C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD270 002FA070*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD274, 0x802FD274) //this is a jump label
/*802FD274 002FA074*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x40);
/*802FD278 002FA078*/ PPC::Runtime::ASM::beq(.L_802FD2BC);
/*802FD27C 002FA07C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*802FD280 002FA080*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x40);
/*802FD284 002FA084*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*802FD288 002FA088*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FD28C 002FA08C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802FD290 002FA090*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*802FD294 002FA094*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x40);
/*802FD298 002FA098*/ PPC::Runtime::ASM::beq(.L_802FD2BC);
/*802FD29C 002FA09C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*802FD2A0 002FA0A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x40);
/*802FD2A4 002FA0A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*802FD2A8 002FA0A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802FD2AC 002FA0AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802FD2B0 002FA0B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD2B4 002FA0B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD2B8 002FA0B8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD2BC, 0x802FD2BC) //this is a jump label
/*802FD2BC 002FA0BC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD2C0 002FA0C0*/ PPC::Runtime::ASM::beq(.L_802FD374);
/*802FD2C4 002FA0C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FD2C8 002FA0C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FD2CC 002FA0CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD2D0 002FA0D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD2D4 002FA0D4*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FD2D8 002FA0D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FD2DC 002FA0DC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD2E0 002FA0E0*/ PPC::Runtime::ASM::bctrl();
/*802FD2E4 002FA0E4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD2E8 002FA0E8*/ PPC::Runtime::ASM::beq(.L_802FD334);
/*802FD2EC 002FA0EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FD2F0 002FA0F0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD2F4 002FA0F4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FD2F8 002FA0F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD2FC 002FA0FC*/ PPC::Runtime::ASM::beq(.L_802FD334);
/*802FD300 002FA100*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FD304 002FA104*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD308 002FA108*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FD30C 002FA10C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD310 002FA110*/ PPC::Runtime::ASM::beq(.L_802FD334);
/*802FD314 002FA114*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FD318 002FA118*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FD31C 002FA11C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FD320 002FA120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD324 002FA124*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD328 002FA128*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD32C 002FA12C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD330 002FA130*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD334, 0x802FD334) //this is a jump label
/*802FD334 002FA134*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD338 002FA138*/ PPC::Runtime::ASM::beq(.L_802FD374);
/*802FD33C 002FA13C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FD340 002FA140*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FD344 002FA144*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FD348 002FA148*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FD34C 002FA14C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD350 002FA150*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FD354 002FA154*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD358 002FA158*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FD35C 002FA15C*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FD360 002FA160*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD364 002FA164*/ PPC::Runtime::ASM::beq(.L_802FD374);
/*802FD368 002FA168*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FD36C 002FA16C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FD370 002FA170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FD374, 0x802FD374) //this is a jump label
/*802FD374 002FA174*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FD378 002FA178*/ PPC::Runtime::ASM::ble(.L_802FD384);
/*802FD37C 002FA17C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FD380 002FA180*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FD384, 0x802FD384) //this is a jump label
/*802FD384 002FA184*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FD388 002FA188*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FD38C 002FA18C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FD390 002FA190*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FD394 002FA194*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD398 002FA198*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FD39C 002FA19C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802FD3A0 002FA1A0*/ PPC::Runtime::ASM::blr();
}