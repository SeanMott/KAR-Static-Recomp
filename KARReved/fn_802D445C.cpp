//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EFE44.hpp"



void fn_802D445C(PPC::Runtime::GCContext* context)
{
/*802D445C 002D125C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*802D4460 002D1260*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D4464 002D1264*/ PPC::Runtime::ASM::lis(context->r5, StructWithStructs_3 @ Get_MemoryOffset_HighBit);
/*802D4468 002D1268*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802D446C 002D126C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x60);
/*802D4470 002D1270*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802D4474 002D1274*/ PPC::Runtime::ASM::slwi(context->r31, context->r4, 2);
/*802D4478 002D1278*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802D447C 002D127C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D4480 002D1280*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D129C @ Get_MemoryOffset_HighBit);
/*802D4484 002D1284*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802D4488 002D1288*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802D448C 002D128C*/ PPC::Runtime::ASM::addi(context->r28, context->r5, StructWithStructs_3 @ Get_MemoryOffset_LowBit);
/*802D4490 002D1290*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804D129C @ Get_MemoryOffset_LowBit);
/*802D4494 002D1294*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*802D4498 002D1298*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802D449C 002D129C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802D44A0 002D12A0*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802D44A4 002D12A4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802D44A8 002D12A8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*802D44AC 002D12AC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*802D44B0 002D12B0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*802D44B4 002D12B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*802D44B8 002D12B8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802D44BC 002D12BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r30));
/*802D44C0 002D12C0*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802D44C4 002D12C4*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802D44C8 002D12C8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802D44CC 002D12CC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802D44D0 002D12D0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802D44D4 002D12D4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802D44D8 002D12D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802D44DC 002D12DC*/ PPC::Runtime::ASM::lwzx(context->r6, context->r6, context->r31);
/*802D44E0 002D12E0*/ PPC::Runtime::ASM::bl(fn_8038D270);
/*802D44E4 002D12E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802D44E8 002D12E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802D44EC 002D12EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802D44F0 002D12F0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802D44F4 002D12F4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802D44F8 002D12F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802D44FC 002D12FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4500 002D1300*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802D4504 002D1304*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802D4508 002D1308*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802D450C 002D130C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802D4510 002D1310*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802D4514 002D1314*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802D4518 002D1318*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D451C 002D131C*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802D4520 002D1320*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802D4524 002D1324  4C C6 32 42 */ crset context->cr1eq
/*802D4528 002D1328*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802D452C 002D132C*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802D4530 002D1330*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802D4534 002D1334*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802D4538 002D1338*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802D453C 002D133C*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802D4540 002D1340*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802D4544 002D1344*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802D4548 002D1348*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802D454C 002D134C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802D4550 002D1350*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802D4554 002D1354*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_4 @ Get_MemoryOffset_HighBit);
/*802D4558 002D1358*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1360 @ Get_MemoryOffset_HighBit);
/*802D455C 002D135C*/ PPC::Runtime::ASM::addi(context->r29, context->r4, StructWithStructs_4 @ Get_MemoryOffset_LowBit);
/*802D4560 002D1360*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x24);
/*802D4564 002D1364*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802D4568 002D1368*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804D1360 @ Get_MemoryOffset_LowBit);
/*802D456C 002D136C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802D4570 002D1370*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802D4574 002D1374*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802D4578 002D1378*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*802D457C 002D137C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802D4580 002D1380*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802D4584 002D1384*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802D4588 002D1388*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*802D458C 002D138C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D4590 002D1390*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r30));
/*802D4594 002D1394*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802D4598 002D1398*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802D459C 002D139C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802D45A0 002D13A0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D45A4 002D13A4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802D45A8 002D13A8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802D45AC 002D13AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802D45B0 002D13B0*/ PPC::Runtime::ASM::lwzx(context->r6, context->r6, context->r31);
/*802D45B4 002D13B4*/ PPC::Runtime::ASM::bl(fn_8038D270);
/*802D45B8 002D13B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D45BC 002D13BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D45C0 002D13C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D45C4 002D13C4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802D45C8 002D13C8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*802D45CC 002D13CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D45D0 002D13D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D45D4 002D13D4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*802D45D8 002D13D8*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*802D45DC 002D13DC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802D45E0 002D13E0*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*802D45E4 002D13E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D45E8 002D13E8*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802D45EC 002D13EC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D45F0 002D13F0*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802D45F4 002D13F4*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 802D45F8 002D13F8  4C C6 32 42 */ crset context->cr1eq
/*802D45FC 002D13FC*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802D4600 002D1400*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_HighBit);
/*802D4604 002D1404*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*802D4608 002D1408*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetFlags @ Get_MemoryOffset_LowBit);
/*802D460C 002D140C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D4610 002D1410*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*802D4614 002D1414*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802D4618 002D1418*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*802D461C 002D141C*/ PPC::Runtime::ASM::lis(context->r8, 0x2000);
/*802D4620 002D1420*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802D4624 002D1424*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802D4628 002D1428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r30));
/*802D462C 002D142C*/ PPC::Runtime::ASM::bl(fn_802EFE44);
/*802D4630 002D1430*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x8);
/*802D4634 002D1434*/ PPC::Runtime::ASM::beq(.L_802D4644);
/*802D4638 002D1438*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD614 @ Get_MemoryOffset_HighBit);
/*802D463C 002D143C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD614 @ Get_MemoryOffset_LowBit);
/*802D4640 002D1440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802D4644, 0x802D4644) //this is a jump label
/*802D4644 002D1444*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x44);
/*802D4648 002D1448*/ PPC::Runtime::ASM::beq(.L_802D4658);
/*802D464C 002D144C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD614 @ Get_MemoryOffset_HighBit);
/*802D4650 002D1450*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD614 @ Get_MemoryOffset_LowBit);
/*802D4654 002D1454*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802D4658, 0x802D4658) //this is a jump label
/*802D4658 002D1458*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802D465C 002D145C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802D4660 002D1460*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802D4664 002D1464*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802D4668 002D1468*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802D466C 002D146C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D4670 002D1470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*802D4674 002D1474*/ PPC::Runtime::ASM::blr();
}