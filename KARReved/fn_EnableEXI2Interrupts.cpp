//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_EnableEXI2Interrupts(PPC::Runtime::GCContext* context)
{
/*803C2430 003BF230*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C2434 003BF234*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2438 003BF238*/ PPC::Runtime::ASM::lis(context->r3, TRK_Use_BBA @ Get_MemoryOffset_HighBit);
/*803C243C 003BF23C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2440 003BF240*/ PPC::Runtime::ASM::lbz(context->r0, TRK_Use_BBA @ Get_MemoryOffset_LowBit ( context->r3 ));
/*803C2444 003BF244*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C2448 003BF248*/ PPC::Runtime::ASM::bne(.L_803C2468);
/*803C244C 003BF24C*/ PPC::Runtime::ASM::lis(context->r3, gDBCommTable @ Get_MemoryOffset_HighBit);
/*803C2450 003BF250*/ PPC::Runtime::ASM::addi(context->r3, context->r3, gDBCommTable @ Get_MemoryOffset_LowBit);
/*803C2454 003BF254*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803C2458 003BF258*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803C245C 003BF25C*/ PPC::Runtime::ASM::beq(.L_803C2468);
/*803C2460 003BF260*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C2464 003BF264*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803C2468, 0x803C2468) //this is a jump label
/*803C2468 003BF268*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C246C 003BF26C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2470 003BF270*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C2474 003BF274*/ PPC::Runtime::ASM::blr();
}