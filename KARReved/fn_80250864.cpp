//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"



void fn_80250864(PPC::Runtime::GCContext* context)
{
/*80250864 0024D664*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80250868 0024D668*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025086C 0024D66C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80250870 0024D670*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1d8);
/*80250874 0024D674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80250878 0024D678*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*8025087C 0024D67C*/ PPC::Runtime::ASM::bl(memset);
/*80250880 0024D680*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80250884 0024D684*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80250888 0024D688*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025088C 0024D68C*/ PPC::Runtime::ASM::blr();
}