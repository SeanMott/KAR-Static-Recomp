//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025CAD8.hpp"
#include "fn_8025CB58.hpp"



void fn_8025CA74(PPC::Runtime::GCContext* context)
{
/*8025CA74 00259874*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025CA78 00259878*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025CA7C 0025987C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CA80 00259880*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025CA84 00259884*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025CA88 00259888*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025CA8C 0025988C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025CA90 00259890*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025CA94 00259894*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025CA98 00259898*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025CA9C 0025989C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025CAA0 002598A0*/ PPC::Runtime::ASM::bne(.L_8025CAB0);
/*8025CAA4 002598A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025CAA8 002598A8*/ PPC::Runtime::ASM::bl(fn_8025CAD8);
/*8025CAAC 002598AC*/ PPC::Runtime::ASM::b(.L_8025CAB8);
RUNTIME_PPC_JUMP_LABEL(.L_8025CAB0, 0x8025CAB0) //this is a jump label
/*8025CAB0 002598B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025CAB4 002598B4*/ PPC::Runtime::ASM::bl(fn_8025CB58);
RUNTIME_PPC_JUMP_LABEL(.L_8025CAB8, 0x8025CAB8) //this is a jump label
/*8025CAB8 002598B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CABC 002598BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025CAC0 002598C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025CAC4 002598C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025CAC8 002598C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025CACC 002598CC*/ PPC::Runtime::ASM::blr();
}