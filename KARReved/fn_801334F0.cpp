//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80178088.hpp"
#include "fn_801782D4.hpp"
#include "fn_8017858C.hpp"



void fn_801334F0(PPC::Runtime::GCContext* context)
{
/*801334F0 001302F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801334F4 001302F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801334F8 001302F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801334FC 001302FC*/ PPC::Runtime::ASM::bl(fn_80178088);
/*80133500 00130300*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80133504 00130304*/ PPC::Runtime::ASM::bl(fn_801782D4);
/*80133508 00130308*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8013350C 0013030C*/ PPC::Runtime::ASM::bl(fn_8017858C);
/*80133510 00130310*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133514 00130314*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133518 00130318*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013351C 0013031C*/ PPC::Runtime::ASM::blr();
}