//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_getCurrentFieldEvenOdd(PPC::Runtime::GCContext* context)
{
/*803DF408 003DC208*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803DF40C 003DC20C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x2000);
/*803DF410 003DC210*/ PPC::Runtime::ASM::lhzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*803DF414 003DC214*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x2000);
/*803DF418 003DC218*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 21);
RUNTIME_PPC_JUMP_LABEL(.L_803DF41C, 0x803DF41C) //this is a jump label
/*803DF41C 003DC21C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803DF420 003DC220*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*803DF424 003DC224*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r4));
/*803DF428 003DC228*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 21);
/*803DF42C 003DC22C*/ PPC::Runtime::ASM::cmplw(context->r6, context->r5);
/*803DF430 003DC230*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 21);
/*803DF434 003DC234*/ PPC::Runtime::ASM::bne(.L_803DF41C);
/*803DF438 003DC238*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DDFA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DF43C 003DC23C*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*803DF440 003DC240*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x1);
/*803DF444 003DC244*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r6));
/*803DF448 003DC248*/ PPC::Runtime::ASM::slwi(context->r5, context->r0, 1);
/*803DF44C 003DC24C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*803DF450 003DC250*/ PPC::Runtime::ASM::divwu(context->r3, context->r4, context->r3);
/*803DF454 003DC254*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r3);
/*803DF458 003DC258*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*803DF45C 003DC25C*/ PPC::Runtime::ASM::bge(.L_803DF468);
/*803DF460 003DC260*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803DF464 003DC264*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803DF468, 0x803DF468) //this is a jump label
/*803DF468 003DC268*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803DF46C 003DC26C*/ PPC::Runtime::ASM::blr();
}