//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80369D5C.hpp"
#include "fn_8036AE5C.hpp"
#include "fn_80296D3C.hpp"



void fn_80369CE8(PPC::Runtime::GCContext* context)
{
/*80369CE8 00366AE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1b0, context->r1));
/*80369CEC 00366AEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80369CF0 00366AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r1));
/*80369CF4 00366AF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r1));
/*80369CF8 00366AF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80369CFC 00366AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80369D00 00366B00*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x40);
/*80369D04 00366B04*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80369D08 00366B08*/ PPC::Runtime::ASM::beq(.L_80369D48);
/*80369D0C 00366B0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80369D10 00366B10*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80369D14 00366B14*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*80369D18 00366B18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80369D1C 00366B1C*/ PPC::Runtime::ASM::bl(fn_80369D5C);
/*80369D20 00366B20*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x10);
/*80369D24 00366B24*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80369D28 00366B28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80369D2C 00366B2C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4);
/*80369D30 00366B30*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80369D34 00366B34*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*80369D38 00366B38*/ PPC::Runtime::ASM::bl(fn_8036AE5C);
/*80369D3C 00366B3C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80369D40 00366B40*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80369D44 00366B44*/ PPC::Runtime::ASM::bl(fn_80296D3C);
RUNTIME_PPC_JUMP_LABEL(.L_80369D48, 0x80369D48) //this is a jump label
/*80369D48 00366B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r1));
/*80369D4C 00366B4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r1));
/*80369D50 00366B50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80369D54 00366B54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x1b0);
/*80369D58 00366B58*/ PPC::Runtime::ASM::blr();
}