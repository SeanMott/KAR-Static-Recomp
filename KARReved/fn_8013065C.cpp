//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114BA4.hpp"
#include "fn_801302E0.hpp"
#include "fn_801302E0.hpp"
#include "fn_80114E24.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_getPlayerCount.hpp"



void fn_8013065C(PPC::Runtime::GCContext* context)
{
/*8013065C 0012D45C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80130660 0012D460*/ PPC::Runtime::ASM::mflr(context->r0);
/*80130664 0012D464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80130668 0012D468*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8013066C 0012D46C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80130670 0012D470*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80130674 0012D474*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80130678 0012D478*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8013067C 0012D47C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80130680 0012D480*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80130684 0012D484*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*80130688 0012D488*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xe1c);
/*8013068C 0012D48C*/ PPC::Runtime::ASM::bge(.L_80130740);
/*80130690 0012D490*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80130694 0012D494*/ PPC::Runtime::ASM::blt(.L_8013069C);
/*80130698 0012D498*/ PPC::Runtime::ASM::b(.L_80130740);
RUNTIME_PPC_JUMP_LABEL(.L_8013069C, 0x8013069C) //this is a jump label
/*8013069C 0012D49C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801306A0 0012D4A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801306A4 0012D4A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801306A8 0012D4A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801306AC 0012D4AC*/ PPC::Runtime::ASM::bl(fn_80114BA4);
/*801306B0 0012D4B0*/ PPC::Runtime::ASM::lis(context->r4, fn_801302E0 @ Get_MemoryOffset_HighBit);
/*801306B4 0012D4B4*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*801306B8 0012D4B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801302E0 @ Get_MemoryOffset_LowBit);
/*801306BC 0012D4BC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801306C0 0012D4C0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801306C4 0012D4C4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801306C8 0012D4C8*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*801306CC 0012D4CC*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*801306D0 0012D4D0*/ PPC::Runtime::ASM::li(context->r4, 0x3d);
/*801306D4 0012D4D4*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*801306D8 0012D4D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801306DC 0012D4DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801306E0 0012D4E0*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*801306E4 0012D4E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801306E8 0012D4E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801306EC 0012D4EC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801306F0 0012D4F0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801306F4 0012D4F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801306F8 0012D4F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801306FC 0012D4FC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80130700 0012D500*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80130704 0012D504*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80130708 0012D508*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8013070C 0012D50C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80130710 0012D510*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80130714 0012D514*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80130718 0012D518*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8013071C 0012D51C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80130720 0012D520*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80130724 0012D524*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80130728 0012D528*/ PPC::Runtime::ASM::bgt(.L_80130734);
/*8013072C 0012D52C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0148 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80130730 0012D530*/ PPC::Runtime::ASM::b(.L_80130738);
RUNTIME_PPC_JUMP_LABEL(.L_80130734, 0x80130734) //this is a jump label
/*80130734 0012D534*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E014C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80130738, 0x80130738) //this is a jump label
/*80130738 0012D538*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8013073C 0012D53C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80130740, 0x80130740) //this is a jump label
/*80130740 0012D540*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80130744 0012D544*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80130748 0012D548*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8013074C 0012D54C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80130750 0012D550*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80130754 0012D554*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80130758 0012D558*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8013075C 0012D55C*/ PPC::Runtime::ASM::blr();
}