//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8045BCA4(PPC::Runtime::GCContext* context)
{
/*8045BCA4 00458AA4*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/* 8045BCA8 00458AA8  4C 81 00 20 */ blelr
/* 8045BCAC 00458AAC  54 A0 E8 FF */ srwi. context->r0 , context->r5 , 3
/*8045BCB0 00458AB0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8045BCB4 00458AB4*/ PPC::Runtime::ASM::beq(.L_8045BCE8);
RUNTIME_PPC_JUMP_LABEL(.L_8045BCB8, 0x8045BCB8) //this is a jump label
/*8045BCB8 00458AB8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045BCBC 00458ABC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*8045BCC0 00458AC0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*8045BCC4 00458AC4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*8045BCC8 00458AC8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045BCCC 00458ACC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*8045BCD0 00458AD0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*8045BCD4 00458AD4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*8045BCD8 00458AD8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8045BCDC 00458ADC*/ PPC::Runtime::ASM::bdnz(.L_8045BCB8);
/*8045BCE0 00458AE0*/ PPC::Runtime::ASM::andi.(context->r5, context->r5, 0x7);
/*8045BCE4 00458AE4*/ PPC::Runtime::ASM::beqlr();
RUNTIME_PPC_JUMP_LABEL(.L_8045BCE8, 0x8045BCE8) //this is a jump label
/*8045BCE8 00458AE8*/ PPC::Runtime::ASM::mtctr(context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8045BCEC, 0x8045BCEC) //this is a jump label
/*8045BCEC 00458AEC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045BCF0 00458AF0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8045BCF4 00458AF4*/ PPC::Runtime::ASM::bdnz(.L_8045BCEC);
/*8045BCF8 00458AF8*/ PPC::Runtime::ASM::blr();
}