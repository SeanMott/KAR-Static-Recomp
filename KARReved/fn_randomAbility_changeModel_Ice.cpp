//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A6428.hpp"
#include "fn_80196DF4.hpp"
#include "fn_800550F4.hpp"



void fn_randomAbility_changeModel_Ice(PPC::Runtime::GCContext* context)
{
/*801A7680 001A4480*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A7684 001A4484*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A7688 001A4488*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A768C 001A448C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A7690 001A4490*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A7694 001A4494*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A7698 001A4498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r3));
/*801A769C 001A449C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A76A0 001A44A0*/ PPC::Runtime::ASM::bne(.L_801A773C);
/*801A76A4 001A44A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801A76A8 001A44A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559EE8 @ Get_MemoryOffset_HighBit);
/*801A76AC 001A44AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559EE8 @ Get_MemoryOffset_LowBit);
/*801A76B0 001A44B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A76B4 001A44B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*801A76B8 001A44B8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801A76BC 001A44BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r30));
/*801A76C0 001A44C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801A76C4 001A44C4*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801A76C8 001A44C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A76CC 001A44CC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A76D0 001A44D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A76D4 001A44D4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A76D8 001A44D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A76DC 001A44DC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A76E0 001A44E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A76E4 001A44E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A76E8 001A44E8*/ PPC::Runtime::ASM::bl(fn_801A6428);
/*801A76EC 001A44EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*801A76F0 001A44F0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x910);
/*801A76F4 001A44F4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A76F8 001A44F8*/ PPC::Runtime::ASM::bl(fn_80196DF4);
/*801A76FC 001A44FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801A7700 001A4500*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801A7704 001A4504*/ PPC::Runtime::ASM::beq(.L_801A773C);
/*801A7708 001A4508*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A770C 001A450C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A7710 001A4510*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A7714 001A4514*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A7718 001A4518*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A771C 001A451C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A7720 001A4520*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A7724 001A4524*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A7728 001A4528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A772C 001A452C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801A7730 001A4530*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A7734 001A4534*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7738 001A4538*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A773C, 0x801A773C) //this is a jump label
/*801A773C 001A453C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7740 001A4540*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A7744 001A4544*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A7748 001A4548*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A774C 001A454C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A7750 001A4550*/ PPC::Runtime::ASM::blr();
}