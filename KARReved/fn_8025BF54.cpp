//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025BFB8.hpp"
#include "fn_8025C038.hpp"



void fn_8025BF54(PPC::Runtime::GCContext* context)
{
/*8025BF54 00258D54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025BF58 00258D58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025BF5C 00258D5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BF60 00258D60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BF64 00258D64*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025BF68 00258D68*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025BF6C 00258D6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025BF70 00258D70*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025BF74 00258D74*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025BF78 00258D78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025BF7C 00258D7C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025BF80 00258D80*/ PPC::Runtime::ASM::bne(.L_8025BF90);
/*8025BF84 00258D84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025BF88 00258D88*/ PPC::Runtime::ASM::bl(fn_8025BFB8);
/*8025BF8C 00258D8C*/ PPC::Runtime::ASM::b(.L_8025BF98);
RUNTIME_PPC_JUMP_LABEL(.L_8025BF90, 0x8025BF90) //this is a jump label
/*8025BF90 00258D90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025BF94 00258D94*/ PPC::Runtime::ASM::bl(fn_8025C038);
RUNTIME_PPC_JUMP_LABEL(.L_8025BF98, 0x8025BF98) //this is a jump label
/*8025BF98 00258D98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BF9C 00258D9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BFA0 00258DA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025BFA4 00258DA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025BFA8 00258DA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025BFAC 00258DAC*/ PPC::Runtime::ASM::blr();
}