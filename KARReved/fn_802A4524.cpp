//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A4524(PPC::Runtime::GCContext* context)
{
/*802A4524 002A1324*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A4528 002A1328*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A452C 002A132C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A4530 002A1330*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4534 002A1334*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A4538 002A1338*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A453C 002A133C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A4540 002A1340*/ PPC::Runtime::ASM::beq(.L_802A4708);
/*802A4544 002A1344*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C3AC8 @ Get_MemoryOffset_HighBit);
/*802A4548 002A1348*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x222c);
/*802A454C 002A134C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C3AC8 @ Get_MemoryOffset_LowBit);
/*802A4550 002A1350*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4554 002A1354*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A4558 002A1358*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A455C 002A135C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A4560 002A1360*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A4564 002A1364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A4568 002A1368*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A456C 002A136C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2128);
/*802A4570 002A1370*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4574 002A1374*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4578 002A1378*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2024);
/*802A457C 002A137C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4580 002A1380*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4584 002A1384*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1f20);
/*802A4588 002A1388*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A458C 002A138C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4590 002A1390*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1e1c);
/*802A4594 002A1394*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4598 002A1398*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A459C 002A139C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1d18);
/*802A45A0 002A13A0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45A4 002A13A4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45A8 002A13A8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c14);
/*802A45AC 002A13AC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45B0 002A13B0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45B4 002A13B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1b10);
/*802A45B8 002A13B8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45BC 002A13BC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45C0 002A13C0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1a0c);
/*802A45C4 002A13C4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45C8 002A13C8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45CC 002A13CC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1908);
/*802A45D0 002A13D0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45D4 002A13D4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45D8 002A13D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1804);
/*802A45DC 002A13DC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45E0 002A13E0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45E4 002A13E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1700);
/*802A45E8 002A13E8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45EC 002A13EC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45F0 002A13F0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x15fc);
/*802A45F4 002A13F4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A45F8 002A13F8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A45FC 002A13FC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14f8);
/*802A4600 002A1400*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4604 002A1404*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4608 002A1408*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x13f4);
/*802A460C 002A140C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4610 002A1410*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4614 002A1414*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12f0);
/*802A4618 002A1418*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A461C 002A141C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4620 002A1420*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x11ec);
/*802A4624 002A1424*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4628 002A1428*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A462C 002A142C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10e8);
/*802A4630 002A1430*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4634 002A1434*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4638 002A1438*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfe4);
/*802A463C 002A143C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4640 002A1440*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4644 002A1444*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xee0);
/*802A4648 002A1448*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A464C 002A144C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4650 002A1450*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A4654 002A1454*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4658 002A1458*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A465C 002A145C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A4660 002A1460*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4664 002A1464*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4668 002A1468*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A466C 002A146C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4670 002A1470*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4674 002A1474*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A4678 002A1478*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A467C 002A147C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4680 002A1480*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A4684 002A1484*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4688 002A1488*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A468C 002A148C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A4690 002A1490*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4694 002A1494*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4698 002A1498*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A469C 002A149C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46A0 002A14A0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46A4 002A14A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A46A8 002A14A8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46AC 002A14AC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46B0 002A14B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A46B4 002A14B4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46B8 002A14B8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46BC 002A14BC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A46C0 002A14C0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46C4 002A14C4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46C8 002A14C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A46CC 002A14CC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46D0 002A14D0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46D4 002A14D4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A46D8 002A14D8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46DC 002A14DC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46E0 002A14E0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A46E4 002A14E4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A46E8 002A14E8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A46EC 002A14EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A46F0 002A14F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A46F4 002A14F4*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A46F8 002A14F8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A46FC 002A14FC*/ PPC::Runtime::ASM::ble(.L_802A4708);
/*802A4700 002A1500*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4704 002A1504*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A4708, 0x802A4708) //this is a jump label
/*802A4708 002A1508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A470C 002A150C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4710 002A1510*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4714 002A1514*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A4718 002A1518*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A471C 002A151C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A4720 002A1520*/ PPC::Runtime::ASM::blr();
}