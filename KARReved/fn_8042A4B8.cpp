//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8042A414.hpp"
#include "fn__HSD_MemAlloc.hpp"
#include "fn__HSD_MemAlloc.hpp"
#include "fn__HSD_MemAlloc.hpp"
#include "fn__HSD_MemAlloc.hpp"
#include "fn__HSD_MemAlloc.hpp"
#include "fn__HSD_MemAlloc.hpp"
#include "fn_HSD_ObjAllocInit.hpp"
#include "fn_HSD_ObjAllocInit.hpp"
#include "fn__HSD_MemAlloc.hpp"



void fn_8042A4B8(PPC::Runtime::GCContext* context)
{
/*8042A4B8 004272B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8042A4BC 004272BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042A4C0 004272C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A4C4 004272C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A4C8 004272C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8042A4CC 004272CC*/ PPC::Runtime::ASM::bl(fn_8042A414);
/*8042A4D0 004272D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A4D4 004272D4*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_HighBit);
/*8042A4D8 004272D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8042A4DC 004272DC*/ PPC::Runtime::ASM::stwu(context->r3, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*8042A4E0 004272E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8042A4E4 004272E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8042A4E8 004272E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8042A4EC 004272EC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A4F0 004272F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8042A4F4 004272F4*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*8042A4F8 004272F8*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A4FC 004272FC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A500 00427300*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A504 00427304*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8042A508 00427308*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*8042A50C 0042730C*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A510 00427310*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8042A514 00427314*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A518 00427318*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8042A51C 0042731C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8042A520 00427320*/ PPC::Runtime::ASM::b(.L_8042A53C);
RUNTIME_PPC_JUMP_LABEL(.L_8042A524, 0x8042A524) //this is a jump label
/*8042A524 00427324*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A528 00427328*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8042A52C 0042732C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r5);
/*8042A530 00427330*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A534 00427334*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r5);
/*8042A538 00427338*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8042A53C, 0x8042A53C) //this is a jump label
/*8042A53C 0042733C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A540 00427340*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8042A544 00427344*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8042A548 00427348*/ PPC::Runtime::ASM::blt(.L_8042A524);
/*8042A54C 0042734C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8042A550 00427350*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*8042A554 00427354*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*8042A558 00427358*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A55C 0042735C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE32C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A560 00427360*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8042A564 00427364*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*8042A568 00427368*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*8042A56C 0042736C*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A570 00427370*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8042A574 00427374*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A578 00427378*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*8042A57C 0042737C*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*8042A580 00427380*/ PPC::Runtime::ASM::b(.L_8042A59C);
RUNTIME_PPC_JUMP_LABEL(.L_8042A584, 0x8042A584) //this is a jump label
/*8042A584 00427384*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A588 00427388*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8042A58C 0042738C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r5);
/*8042A590 00427390*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE32C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A594 00427394*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r5);
/*8042A598 00427398*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8042A59C, 0x8042A59C) //this is a jump label
/*8042A59C 0042739C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*8042A5A0 004273A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*8042A5A4 004273A4*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8042A5A8 004273A8*/ PPC::Runtime::ASM::blt(.L_8042A584);
/*8042A5AC 004273AC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8042A5B0 004273B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8042A5B4 004273B4*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*8042A5B8 004273B8*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A5BC 004273BC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8042A5C0 004273C0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A5C4 004273C4*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*8042A5C8 004273C8*/ PPC::Runtime::ASM::mr(context->r0, context->r6);
/*8042A5CC 004273CC*/ PPC::Runtime::ASM::b(.L_8042A5E0);
RUNTIME_PPC_JUMP_LABEL(.L_8042A5D0, 0x8042A5D0) //this is a jump label
/*8042A5D0 004273D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A5D4 004273D4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8042A5D8 004273D8*/ PPC::Runtime::ASM::stwx(context->r0, context->r3, context->r4);
/*8042A5DC 004273DC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8042A5E0, 0x8042A5E0) //this is a jump label
/*8042A5E0 004273E0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8042A5E4 004273E4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x1);
/*8042A5E8 004273E8*/ PPC::Runtime::ASM::cmpw(context->r6, context->r5);
/*8042A5EC 004273EC*/ PPC::Runtime::ASM::blt(.L_8042A5D0);
/*8042A5F0 004273F0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A5F4 004273F4*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*8042A5F8 004273F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8042A5FC 004273FC*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r0);
/*8042A600 00427400*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A604 00427404*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8042A608 00427408*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE34C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A60C 0042740C*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*8042A610 00427410*/ PPC::Runtime::ASM::mr(context->r5, context->r7);
/*8042A614 00427414*/ PPC::Runtime::ASM::b(.L_8042A628);
RUNTIME_PPC_JUMP_LABEL(.L_8042A618, 0x8042A618) //this is a jump label
/*8042A618 00427418*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE34C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A61C 0042741C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8042A620 00427420*/ PPC::Runtime::ASM::stwx(context->r5, context->r3, context->r6);
/*8042A624 00427424*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8042A628, 0x8042A628) //this is a jump label
/*8042A628 00427428*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8042A62C 0042742C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8042A630 00427430*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8042A634 00427434*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8042A638 00427438*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r0);
/*8042A63C 0042743C*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8042A640 00427440*/ PPC::Runtime::ASM::blt(.L_8042A618);
/*8042A644 00427444*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058C19C @ Get_MemoryOffset_HighBit);
/*8042A648 00427448*/ PPC::Runtime::ASM::li(context->r4, 0x38);
/*8042A64C 0042744C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058C19C @ Get_MemoryOffset_LowBit);
/*8042A650 00427450*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8042A654 00427454*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8042A658 00427458*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058C1C8 @ Get_MemoryOffset_HighBit);
/*8042A65C 0042745C*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*8042A660 00427460*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058C1C8 @ Get_MemoryOffset_LowBit);
/*8042A664 00427464*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8042A668 00427468*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8042A66C 0042746C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8042A670 00427470*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8042A674 00427474*/ PPC::Runtime::ASM::b(.L_8042A684);
RUNTIME_PPC_JUMP_LABEL(.L_8042A678, 0x8042A678) //this is a jump label
/*8042A678 00427478*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8042A67C 0042747C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8042A680 00427480*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042A684, 0x8042A684) //this is a jump label
/*8042A684 00427484*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8042A688 00427488*/ PPC::Runtime::ASM::bne(.L_8042A678);
/*8042A68C 0042748C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8042A690 00427490*/ PPC::Runtime::ASM::beq(.L_8042A6F8);
/*8042A694 00427494*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 2);
/*8042A698 00427498*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8042A69C 0042749C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A6A0 004274A0*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8042A6A4 004274A4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8042A6A8 004274A8*/ PPC::Runtime::ASM::b(.L_8042A6EC);
RUNTIME_PPC_JUMP_LABEL(.L_8042A6AC, 0x8042A6AC) //this is a jump label
/*8042A6AC 004274AC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8042A6B0 004274B0*/ PPC::Runtime::ASM::mr(context->r6, context->r8);
/*8042A6B4 004274B4*/ PPC::Runtime::ASM::mr(context->r5, context->r7);
/*8042A6B8 004274B8*/ PPC::Runtime::ASM::b(.L_8042A6DC);
RUNTIME_PPC_JUMP_LABEL(.L_8042A6BC, 0x8042A6BC) //this is a jump label
/*8042A6BC 004274BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8042A6C0 004274C0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8042A6C4 004274C4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A6C8 004274C8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*8042A6CC 004274CC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r5);
/*8042A6D0 004274D0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8042A6D4 004274D4*/ PPC::Runtime::ASM::stwx(context->r0, context->r3, context->r6);
/*8042A6D8 004274D8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8042A6DC, 0x8042A6DC) //this is a jump label
/*8042A6DC 004274DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*8042A6E0 004274E0*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*8042A6E4 004274E4*/ PPC::Runtime::ASM::blt(.L_8042A6BC);
/*8042A6E8 004274E8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
RUNTIME_PPC_JUMP_LABEL(.L_8042A6EC, 0x8042A6EC) //this is a jump label
/*8042A6EC 004274EC*/ PPC::Runtime::ASM::cmplwi(context->r9, 0x0);
/*8042A6F0 004274F0*/ PPC::Runtime::ASM::bne(.L_8042A6AC);
/*8042A6F4 004274F4*/ PPC::Runtime::ASM::b(.L_8042A700);
RUNTIME_PPC_JUMP_LABEL(.L_8042A6F8, 0x8042A6F8) //this is a jump label
/*8042A6F8 004274F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8042A6FC 004274FC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8042A700, 0x8042A700) //this is a jump label
/*8042A700 00427500*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8042A704 00427504*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_HighBit);
/*8042A708 00427508*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE344 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A70C 0042750C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE324 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A710 00427510*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A714 00427514*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8042A718 00427518*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A71C 0042751C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE31C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042A720 00427520*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A724 00427524*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A728 00427528*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042A72C 0042752C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042A730 00427530*/ PPC::Runtime::ASM::blr();
}