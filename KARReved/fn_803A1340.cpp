//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB28.hpp"
#include "fn_803A1494.hpp"
#include "fn_802889EC.hpp"



void fn_803A1340(PPC::Runtime::GCContext* context)
{
/*803A1340 0039E140*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803A1344 0039E144*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A1348 0039E148*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803A134C 0039E14C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803A1350 0039E150*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*803A1354 0039E154*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A1358 0039E158*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*803A135C 0039E15C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A1360 0039E160*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1364 0039E164*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*803A1368 0039E168*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803A136C 0039E16C*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*803A1370 0039E170*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803A1374 0039E174*/ PPC::Runtime::ASM::li(context->r3, 0x60);
/*803A1378 0039E178*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*803A137C 0039E17C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A1380 0039E180*/ PPC::Runtime::ASM::beq(.L_803A13A8);
/*803A1384 0039E184*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*803A1388 0039E188*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803A138C 0039E18C*/ PPC::Runtime::ASM::beq(.L_803A1394);
/*803A1390 0039E190*/ PPC::Runtime::ASM::b(.L_803A1398);
RUNTIME_PPC_JUMP_LABEL(.L_803A1394, 0x803A1394) //this is a jump label
/*803A1394 0039E194*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x58);
RUNTIME_PPC_JUMP_LABEL(.L_803A1398, 0x803A1398) //this is a jump label
/*803A1398 0039E198*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*803A139C 0039E19C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803A13A0 0039E1A0*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*803A13A4 0039E1A4*/ PPC::Runtime::ASM::bl(fn_803A1494);
RUNTIME_PPC_JUMP_LABEL(.L_803A13A8, 0x803A13A8) //this is a jump label
/*803A13A8 0039E1A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*803A13AC 0039E1AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803A13B0 0039E1B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A13B4 0039E1B4*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*803A13B8 0039E1B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A13BC 0039E1BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A13C0 0039E1C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A13C4 0039E1C4*/ PPC::Runtime::ASM::beq(.L_803A13F0);
/*803A13C8 0039E1C8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803A13CC 0039E1CC*/ PPC::Runtime::ASM::beq(.L_803A13E8);
/*803A13D0 0039E1D0*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803A13D4 0039E1D4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803A13D8 0039E1D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A13DC 0039E1DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803A13E0 0039E1E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A13E4 0039E1E4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803A13E8, 0x803A13E8) //this is a jump label
/*803A13E8 0039E1E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A13EC 0039E1EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803A13F0, 0x803A13F0) //this is a jump label
/*803A13F0 0039E1F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A13F4 0039E1F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A13F8 0039E1F8*/ PPC::Runtime::ASM::beq(.L_803A1410);
/*803A13FC 0039E1FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A1400 0039E200*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803A1404 0039E204*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803A1408 0039E208*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A140C 0039E20C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803A1410, 0x803A1410) //this is a jump label
/*803A1410 0039E210*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*803A1414 0039E214*/ PPC::Runtime::ASM::lis(context->r3, String_ "carve_whit" 2 @ Get_MemoryOffset_HighBit);
/*803A1418 0039E218*/ PPC::Runtime::ASM::addic.(context->r0, context->r3, String_ "carve_whit" 2 @ Get_MemoryOffset_LowBit);
/*803A141C 0039E21C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*803A1420 0039E220*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803A1424 0039E224*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*803A1428 0039E228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A142C 0039E22C*/ PPC::Runtime::ASM::beq(.L_803A145C);
/*803A1430 0039E230*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1434 0039E234*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A1438 0039E238*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC520 @ Get_MemoryOffset_SDA21);
/*803A143C 0039E23C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC518 @ Get_MemoryOffset_SDA21);
/*803A1440 0039E240*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A1444 0039E244*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A1448 0039E248*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803A144C 0039E24C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803A1450 0039E250*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803A1454 0039E254*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803A1458 0039E258*/ PPC::Runtime::ASM::b(.L_803A1460);
RUNTIME_PPC_JUMP_LABEL(.L_803A145C, 0x803A145C) //this is a jump label
/*803A145C 0039E25C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A1460, 0x803A1460) //this is a jump label
/*803A1460 0039E260*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*803A1464 0039E264*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5070 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A1468 0039E268*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*803A146C 0039E26C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*803A1470 0039E270*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803A1474 0039E274*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*803A1478 0039E278*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803A147C 0039E27C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A1480 0039E280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803A1484 0039E284*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A1488 0039E288*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A148C 0039E28C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803A1490 0039E290*/ PPC::Runtime::ASM::blr();
}