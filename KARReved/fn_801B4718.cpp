//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B47E8.hpp"
#include "fn_801B49D4.hpp"
#include "fn_abilityTimer_Ice_checkIf0.hpp"
#include "fn_abilityTimer_Ice_checkIf0.hpp"
#include "fn_801B47E8.hpp"
#include "fn_801B49D4.hpp"
#include "fn_801B4944.hpp"
#include "fn_801B4944.hpp"
#include "fn_801A7BDC.hpp"
#include "fn_801A9B84.hpp"



void fn_801B4718(PPC::Runtime::GCContext* context)
{
/*801B4718 001B1518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B471C 001B151C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4720 001B1520*/ PPC::Runtime::ASM::lis(context->r6, fn_801B47E8 @ Get_MemoryOffset_HighBit);
/*801B4724 001B1524*/ PPC::Runtime::ASM::lis(context->r5, fn_801B49D4 @ Get_MemoryOffset_HighBit);
/*801B4728 001B1528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B472C 001B152C*/ PPC::Runtime::ASM::lis(context->r4, fn_abilityTimer_Ice_checkIf0 @ Get_MemoryOffset_HighBit);
/*801B4730 001B1530*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_abilityTimer_Ice_checkIf0 @ Get_MemoryOffset_LowBit);
/*801B4734 001B1534*/ PPC::Runtime::ASM::addi(context->r6, context->r6, fn_801B47E8 @ Get_MemoryOffset_LowBit);
/*801B4738 001B1538*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B473C 001B153C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_801B49D4 @ Get_MemoryOffset_LowBit);
/*801B4740 001B1540*/ PPC::Runtime::ASM::lis(context->r4, fn_801B4944 @ Get_MemoryOffset_HighBit);
/*801B4744 001B1544*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B4748 001B1548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x92c, context->r3));
/*801B474C 001B154C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801B4944 @ Get_MemoryOffset_LowBit);
/*801B4750 001B1550*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x934, context->r3));
/*801B4754 001B1554*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r3));
/*801B4758 001B1558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r3));
/*801B475C 001B155C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B4760 001B1560*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2bc, context->r4));
/*801B4764 001B1564*/ PPC::Runtime::ASM::bl(fn_801A7BDC);
/*801B4768 001B1568*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801B476C 001B156C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B4770 001B1570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4774 001B1574*/ PPC::Runtime::ASM::bl(fn_801A9B84);
/*801B4778 001B1578*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801B477C 001B157C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801B4780 001B1580*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B4784 001B1584*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B4788 001B1588*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B478C 001B158C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4790 001B1590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4794 001B1594*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4798 001B1598*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B479C 001B159C*/ PPC::Runtime::ASM::blr();
}