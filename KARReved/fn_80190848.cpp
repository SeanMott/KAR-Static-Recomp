//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054414.hpp"



void fn_80190848(PPC::Runtime::GCContext* context)
{
/*80190848 0018D648*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019084C 0018D64C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80190850 0018D650*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x324);
/*80190854 0018D654*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x330);
/*80190858 0018D658*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019085C 0018D65C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x300);
/*80190860 0018D660*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r3));
/*80190864 0018D664*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r3));
/*80190868 0018D668*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r3));
/*8019086C 0018D66C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*80190870 0018D670*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80190874 0018D674*/ PPC::Runtime::ASM::bl(fn_80054414);
/*80190878 0018D678*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019087C 0018D67C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80190880 0018D680*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80190884 0018D684*/ PPC::Runtime::ASM::blr();
}