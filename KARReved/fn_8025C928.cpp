//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025C928(PPC::Runtime::GCContext* context)
{
/*8025C928 00259728*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025C92C 0025972C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025C930 00259730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C934 00259734*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C938 00259738*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025C93C 0025973C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C940 00259740*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025C944 00259744*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C948 00259748*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025C94C 0025974C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C950 00259750*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C954 00259754*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025C958 00259758*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025C95C 0025975C*/ PPC::Runtime::ASM::blr();
}