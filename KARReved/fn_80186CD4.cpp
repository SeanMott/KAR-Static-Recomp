//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80186CD4(PPC::Runtime::GCContext* context)
{
/*80186CD4 00183AD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80186CD8 00183AD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80186CDC 00183ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80186CE0 00183AE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80186CE4 00183AE4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80186CE8 00183AE8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80186CEC 00183AEC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80186CF0 00183AF0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x1248);
/*80186CF4 00183AF4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80186CF8 00183AF8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80186CFC, 0x80186CFC) //this is a jump label
/*80186CFC 00183AFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80186D00 00183B00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80186D04 00183B04*/ PPC::Runtime::ASM::beq(.L_80186D10);
/*80186D08 00183B08*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80186D0C 00183B0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80186D10, 0x80186D10) //this is a jump label
/*80186D10 00183B10*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80186D14 00183B14*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80186D18 00183B18*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x12);
/*80186D1C 00183B1C*/ PPC::Runtime::ASM::blt(.L_80186CFC);
/*80186D20 00183B20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80186D24 00183B24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80186D28 00183B28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80186D2C 00183B2C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80186D30 00183B30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80186D34 00183B34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80186D38 00183B38*/ PPC::Runtime::ASM::blr();
}