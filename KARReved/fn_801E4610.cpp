//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80247E00.hpp"
#include "fn_800D3D78.hpp"
#include "fn_800D49F8.hpp"
#include "fn_801E46CC.hpp"



void fn_801E4610(PPC::Runtime::GCContext* context)
{
/*801E4610 001E1410*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801E4614 001E1414*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E4618 001E1418*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E461C 001E141C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E4620 001E1420*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E4624 001E1424*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E4628 001E1428*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r3));
/* 801E462C 001E142C  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801E4630 001E1430*/ PPC::Runtime::ASM::bne(.L_801E46B0);
/*801E4634 001E1434*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r30));
/* 801E4638 001E1438  54 00 F7 FF */ extrwi. context->r0 , context->r0 , 1 , 29
/*801E463C 001E143C*/ PPC::Runtime::ASM::bne(.L_801E46B0);
/*801E4640 001E1440*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r30));
/* 801E4644 001E1444  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801E4648 001E1448*/ PPC::Runtime::ASM::bne(.L_801E46B0);
/*801E464C 001E144C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r30));
/*801E4650 001E1450*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*801E4654 001E1454*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801E4658 001E1458*/ PPC::Runtime::ASM::bl(fn_80247E00);
/*801E465C 001E145C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E4660 001E1460*/ PPC::Runtime::ASM::bl(fn_800D3D78);
/*801E4664 001E1464*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E4668 001E1468*/ PPC::Runtime::ASM::bne(.L_801E46B0);
/*801E466C 001E146C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8ec, context->r30));
/*801E4670 001E1470*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E4674 001E1474*/ PPC::Runtime::ASM::beq(.L_801E468C);
/*801E4678 001E1478*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E467C 001E147C*/ PPC::Runtime::ASM::bl(fn_800D49F8);
/*801E4680 001E1480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f0, context->r30));
/*801E4684 001E1484*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*801E4688 001E1488*/ PPC::Runtime::ASM::beq(.L_801E46B0);
RUNTIME_PPC_JUMP_LABEL(.L_801E468C, 0x801E468C) //this is a jump label
/*801E468C 001E148C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E4690 001E1490*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801E4694 001E1494*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E4698 001E1498*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801E469C 001E149C*/ PPC::Runtime::ASM::bl(fn_801E46CC);
/*801E46A0 001E14A0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E46A4 001E14A4*/ PPC::Runtime::ASM::beq(.L_801E46B0);
/*801E46A8 001E14A8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E46AC 001E14AC*/ PPC::Runtime::ASM::b(.L_801E46B4);
RUNTIME_PPC_JUMP_LABEL(.L_801E46B0, 0x801E46B0) //this is a jump label
/*801E46B0 001E14B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801E46B4, 0x801E46B4) //this is a jump label
/*801E46B4 001E14B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E46B8 001E14B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E46BC 001E14BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801E46C0 001E14C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E46C4 001E14C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801E46C8 001E14C8*/ PPC::Runtime::ASM::blr();
}