//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A66D0.hpp"
#include "fn_randomAbility_changeModel.hpp"
#include "fn_80195588.hpp"
#include "fn_801AE890.hpp"



void fn_801AE6D8(PPC::Runtime::GCContext* context)
{
/*801AE6D8 001AB4D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AE6DC 001AB4DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AE6E0 001AB4E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE6E4 001AB4E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AE6E8 001AB4E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AE6EC 001AB4EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AE6F0 001AB4F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a4, context->r3));
/*801AE6F4 001AB4F4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*801AE6F8 001AB4F8*/ PPC::Runtime::ASM::ble(.L_801AE7AC);
/*801AE6FC 001AB4FC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*801AE700 001AB500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a4, context->r31));
/*801AE704 001AB504*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r31));
/*801AE708 001AB508*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AE70C 001AB50C*/ PPC::Runtime::ASM::ble(.L_801AE718);
/*801AE710 001AB510*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801AE714 001AB514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801AE718, 0x801AE718) //this is a jump label
/*801AE718 001AB518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r31));
/*801AE71C 001AB51C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801AE720 001AB520*/ PPC::Runtime::ASM::bgt(.L_801AE7B0);
/*801AE724 001AB524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r31));
/*801AE728 001AB528*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*801AE72C 001AB52C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r31));
/*801AE730 001AB530*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r31));
/*801AE734 001AB534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9ac, context->r31));
/*801AE738 001AB538*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801AE73C 001AB53C*/ PPC::Runtime::ASM::blt(.L_801AE744);
/*801AE740 001AB540*/ PPC::Runtime::ASM::subf(context->r30, context->r0, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_801AE744, 0x801AE744) //this is a jump label
/*801AE744 001AB544*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AE748 001AB548*/ PPC::Runtime::ASM::bl(fn_801A66D0);
/*801AE74C 001AB54C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b0, context->r31));
/*801AE750 001AB550*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*801AE754 001AB554*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AE758 001AB558*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801AE75C 001AB55C*/ PPC::Runtime::ASM::bl(fn_randomAbility_changeModel);
/*801AE760 001AB560*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r31));
/*801AE764 001AB564*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801AE768 001AB568*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r31));
/*801AE76C 001AB56C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r31));
/*801AE770 001AB570*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801AE774 001AB574*/ PPC::Runtime::ASM::bgt(.L_801AE798);
/*801AE778 001AB578*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*801AE77C 001AB57C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1470 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AE780 001AB580*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AE784 001AB584*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4b);
/*801AE788 001AB588*/ PPC::Runtime::ASM::bl(fn_80195588);
/*801AE78C 001AB58C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801AE790 001AB590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*801AE794 001AB594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801AE798, 0x801AE798) //this is a jump label
/*801AE798 001AB598*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801AE79C 001AB59C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r3));
/*801AE7A0 001AB5A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r31));
/*801AE7A4 001AB5A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r31));
/*801AE7A8 001AB5A8*/ PPC::Runtime::ASM::b(.L_801AE7B0);
RUNTIME_PPC_JUMP_LABEL(.L_801AE7AC, 0x801AE7AC) //this is a jump label
/*801AE7AC 001AB5AC*/ PPC::Runtime::ASM::bl(fn_801AE890);
RUNTIME_PPC_JUMP_LABEL(.L_801AE7B0, 0x801AE7B0) //this is a jump label
/*801AE7B0 001AB5B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE7B4 001AB5B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AE7B8 001AB5B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801AE7BC 001AB5BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AE7C0 001AB5C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AE7C4 001AB5C4*/ PPC::Runtime::ASM::blr();
}