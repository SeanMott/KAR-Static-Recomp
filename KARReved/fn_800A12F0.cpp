//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A08A8.hpp"
#include "fn_800A0DD0.hpp"
#include "fn_800A0DD0.hpp"
#include "fn_800A0DD0.hpp"



void fn_800A12F0(PPC::Runtime::GCContext* context)
{
/*800A12F0 0009E0F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800A12F4 0009E0F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A12F8 0009E0F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800A12FC 0009E0FC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800A1300 0009E100*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800A1304 0009E104*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800A1308 0009E108*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800A130C 0009E10C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*800A1310 0009E110*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800A1314 0009E114*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_640 @ Get_MemoryOffset_HighBit);
/*800A1318 0009E118*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*800A131C 0009E11C*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*800A1320 0009E120*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800A1324 0009E124*/ PPC::Runtime::ASM::mr(context->r24, context->r6);
/*800A1328 0009E128*/ PPC::Runtime::ASM::mr(context->r30, context->r7);
/*800A132C 0009E12C*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*800A1330 0009E130*/ PPC::Runtime::ASM::addi(context->r26, context->r4, MemoryOffset_640 @ Get_MemoryOffset_LowBit);
/*800A1334 0009E134*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800A1338 0009E138*/ PPC::Runtime::ASM::bl(fn_800A08A8);
/*800A133C 0009E13C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x0);
/*800A1340 0009E140*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800A1344 0009E144*/ PPC::Runtime::ASM::beq(.L_800A1430);
/*800A1348 0009E148*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r27));
/*800A134C 0009E14C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800A1350 0009E150*/ PPC::Runtime::ASM::bne(.L_800A1364);
/*800A1354 0009E154*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x184);
/*800A1358 0009E158*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x190);
/*800A135C 0009E15C*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*800A1360 0009E160*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A1364, 0x800A1364) //this is a jump label
/*800A1364 0009E164*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800A1368 0009E168*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A136C 0009E16C*/ PPC::Runtime::ASM::blt(.L_800A1380);
/*800A1370 0009E170*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800A1374 0009E174*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800A1378 0009E178*/ PPC::Runtime::ASM::bge(.L_800A1380);
/*800A137C 0009E17C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A1380, 0x800A1380) //this is a jump label
/*800A1380 0009E180*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800A1384 0009E184*/ PPC::Runtime::ASM::bne(.L_800A1398);
/*800A1388 0009E188*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x184);
/*800A138C 0009E18C*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x19c);
/*800A1390 0009E190*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*800A1394 0009E194*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A1398, 0x800A1398) //this is a jump label
/*800A1398 0009E198*/ PPC::Runtime::ASM::mulli(context->r24, context->r28, 0x18);
/*800A139C 0009E19C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*800A13A0 0009E1A0*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*800A13A4 0009E1A4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A13A8 0009E1A8*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*800A13AC 0009E1AC*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800A13B0 0009E1B0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r24);
/*800A13B4 0009E1B4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800A13B8 0009E1B8*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
/*800A13BC 0009E1BC*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r27));
/*800A13C0 0009E1C0*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800A13C4 0009E1C4*/ PPC::Runtime::ASM::bne(.L_800A13D8);
/*800A13C8 0009E1C8*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x184);
/*800A13CC 0009E1CC*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x190);
/*800A13D0 0009E1D0*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*800A13D4 0009E1D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A13D8, 0x800A13D8) //this is a jump label
/*800A13D8 0009E1D8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800A13DC 0009E1DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A13E0 0009E1E0*/ PPC::Runtime::ASM::blt(.L_800A13F4);
/*800A13E4 0009E1E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800A13E8 0009E1E8*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800A13EC 0009E1EC*/ PPC::Runtime::ASM::bge(.L_800A13F4);
/*800A13F0 0009E1F0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A13F4, 0x800A13F4) //this is a jump label
/*800A13F4 0009E1F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800A13F8 0009E1F8*/ PPC::Runtime::ASM::bne(.L_800A140C);
/*800A13FC 0009E1FC*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x184);
/*800A1400 0009E200*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x19c);
/*800A1404 0009E204*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*800A1408 0009E208*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A140C, 0x800A140C) //this is a jump label
/*800A140C 0009E20C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*800A1410 0009E210*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*800A1414 0009E214*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*800A1418 0009E218*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800A141C 0009E21C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r24);
/*800A1420 0009E220*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800A1424 0009E224*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A1428 0009E228*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1);
/*800A142C 0009E22C*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
RUNTIME_PPC_JUMP_LABEL(.L_800A1430, 0x800A1430) //this is a jump label
/*800A1430 0009E230*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r27));
/*800A1434 0009E234*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800A1438 0009E238*/ PPC::Runtime::ASM::bne(.L_800A144C);
/*800A143C 0009E23C*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x184);
/*800A1440 0009E240*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x190);
/*800A1444 0009E244*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*800A1448 0009E248*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A144C, 0x800A144C) //this is a jump label
/*800A144C 0009E24C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800A1450 0009E250*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A1454 0009E254*/ PPC::Runtime::ASM::blt(.L_800A1468);
/*800A1458 0009E258*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800A145C 0009E25C*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800A1460 0009E260*/ PPC::Runtime::ASM::bge(.L_800A1468);
/*800A1464 0009E264*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A1468, 0x800A1468) //this is a jump label
/*800A1468 0009E268*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800A146C 0009E26C*/ PPC::Runtime::ASM::bne(.L_800A1480);
/*800A1470 0009E270*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x184);
/*800A1474 0009E274*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x19c);
/*800A1478 0009E278*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*800A147C 0009E27C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A1480, 0x800A1480) //this is a jump label
/*800A1480 0009E280*/ PPC::Runtime::ASM::mulli(context->r0, context->r28, 0x1c);
/*800A1484 0009E284*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r27));
/*800A1488 0009E288*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*800A148C 0009E28C*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800A1490 0009E290*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*800A1494 0009E294*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*800A1498 0009E298*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800A149C 0009E29C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x2);
/*800A14A0 0009E2A0*/ PPC::Runtime::ASM::bl(fn_800A0DD0);
/*800A14A4 0009E2A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800A14A8 0009E2A8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800A14AC 0009E2AC*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800A14B0 0009E2B0*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800A14B4 0009E2B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800A14B8 0009E2B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A14BC 0009E2BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800A14C0 0009E2C0*/ PPC::Runtime::ASM::blr();
}