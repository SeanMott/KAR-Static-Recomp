//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7C94.hpp"
#include "fn_801A9C38.hpp"
#include "fn_80195588.hpp"
#include "fn_PhysicsCharacter_PreCollide_TakeNoParams.hpp"
#include "fn_8005E7D8.hpp"



void fn_801B47E8(PPC::Runtime::GCContext* context)
{
/*801B47E8 001B15E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B47EC 001B15EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B47F0 001B15F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B47F4 001B15F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B47F8 001B15F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B47FC 001B15FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r3));
/*801B4800 001B1600*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801B4804 001B1604*/ PPC::Runtime::ASM::beq(.L_801B488C);
/*801B4808 001B1608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d8, context->r31));
/*801B480C 001B160C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801B4810 001B1610*/ PPC::Runtime::ASM::beq(.L_801B4864);
/*801B4814 001B1614*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801B4818 001B1618*/ PPC::Runtime::ASM::bl(fn_801C7C94);
/*801B481C 001B161C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B4820 001B1620*/ PPC::Runtime::ASM::beq(.L_801B488C);
/*801B4824 001B1624*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/* 801B4828 001B1628  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801B482C 001B162C*/ PPC::Runtime::ASM::bne(.L_801B488C);
/*801B4830 001B1630*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B4834 001B1634*/ PPC::Runtime::ASM::bl(fn_801A9C38);
/*801B4838 001B1638*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*801B483C 001B163C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B4840 001B1640*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B4844 001B1644*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x70);
/*801B4848 001B1648*/ PPC::Runtime::ASM::bl(fn_80195588);
/*801B484C 001B164C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4850 001B1650*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B4854 001B1654*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B4858 001B1658*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B485C 001B165C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B4860 001B1660*/ PPC::Runtime::ASM::b(.L_801B488C);
RUNTIME_PPC_JUMP_LABEL(.L_801B4864, 0x801B4864) //this is a jump label
/*801B4864 001B1664*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/* 801B4868 001B1668  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801B486C 001B166C*/ PPC::Runtime::ASM::beq(.L_801B488C);
/*801B4870 001B1670*/ PPC::Runtime::ASM::bl(fn_PhysicsCharacter_PreCollide_TakeNoParams);
/*801B4874 001B1674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4878 001B1678*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801B487C 001B167C*/ PPC::Runtime::ASM::beq(.L_801B4884);
/*801B4880 001B1680*/ PPC::Runtime::ASM::bl(fn_8005E7D8);
RUNTIME_PPC_JUMP_LABEL(.L_801B4884, 0x801B4884) //this is a jump label
/*801B4884 001B1684*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801B4888 001B1688*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B488C, 0x801B488C) //this is a jump label
/*801B488C 001B168C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4890 001B1690*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4894 001B1694*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4898 001B1698*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B489C 001B169C*/ PPC::Runtime::ASM::blr();
}