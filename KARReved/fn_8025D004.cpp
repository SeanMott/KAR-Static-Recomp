//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025D068.hpp"
#include "fn_8025D0E8.hpp"



void fn_8025D004(PPC::Runtime::GCContext* context)
{
/*8025D004 00259E04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D008 00259E08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D00C 00259E0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D010 00259E10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D014 00259E14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D018 00259E18*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025D01C 00259E1C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025D020 00259E20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D024 00259E24*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025D028 00259E28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025D02C 00259E2C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025D030 00259E30*/ PPC::Runtime::ASM::bne(.L_8025D040);
/*8025D034 00259E34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D038 00259E38*/ PPC::Runtime::ASM::bl(fn_8025D068);
/*8025D03C 00259E3C*/ PPC::Runtime::ASM::b(.L_8025D048);
RUNTIME_PPC_JUMP_LABEL(.L_8025D040, 0x8025D040) //this is a jump label
/*8025D040 00259E40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D044 00259E44*/ PPC::Runtime::ASM::bl(fn_8025D0E8);
RUNTIME_PPC_JUMP_LABEL(.L_8025D048, 0x8025D048) //this is a jump label
/*8025D048 00259E48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D04C 00259E4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D050 00259E50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D054 00259E54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D058 00259E58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D05C 00259E5C*/ PPC::Runtime::ASM::blr();
}