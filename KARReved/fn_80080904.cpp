//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007E40C.hpp"



void fn_80080904(PPC::Runtime::GCContext* context)
{
/*80080904 0007D704*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80080908 0007D708*/ PPC::Runtime::ASM::mflr(context->r0);
/*8008090C 0007D70C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80080910 0007D710*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80080914 0007D714*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80080918 0007D718*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x3e8);
/*8008091C 0007D71C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x324);
/*80080920 0007D720*/ PPC::Runtime::ASM::bl(fn_8007E40C);
/*80080924 0007D724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80080928 0007D728*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8008092C 0007D72C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80080930 0007D730*/ PPC::Runtime::ASM::blr();
}