//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803C2400(PPC::Runtime::GCContext* context)
{
/*803C2400 003BF200*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C2404 003BF204*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C2408 003BF208*/ PPC::Runtime::ASM::lis(context->r3, gDBCommTable @ Get_MemoryOffset_HighBit);
/*803C240C 003BF20C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2410 003BF210*/ PPC::Runtime::ASM::addi(context->r3, context->r3, gDBCommTable @ Get_MemoryOffset_LowBit);
/*803C2414 003BF214*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803C2418 003BF218*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C241C 003BF21C*/ PPC::Runtime::ASM::bctrl();
/*803C2420 003BF220*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C2424 003BF224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C2428 003BF228*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C242C 003BF22C*/ PPC::Runtime::ASM::blr();
}