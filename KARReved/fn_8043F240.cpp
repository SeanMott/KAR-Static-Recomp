//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80439604.hpp"
#include "fn_804394A4.hpp"
#include "fn_8043A298.hpp"
#include "fn_8043A578.hpp"
#include "fn_80439604.hpp"
#include "fn_804394A4.hpp"
#include "fn_8043F0A4.hpp"
#include "DCFlushRange.hpp"



void fn_8043F240(PPC::Runtime::GCContext* context)
{
/*8043F240 0043C040*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8043F244 0043C044*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043F248 0043C048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8043F24C 0043C04C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8043F250 0043C050*/ PPC::Runtime::ASM::bl(_savegpr_16);
/*8043F254 0043C054*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F258 0043C058*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F25C 0043C05C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8043F260 0043C060*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8043F264 0043C064*/ PPC::Runtime::ASM::beq(.L_8043F37C);
/*8043F268 0043C068*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8043F26C 0043C06C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8043F270 0043C070*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*8043F274 0043C074*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8043F278 0043C078*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r0);
/*8043F27C 0043C07C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8043F280 0043C080*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8043F284 0043C084*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8043F288 0043C088*/ PPC::Runtime::ASM::srwi(context->r3, context->r3, 1);
/*8043F28C 0043C08C*/ PPC::Runtime::ASM::ble(.L_8043F46C);
/* 8043F290 0043C090  54 60 F0 BF */ srwi. context->r0 , context->r3 , 2
/*8043F294 0043C094*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8043F298 0043C098*/ PPC::Runtime::ASM::beq(.L_8043F348);
RUNTIME_PPC_JUMP_LABEL(.L_8043F29C, 0x8043F29C) //this is a jump label
/*8043F29C 0043C09C*/ PPC::Runtime::ASM::add(context->r8, context->r7, context->r5);
/*8043F2A0 0043C0A0*/ PPC::Runtime::ASM::add(context->r9, context->r6, context->r5);
/*8043F2A4 0043C0A4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8043F2A8 0043C0A8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*8043F2AC 0043C0AC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x10);
/*8043F2B0 0043C0B0*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 8);
/*8043F2B4 0043C0B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*8043F2B8 0043C0B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8043F2BC 0043C0BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*8043F2C0 0043C0C0*/ PPC::Runtime::ASM::add(context->r8, context->r7, context->r5);
/*8043F2C4 0043C0C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r9));
/*8043F2C8 0043C0C8*/ PPC::Runtime::ASM::add(context->r9, context->r6, context->r5);
/*8043F2CC 0043C0CC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*8043F2D0 0043C0D0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8043F2D4 0043C0D4*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x10);
/*8043F2D8 0043C0D8*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 8);
/*8043F2DC 0043C0DC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*8043F2E0 0043C0E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8043F2E4 0043C0E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*8043F2E8 0043C0E8*/ PPC::Runtime::ASM::add(context->r8, context->r7, context->r5);
/*8043F2EC 0043C0EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r9));
/*8043F2F0 0043C0F0*/ PPC::Runtime::ASM::add(context->r9, context->r6, context->r5);
/*8043F2F4 0043C0F4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*8043F2F8 0043C0F8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8043F2FC 0043C0FC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x10);
/*8043F300 0043C100*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 8);
/*8043F304 0043C104*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*8043F308 0043C108*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8043F30C 0043C10C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*8043F310 0043C110*/ PPC::Runtime::ASM::add(context->r8, context->r7, context->r5);
/*8043F314 0043C114*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r9));
/*8043F318 0043C118*/ PPC::Runtime::ASM::add(context->r9, context->r6, context->r5);
/*8043F31C 0043C11C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*8043F320 0043C120*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8043F324 0043C124*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x10);
/*8043F328 0043C128*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 8);
/*8043F32C 0043C12C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*8043F330 0043C130*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8043F334 0043C134*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*8043F338 0043C138*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r9));
/*8043F33C 0043C13C*/ PPC::Runtime::ASM::bdnz(.L_8043F29C);
/*8043F340 0043C140*/ PPC::Runtime::ASM::andi.(context->r3, context->r3, 0x3);
/*8043F344 0043C144*/ PPC::Runtime::ASM::beq(.L_8043F46C);
RUNTIME_PPC_JUMP_LABEL(.L_8043F348, 0x8043F348) //this is a jump label
/*8043F348 0043C148*/ PPC::Runtime::ASM::mtctr(context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F34C, 0x8043F34C) //this is a jump label
/*8043F34C 0043C14C*/ PPC::Runtime::ASM::add(context->r8, context->r7, context->r5);
/*8043F350 0043C150*/ PPC::Runtime::ASM::add(context->r9, context->r6, context->r5);
/*8043F354 0043C154*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8043F358 0043C158*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2);
/*8043F35C 0043C15C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x10);
/*8043F360 0043C160*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 8);
/*8043F364 0043C164*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*8043F368 0043C168*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8043F36C 0043C16C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*8043F370 0043C170*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r9));
/*8043F374 0043C174*/ PPC::Runtime::ASM::bdnz(.L_8043F34C);
/*8043F378 0043C178*/ PPC::Runtime::ASM::b(.L_8043F46C);
RUNTIME_PPC_JUMP_LABEL(.L_8043F37C, 0x8043F37C) //this is a jump label
/*8043F37C 0043C17C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80507348 @ Get_MemoryOffset_HighBit);
/*8043F380 0043C180*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*8043F384 0043C184*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80507348 @ Get_MemoryOffset_LowBit);
/*8043F388 0043C188*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8043F38C 0043C18C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*8043F390 0043C190*/ PPC::Runtime::ASM::b(.L_8043F45C);
RUNTIME_PPC_JUMP_LABEL(.L_8043F394, 0x8043F394) //this is a jump label
/*8043F394 0043C194*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x1);
/*8043F398 0043C198*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8043F39C 0043C19C*/ PPC::Runtime::ASM::mulli(context->r22, context->r0, 0xe);
/*8043F3A0 0043C1A0*/ PPC::Runtime::ASM::li(context->r21, 0x14);
/*8043F3A4 0043C1A4*/ PPC::Runtime::ASM::b(.L_8043F44C);
RUNTIME_PPC_JUMP_LABEL(.L_8043F3A8, 0x8043F3A8) //this is a jump label
/*8043F3A8 0043C1A8*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8043F3AC 0043C1AC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8043F3B0 0043C1B0*/ PPC::Runtime::ASM::subi(context->r4, context->r8, 0x28);
/*8043F3B4 0043C1B4*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8043F3B8 0043C1B8*/ PPC::Runtime::ASM::subf(context->r5, context->r22, context->r4);
/* 8043F3BC 0043C1BC  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*8043F3C0 0043C1C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8043F3C4 0043C1C4*/ PPC::Runtime::ASM::extrwi(context->r6, context->r3, 1, 25);
/*8043F3C8 0043C1C8*/ PPC::Runtime::ASM::beq(.L_8043F410);
/*8043F3CC 0043C1CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*8043F3D0 0043C1D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F3D4 0043C1D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F3D8 0043C1D8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8043F3DC 0043C1DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8043F3E0 0043C1E0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*8043F3E4 0043C1E4*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 2);
/*8043F3E8 0043C1E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8043F3EC 0043C1EC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8043F3F0 0043C1F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8043F3F4 0043C1F4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8043F3F8 0043C1F8*/ PPC::Runtime::ASM::addi(context->r3, context->r8, 0x700);
/*8043F3FC 0043C1FC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8043F400 0043C200*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8043F404 0043C204*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8043F408 0043C208*/ PPC::Runtime::ASM::bl(fn_80439604);
/*8043F40C 0043C20C*/ PPC::Runtime::ASM::b(.L_8043F444);
RUNTIME_PPC_JUMP_LABEL(.L_8043F410, 0x8043F410) //this is a jump label
/*8043F410 0043C210*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8043F414 0043C214*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F418 0043C218*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F41C 0043C21C*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*8043F420 0043C220*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 2);
/*8043F424 0043C224*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8043F428 0043C228*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8043F42C 0043C22C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8043F430 0043C230*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8043F434 0043C234*/ PPC::Runtime::ASM::mr(context->r4, context->r21);
/*8043F438 0043C238*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*8043F43C 0043C23C*/ PPC::Runtime::ASM::addi(context->r3, context->r11, 0x700);
/*8043F440 0043C240*/ PPC::Runtime::ASM::bl(fn_804394A4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F444, 0x8043F444) //this is a jump label
/*8043F444 0043C244*/ PPC::Runtime::ASM::addi(context->r21, context->r21, 0xb);
/*8043F448 0043C248*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8043F44C, 0x8043F44C) //this is a jump label
/*8043F44C 0043C24C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8043F450 0043C250*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*8043F454 0043C254*/ PPC::Runtime::ASM::blt(.L_8043F3A8);
/*8043F458 0043C258*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8043F45C, 0x8043F45C) //this is a jump label
/*8043F45C 0043C25C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8043F460 0043C260*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8043F464 0043C264*/ PPC::Runtime::ASM::ble(.L_8043F394);
/*8043F468 0043C268*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8043F46C, 0x8043F46C) //this is a jump label
/*8043F46C 0043C26C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F470 0043C270*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8043F474 0043C274*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F478 0043C278*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8043F47C 0043C27C*/ PPC::Runtime::ASM::addi(context->r31, context->r30, 0x24);
/*8043F480 0043C280*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8043F484 0043C284*/ PPC::Runtime::ASM::lwz(context->r16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8043F488 0043C288*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 2);
/*8043F48C 0043C28C*/ PPC::Runtime::ASM::lwz(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8043F490 0043C290*/ PPC::Runtime::ASM::extrwi(context->r29, context->r0, 1, 24);
/*8043F494 0043C294*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8043F498 0043C298*/ PPC::Runtime::ASM::subi(context->r19, context->r16, 0x28);
/*8043F49C 0043C29C*/ PPC::Runtime::ASM::lwzx(context->r23, context->r31, context->r3);
/*8043F4A0 0043C2A0*/ PPC::Runtime::ASM::extrwi(context->r28, context->r0, 1, 25);
/*8043F4A4 0043C2A4*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8043F4A8 0043C2A8*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8043F4AC 0043C2AC*/ PPC::Runtime::ASM::lwz(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8043F4B0 0043C2B0*/ PPC::Runtime::ASM::lwz(context->r17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8043F4B4 0043C2B4*/ PPC::Runtime::ASM::b(.L_8043F574);
RUNTIME_PPC_JUMP_LABEL(.L_8043F4B8, 0x8043F4B8) //this is a jump label
/*8043F4B8 0043C2B8*/ PPC::Runtime::ASM::mr(context->r3, context->r17);
/*8043F4BC 0043C2BC*/ PPC::Runtime::ASM::mr(context->r4, context->r18);
/*8043F4C0 0043C2C0*/ PPC::Runtime::ASM::bl(fn_8043A298);
/*8043F4C4 0043C2C4*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8043F4C8 0043C2C8*/ PPC::Runtime::ASM::subi(context->r19, context->r19, 0xe);
/*8043F4CC 0043C2CC*/ PPC::Runtime::ASM::li(context->r20, 0x14);
/*8043F4D0 0043C2D0*/ PPC::Runtime::ASM::b(.L_8043F564);
RUNTIME_PPC_JUMP_LABEL(.L_8043F4D4, 0x8043F4D4) //this is a jump label
/*8043F4D4 0043C2D4*/ PPC::Runtime::ASM::bl(fn_8043A578);
/* 8043F4D8 0043C2D8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8043F4DC 0043C2DC*/ PPC::Runtime::ASM::beq(.L_8043F56C);
/*8043F4E0 0043C2E0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8043F4E4 0043C2E4*/ PPC::Runtime::ASM::beq(.L_8043F528);
/*8043F4E8 0043C2E8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 25);
/*8043F4EC 0043C2EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8043F4F0 0043C2F0*/ PPC::Runtime::ASM::mulli(context->r11, context->r0, 0x38);
/*8043F4F4 0043C2F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80505680 @ Get_MemoryOffset_HighBit);
/*8043F4F8 0043C2F8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8043F4FC 0043C2FC*/ PPC::Runtime::ASM::mr(context->r4, context->r20);
/*8043F500 0043C300*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80505680 @ Get_MemoryOffset_LowBit);
/*8043F504 0043C304*/ PPC::Runtime::ASM::mr(context->r5, context->r19);
/*8043F508 0043C308*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*8043F50C 0043C30C*/ PPC::Runtime::ASM::mr(context->r7, context->r23);
/*8043F510 0043C310*/ PPC::Runtime::ASM::mr(context->r8, context->r22);
/*8043F514 0043C314*/ PPC::Runtime::ASM::mr(context->r9, context->r16);
/*8043F518 0043C318*/ PPC::Runtime::ASM::mr(context->r10, context->r21);
/*8043F51C 0043C31C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r11);
/*8043F520 0043C320*/ PPC::Runtime::ASM::bl(fn_80439604);
/*8043F524 0043C324*/ PPC::Runtime::ASM::b(.L_8043F55C);
RUNTIME_PPC_JUMP_LABEL(.L_8043F528, 0x8043F528) //this is a jump label
/*8043F528 0043C328*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 25);
/*8043F52C 0043C32C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80505680 @ Get_MemoryOffset_HighBit);
/*8043F530 0043C330*/ PPC::Runtime::ASM::mulli(context->r10, context->r0, 0x38);
/*8043F534 0043C334*/ PPC::Runtime::ASM::mr(context->r4, context->r20);
/*8043F538 0043C338*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80505680 @ Get_MemoryOffset_LowBit);
/*8043F53C 0043C33C*/ PPC::Runtime::ASM::mr(context->r5, context->r19);
/*8043F540 0043C340*/ PPC::Runtime::ASM::mr(context->r6, context->r23);
/*8043F544 0043C344*/ PPC::Runtime::ASM::mr(context->r7, context->r22);
/*8043F548 0043C348*/ PPC::Runtime::ASM::mr(context->r8, context->r16);
/*8043F54C 0043C34C*/ PPC::Runtime::ASM::mr(context->r9, context->r21);
/*8043F550 0043C350*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r10);
/*8043F554 0043C354*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8043F558 0043C358*/ PPC::Runtime::ASM::bl(fn_804394A4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F55C, 0x8043F55C) //this is a jump label
/*8043F55C 0043C35C*/ PPC::Runtime::ASM::addi(context->r20, context->r20, 0xb);
/*8043F560 0043C360*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8043F564, 0x8043F564) //this is a jump label
/*8043F564 0043C364*/ PPC::Runtime::ASM::cmplw(context->r27, context->r25);
/*8043F568 0043C368*/ PPC::Runtime::ASM::blt(.L_8043F4D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F56C, 0x8043F56C) //this is a jump label
/*8043F56C 0043C36C*/ PPC::Runtime::ASM::addi(context->r18, context->r18, 0x1);
/*8043F570 0043C370*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8043F574, 0x8043F574) //this is a jump label
/*8043F574 0043C374*/ PPC::Runtime::ASM::cmplw(context->r26, context->r24);
/*8043F578 0043C378*/ PPC::Runtime::ASM::blt(.L_8043F4B8);
/*8043F57C 0043C37C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8043F580 0043C380*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F584 0043C384*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F588 0043C388*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8043F58C 0043C38C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8043F590 0043C390*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r4));
/*8043F594 0043C394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r4));
/*8043F598 0043C398*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r4));
/*8043F59C 0043C39C*/ PPC::Runtime::ASM::bl(fn_8043F0A4);
/*8043F5A0 0043C3A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8043F5A4 0043C3A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F5A8 0043C3A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F5AC 0043C3AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8043F5B0 0043C3B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*8043F5B4 0043C3B4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r31, context->r0);
/*8043F5B8 0043C3B8*/ PPC::Runtime::ASM::bl(DCFlushRange);
/*8043F5BC 0043C3BC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8043F5C0 0043C3C0*/ PPC::Runtime::ASM::bl(_restgpr_16);
/*8043F5C4 0043C3C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8043F5C8 0043C3C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043F5CC 0043C3CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8043F5D0 0043C3D0*/ PPC::Runtime::ASM::blr();
}