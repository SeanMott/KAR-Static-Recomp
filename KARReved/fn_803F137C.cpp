//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803F137C(PPC::Runtime::GCContext* context)
{
/*803F137C 003EE17C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803F1380 003EE180*/ PPC::Runtime::ASM::li(context->r0, 0x50);
/*803F1384 003EE184*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803F1388 003EE188*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F138C 003EE18C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803F1390 003EE190*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803F1394 003EE194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803F1398 003EE198*/ PPC::Runtime::ASM::mulli(context->r11, context->r6, 0x280);
/*803F139C 003EE19C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*803F13A0 003EE1A0*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*803F13A4 003EE1A4*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0x280);
/*803F13A8 003EE1A8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*803F13AC 003EE1AC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803F13B0 003EE1B0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803F13B4 003EE1B4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x280);
/*803F13B8 003EE1B8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803F13BC 003EE1BC*/ PPC::Runtime::ASM::add(context->r3, context->r12, context->r11);
/*803F13C0 003EE1C0*/ PPC::Runtime::ASM::add(context->r5, context->r10, context->r5);
/*803F13C4 003EE1C4*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803F13C8, 0x803F13C8) //this is a jump label
/*803F13C8 003EE1C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803F13CC 003EE1CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*803F13D0 003EE1D0*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803F13D4 003EE1D4*/ PPC::Runtime::ASM::mullw(context->r10, context->r12, context->r0);
/*803F13D8 003EE1D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803F13DC 003EE1DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803F13E0 003EE1E0*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F13E4 003EE1E4*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*803F13E8 003EE1E8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803F13EC 003EE1EC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*803F13F0 003EE1F0*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803F13F4 003EE1F4*/ PPC::Runtime::ASM::mullw(context->r10, context->r31, context->r10);
/*803F13F8 003EE1F8*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F13FC 003EE1FC*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*803F1400 003EE200*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803F1404 003EE204*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*803F1408 003EE208*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803F140C 003EE20C*/ PPC::Runtime::ASM::mullw(context->r10, context->r0, context->r10);
/*803F1410 003EE210*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F1414 003EE214*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*803F1418 003EE218*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803F141C 003EE21C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*803F1420 003EE220*/ PPC::Runtime::ASM::mullw(context->r10, context->r12, context->r10);
/*803F1424 003EE224*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F1428 003EE228*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803F142C 003EE22C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*803F1430 003EE230*/ PPC::Runtime::ASM::mullw(context->r10, context->r31, context->r10);
/*803F1434 003EE234*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F1438 003EE238*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803F143C 003EE23C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*803F1440 003EE240*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r10);
/*803F1444 003EE244*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 7);
/*803F1448 003EE248*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803F144C 003EE24C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803F1450 003EE250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*803F1454 003EE254*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803F1458 003EE258*/ PPC::Runtime::ASM::mullw(context->r10, context->r12, context->r0);
/*803F145C 003EE25C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803F1460 003EE260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803F1464 003EE264*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F1468 003EE268*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*803F146C 003EE26C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803F1470 003EE270*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*803F1474 003EE274*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*803F1478 003EE278*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*803F147C 003EE27C*/ PPC::Runtime::ASM::mullw(context->r10, context->r31, context->r10);
/*803F1480 003EE280*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F1484 003EE284*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*803F1488 003EE288*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803F148C 003EE28C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*803F1490 003EE290*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*803F1494 003EE294*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*803F1498 003EE298*/ PPC::Runtime::ASM::mullw(context->r10, context->r0, context->r10);
/*803F149C 003EE29C*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F14A0 003EE2A0*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*803F14A4 003EE2A4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803F14A8 003EE2A8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*803F14AC 003EE2AC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*803F14B0 003EE2B0*/ PPC::Runtime::ASM::mullw(context->r10, context->r12, context->r10);
/*803F14B4 003EE2B4*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F14B8 003EE2B8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803F14BC 003EE2BC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*803F14C0 003EE2C0*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*803F14C4 003EE2C4*/ PPC::Runtime::ASM::mullw(context->r10, context->r31, context->r10);
/*803F14C8 003EE2C8*/ PPC::Runtime::ASM::srawi(context->r10, context->r10, 7);
/*803F14CC 003EE2CC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*803F14D0 003EE2D0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*803F14D4 003EE2D4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*803F14D8 003EE2D8*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r10);
/*803F14DC 003EE2DC*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 7);
/*803F14E0 003EE2E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*803F14E4 003EE2E4*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*803F14E8 003EE2E8*/ PPC::Runtime::ASM::bdnz(.L_803F13C8);
/*803F14EC 003EE2EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803F14F0 003EE2F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803F14F4 003EE2F4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803F14F8 003EE2F8*/ PPC::Runtime::ASM::divwu(context->r0, context->r5, context->r3);
/*803F14FC 003EE2FC*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*803F1500 003EE300*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*803F1504 003EE304*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803F1508 003EE308*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803F150C 003EE30C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803F1510 003EE310*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803F1514 003EE314*/ PPC::Runtime::ASM::divwu(context->r0, context->r5, context->r3);
/*803F1518 003EE318*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*803F151C 003EE31C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*803F1520 003EE320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803F1524 003EE324*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803F1528 003EE328*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803F152C 003EE32C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803F1530 003EE330*/ PPC::Runtime::ASM::divwu(context->r0, context->r5, context->r3);
/*803F1534 003EE334*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*803F1538 003EE338*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*803F153C 003EE33C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803F1540 003EE340*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F1544 003EE344*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803F1548 003EE348*/ PPC::Runtime::ASM::blr();
}