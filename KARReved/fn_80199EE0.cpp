//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C8618.hpp"
#include "fn_80245C10.hpp"
#include "fn_8019AAD8.hpp"



void fn_80199EE0(PPC::Runtime::GCContext* context)
{
/*80199EE0 00196CE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80199EE4 00196CE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80199EE8 00196CE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80199EEC 00196CEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80199EF0 00196CF0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80199EF4 00196CF4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80199EF8 00196CF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x670, context->r3));
/*80199EFC 00196CFC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80199F00 00196D00*/ PPC::Runtime::ASM::beq(.L_80199F50);
/*80199F04 00196D04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80199F08 00196D08*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80199F0C 00196D0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80199F10 00196D10*/ PPC::Runtime::ASM::beq(.L_80199F50);
/*80199F14 00196D14*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80199F18 00196D18*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80199F1C 00196D1C*/ PPC::Runtime::ASM::bl(fn_801C8618);
/*80199F20 00196D20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x670, context->r30));
/*80199F24 00196D24*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x300);
/*80199F28 00196D28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1164 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80199F2C 00196D2C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x324);
/*80199F30 00196D30*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34c, context->r30));
/*80199F34 00196D34*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x330);
/*80199F38 00196D38*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x4);
/*80199F3C 00196D3C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80199F40 00196D40*/ PPC::Runtime::ASM::bl(fn_80245C10);
/*80199F44 00196D44*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80199F48 00196D48*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80199F4C 00196D4C*/ PPC::Runtime::ASM::bl(fn_8019AAD8);
RUNTIME_PPC_JUMP_LABEL(.L_80199F50, 0x80199F50) //this is a jump label
/*80199F50 00196D50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80199F54 00196D54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80199F58 00196D58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80199F5C 00196D5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80199F60 00196D60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80199F64 00196D64*/ PPC::Runtime::ASM::blr();
}