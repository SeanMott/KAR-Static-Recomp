//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_memcard_moveDataIntoCorrectSpot(PPC::Runtime::GCContext* context)
{
/*8045BCFC 00458AFC*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/* 8045BD00 00458B00  4C 81 00 20 */ blelr
/* 8045BD04 00458B04  54 A0 E8 FF */ srwi. context->r0 , context->r5 , 3
/*8045BD08 00458B08*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8045BD0C 00458B0C*/ PPC::Runtime::ASM::beq(.L_8045BD64);
RUNTIME_PPC_JUMP_LABEL(.L_8045BD10, 0x8045BD10) //this is a jump label
/*8045BD10 00458B10*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8045BD14 00458B14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045BD18 00458B18*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8045BD1C 00458B1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*8045BD20 00458B20*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8045BD24 00458B24*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*8045BD28 00458B28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*8045BD2C 00458B2C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*8045BD30 00458B30*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8045BD34 00458B34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045BD38 00458B38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r4));
/*8045BD3C 00458B3C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*8045BD40 00458B40*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r4));
/*8045BD44 00458B44*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*8045BD48 00458B48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r4));
/*8045BD4C 00458B4C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8045BD50 00458B50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*8045BD54 00458B54*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8045BD58 00458B58*/ PPC::Runtime::ASM::bdnz(.L_8045BD10);
/*8045BD5C 00458B5C*/ PPC::Runtime::ASM::andi.(context->r5, context->r5, 0x7);
/*8045BD60 00458B60*/ PPC::Runtime::ASM::beqlr();
RUNTIME_PPC_JUMP_LABEL(.L_8045BD64, 0x8045BD64) //this is a jump label
/*8045BD64 00458B64*/ PPC::Runtime::ASM::mtctr(context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8045BD68, 0x8045BD68) //this is a jump label
/*8045BD68 00458B68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8045BD6C 00458B6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8045BD70 00458B70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045BD74 00458B74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8045BD78 00458B78*/ PPC::Runtime::ASM::bdnz(.L_8045BD68);
/*8045BD7C 00458B7C*/ PPC::Runtime::ASM::blr();
}