//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80468B80(PPC::Runtime::GCContext* context)
{
/*80468B80 00465980*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80468B84 00465984*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/* 80468B88 00465988  54 04 16 BB */ clrlslwi. context->r4 , context->r0 , 28 , 2
/*80468B8C 0046598C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80468B90 00465990*/ PPC::Runtime::ASM::srwi(context->r4, context->r4, 1);
/*80468B94 00465994*/ PPC::Runtime::ASM::ble(.L_80468C08);
/* 80468B98 00465998  54 80 E8 FF */ srwi. context->r0 , context->r4 , 3
/*80468B9C 0046599C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80468BA0 004659A0*/ PPC::Runtime::ASM::beq(.L_80468BF4);
RUNTIME_PPC_JUMP_LABEL(.L_80468BA4, 0x80468BA4) //this is a jump label
/*80468BA4 004659A4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80468BA8 004659A8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BAC 004659AC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80468BB0 004659B0*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BB4 004659B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80468BB8 004659B8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BBC 004659BC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80468BC0 004659C0*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BC4 004659C4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80468BC8 004659C8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BCC 004659CC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r3));
/*80468BD0 004659D0*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BD4 004659D4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80468BD8 004659D8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BDC 004659DC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*80468BE0 004659E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*80468BE4 004659E4*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468BE8 004659E8*/ PPC::Runtime::ASM::bdnz(.L_80468BA4);
/*80468BEC 004659EC*/ PPC::Runtime::ASM::andi.(context->r4, context->r4, 0x7);
/*80468BF0 004659F0*/ PPC::Runtime::ASM::beq(.L_80468C08);
RUNTIME_PPC_JUMP_LABEL(.L_80468BF4, 0x80468BF4) //this is a jump label
/*80468BF4 004659F4*/ PPC::Runtime::ASM::mtctr(context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80468BF8, 0x80468BF8) //this is a jump label
/*80468BF8 004659F8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80468BFC 004659FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2);
/*80468C00 00465A00*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80468C04 00465A04*/ PPC::Runtime::ASM::bdnz(.L_80468BF8);
RUNTIME_PPC_JUMP_LABEL(.L_80468C08, 0x80468C08) //this is a jump label
/*80468C08 00465A08*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r5, 16);
/*80468C0C 00465A0C*/ PPC::Runtime::ASM::srwi(context->r0, context->r5, 16);
/*80468C10 00465A10*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80468C14 00465A14*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 16);
/*80468C18 00465A18*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 16);
/*80468C1C 00465A1C*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80468C20 00465A20*/ PPC::Runtime::ASM::xori(context->r3, context->r0, 0xffff);
/*80468C24 00465A24*/ PPC::Runtime::ASM::blr();
}