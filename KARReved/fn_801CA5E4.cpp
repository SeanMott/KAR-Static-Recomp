//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CB4C0.hpp"
#include "fn_800CEFB4.hpp"
#include "fn_8006B048.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062ECC.hpp"
#include "fn_800D089C.hpp"



void fn_801CA5E4(PPC::Runtime::GCContext* context)
{
/*801CA5E4 001C73E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801CA5E8 001C73E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CA5EC 001C73EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CA5F0 001C73F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CA5F4 001C73F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CA5F8 001C73F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801CA5FC 001C73FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r3));
/* 801CA600 001C7400  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801CA604 001C7404*/ PPC::Runtime::ASM::bne(.L_801CA780);
/*801CA608 001C7408*/ PPC::Runtime::ASM::bl(fn_801CB4C0);
/*801CA60C 001C740C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CA610 001C7410*/ PPC::Runtime::ASM::beq(.L_801CA780);
/*801CA614 001C7414*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*801CA618 001C7418*/ PPC::Runtime::ASM::bl(fn_800CEFB4);
/*801CA61C 001C741C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8b0, context->r31));
/*801CA620 001C7420*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801CA624 001C7424*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801CA628 001C7428*/ PPC::Runtime::ASM::bl(fn_8006B048);
/*801CA62C 001C742C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801CA630 001C7430*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801CA634 001C7434*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801CA638 001C7438*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x418);
/*801CA63C 001C743C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801CA640 001C7440*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801CA644 001C7444*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801CA648 001C7448*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA64C 001C744C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1A10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA650 001C7450*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*801CA654 001C7454*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801CA658 001C7458*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CA65C 001C745C*/ PPC::Runtime::ASM::ble(.L_801CA6B0);
/*801CA660 001C7460*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ac, context->r31));
/*801CA664 001C7464*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8b8, context->r31));
/*801CA668 001C7468*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA66C 001C746C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*801CA670 001C7470*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CA674 001C7474*/ PPC::Runtime::ASM::bge(.L_801CA6B0);
/*801CA678 001C7478*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8b4, context->r31));
/*801CA67C 001C747C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8bc, context->r31));
/*801CA680 001C7480*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r31));
/*801CA684 001C7484*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8b0, context->r31));
/*801CA688 001C7488*/ PPC::Runtime::ASM::bl(fn_800D089C);
/*801CA68C 001C748C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA690 001C7490*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*801CA694 001C7494*/ PPC::Runtime::ASM::beq(.L_801CA6B0);
/*801CA698 001C7498*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA69C 001C749C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*801CA6A0 001C74A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CA6A4 001C74A4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801CA6A8 001C74A8*/ PPC::Runtime::ASM::bne(.L_801CA6B0);
/*801CA6AC 001C74AC*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801CA6B0, 0x801CA6B0) //this is a jump label
/*801CA6B0 001C74B0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*801CA6B4 001C74B4*/ PPC::Runtime::ASM::bne(.L_801CA6DC);
/*801CA6B8 001C74B8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801CA6BC 001C74BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r31));
/*801CA6C0 001C74C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/* 801CA6C4 001C74C4  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801CA6C8 001C74C8*/ PPC::Runtime::ASM::beq(.L_801CA6F0);
/*801CA6CC 001C74CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
/*801CA6D0 001C74D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*801CA6D4 001C74D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
/*801CA6D8 001C74D8*/ PPC::Runtime::ASM::b(.L_801CA6F0);
RUNTIME_PPC_JUMP_LABEL(.L_801CA6DC, 0x801CA6DC) //this is a jump label
/*801CA6DC 001C74DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r31));
/*801CA6E0 001C74E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801CA6E4 001C74E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*801CA6E8 001C74E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r31));
/*801CA6EC 001C74EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CA6F0, 0x801CA6F0) //this is a jump label
/*801CA6F0 001C74F0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/* 801CA6F4 001C74F4  54 A0 FF FF */ extrwi. context->r0 , context->r5 , 1 , 30
/*801CA6F8 001C74F8*/ PPC::Runtime::ASM::bne(.L_801CA740);
/*801CA6FC 001C74FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8cc, context->r31));
/*801CA700 001C7500*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801CA704 001C7504*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA708 001C7508*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*801CA70C 001C750C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CA710 001C7510*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1A18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA714 001C7514*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CA718 001C7518*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*801CA71C 001C751C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CA720 001C7520*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*801CA724 001C7524*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CA728 001C7528*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801CA72C 001C752C*/ PPC::Runtime::ASM::bne(.L_801CA780);
/*801CA730 001C7530*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801CA734 001C7534*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 1, 30, 30);
/*801CA738 001C7538*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801CA73C 001C753C*/ PPC::Runtime::ASM::b(.L_801CA780);
RUNTIME_PPC_JUMP_LABEL(.L_801CA740, 0x801CA740) //this is a jump label
/*801CA740 001C7540*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
/*801CA744 001C7544*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801CA748 001C7548*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA74C 001C754C*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*801CA750 001C7550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CA754 001C7554*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1A18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CA758 001C7558*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CA75C 001C755C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*801CA760 001C7560*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801CA764 001C7564*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*801CA768 001C7568*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CA76C 001C756C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801CA770 001C7570*/ PPC::Runtime::ASM::bne(.L_801CA780);
/*801CA774 001C7574*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801CA778 001C7578*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 1, 30, 30);
/*801CA77C 001C757C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CA780, 0x801CA780) //this is a jump label
/*801CA780 001C7580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CA784 001C7584*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CA788 001C7588*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801CA78C 001C758C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CA790 001C7590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801CA794 001C7594*/ PPC::Runtime::ASM::blr();
}