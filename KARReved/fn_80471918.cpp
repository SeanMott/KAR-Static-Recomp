//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80471E5C.hpp"



void fn_80471918(PPC::Runtime::GCContext* context)
{
/*80471918 0046E718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047191C 0046E71C*/ PPC::Runtime::ASM::lis(context->r3, lbl_805B9C90 @ Get_MemoryOffset_HighBit);
/*80471920 0046E720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80471924 0046E724*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805B9C90 @ Get_MemoryOffset_LowBit);
/*80471928 0046E728*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*8047192C 0046E72C*/ PPC::Runtime::ASM::bl(fn_80471E5C);
/*80471930 0046E730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80471934 0046E734*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*80471938 0046E738*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047193C 0046E73C*/ PPC::Runtime::ASM::blr();
}