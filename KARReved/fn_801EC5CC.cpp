//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CB934.hpp"
#include "fn_801CB968.hpp"
#include "fn_801CC2FC.hpp"
#include "fn_800638F8.hpp"
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"
#include "fn_800638F8.hpp"
#include "fn_801C8F84.hpp"



void fn_801EC5CC(PPC::Runtime::GCContext* context)
{
/*801EC5CC 001E93CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801EC5D0 001E93D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EC5D4 001E93D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801EC5D8 001E93D8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801EC5DC 001E93DC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801EC5E0 001E93E0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801EC5E4 001E93E4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801EC5E8 001E93E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801EC5EC 001E93EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/*801EC5F0 001E93F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/* 801EC5F4 001E93F4  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801EC5F8 001E93F8*/ PPC::Runtime::ASM::beq(.L_801EC66C);
/*801EC5FC 001E93FC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x324);
/*801EC600 001E9400*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801EC604 001E9404*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC608 001E9408*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r3));
/*801EC60C 001E940C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801EC610 001E9410*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801EC614 001E9414*/ PPC::Runtime::ASM::bne(.L_801EC620);
/*801EC618 001E9418*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*801EC61C 001E941C*/ PPC::Runtime::ASM::b(.L_801EC640);
RUNTIME_PPC_JUMP_LABEL(.L_801EC620, 0x801EC620) //this is a jump label
/*801EC620 001E9420*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*801EC624 001E9424*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r31));
/*801EC628 001E9428*/ PPC::Runtime::ASM::bl(fn_801CB934);
/*801EC62C 001E942C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC630 001E9430*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r3));
/*801EC634 001E9434*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r3));
/*801EC638 001E9438*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801EC63C 001E943C*/ PPC::Runtime::ASM::fmadds(context->f30, context->f1, context->f0, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_801EC640, 0x801EC640) //this is a jump label
/*801EC640 001E9440*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC644 001E9444*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r31));
/*801EC648 001E9448*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r3));
/*801EC64C 001E944C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1E88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EC650 001E9450*/ PPC::Runtime::ASM::fneg(context->f3, context->f2);
/*801EC654 001E9454*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x744, context->r31));
/*801EC658 001E9458*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801EC65C 001E945C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f3);
/*801EC660 001E9460*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f0, context->f1);
/*801EC664 001E9464*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f0);
/*801EC668 001E9468*/ PPC::Runtime::ASM::b(.L_801EC710);
RUNTIME_PPC_JUMP_LABEL(.L_801EC66C, 0x801EC66C) //this is a jump label
/*801EC66C 001E946C*/ PPC::Runtime::ASM::bl(fn_801CB968);
/*801EC670 001E9470*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC674 001E9474*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EC678 001E9478*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r31));
/*801EC67C 001E947C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r4));
/*801EC680 001E9480*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r4));
/*801EC684 001E9484*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*801EC688 001E9488*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*801EC68C 001E948C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f3);
/*801EC690 001E9490*/ PPC::Runtime::ASM::fmuls(context->f30, context->f2, context->f0);
/*801EC694 001E9494*/ PPC::Runtime::ASM::bl(fn_801CC2FC);
/*801EC698 001E9498*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC69C 001E949C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801EC6A0 001E94A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1E98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EC6A4 001E94A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*801EC6A8 001E94A8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801EC6AC 001E94AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801EC6B0 001E94B0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801EC6B4 001E94B4*/ PPC::Runtime::ASM::bne(.L_801EC710);
/*801EC6B8 001E94B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x418, context->r31));
/*801EC6BC 001E94BC*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*801EC6C0 001E94C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41c, context->r31));
/*801EC6C4 001E94C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801EC6C8 001E94C8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x424);
/*801EC6CC 001E94CC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EC6D0 001E94D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801EC6D4 001E94D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x420, context->r31));
/*801EC6D8 001E94D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801EC6DC 001E94DC*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*801EC6E0 001E94E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x424);
/*801EC6E4 001E94E4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x324);
/*801EC6E8 001E94E8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801EC6EC 001E94EC*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801EC6F0 001E94F0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801EC6F4 001E94F4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801EC6F8 001E94F8*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801EC6FC 001E94FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801EC700 001E9500*/ PPC::Runtime::ASM::ble(.L_801EC710);
/*801EC704 001E9504*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801EC708 001E9508*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r3));
/*801EC70C 001E950C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801EC710, 0x801EC710) //this is a jump label
/*801EC710 001E9510*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x758, context->r31));
/*801EC714 001E9514*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EC718 001E9518*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801EC71C 001E951C*/ PPC::Runtime::ASM::beq(.L_801EC730);
/*801EC720 001E9520*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x75c, context->r31));
/*801EC724 001E9524*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*801EC728 001E9528*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801EC72C 001E952C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801EC730, 0x801EC730) //this is a jump label
/*801EC730 001E9530*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x418, context->r31));
/*801EC734 001E9534*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*801EC738 001E9538*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41c, context->r31));
/*801EC73C 001E953C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801EC740 001E9540*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x424);
/*801EC744 001E9544*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EC748 001E9548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801EC74C 001E954C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x420, context->r31));
/*801EC750 001E9550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801EC754 001E9554*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*801EC758 001E9558*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EC75C 001E955C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801EC760 001E9560*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*801EC764 001E9564*/ PPC::Runtime::ASM::bl(fn_801C8F84);
/*801EC768 001E9568*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801EC76C 001E956C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801EC770 001E9570*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801EC774 001E9574*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801EC778 001E9578*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801EC77C 001E957C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801EC780 001E9580*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EC784 001E9584*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801EC788 001E9588*/ PPC::Runtime::ASM::blr();
}