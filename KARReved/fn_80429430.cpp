//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8042904C.hpp"



void fn_80429430(PPC::Runtime::GCContext* context)
{
/*80429430 00426230*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80429434 00426234*/ PPC::Runtime::ASM::mflr(context->r0);
/*80429438 00426238*/ PPC::Runtime::ASM::mr(context->r7, context->r4);
/*8042943C 0042623C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429440 00426240*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80429444 00426244*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80429448 00426248*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8042944C 0042624C*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80429450 00426250*/ PPC::Runtime::ASM::bl(fn_8042904C);
/*80429454 00426254*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429458 00426258*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042945C 0042625C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80429460 00426260*/ PPC::Runtime::ASM::blr();
}