//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8042904C.hpp"



void fn_804293F4(PPC::Runtime::GCContext* context)
{
/*804293F4 004261F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804293F8 004261F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804293FC 004261FC*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80429400 00426200*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*80429404 00426204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429408 00426208*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
/*8042940C 0042620C*/ PPC::Runtime::ASM::mr(context->r4, context->r7);
/*80429410 00426210*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80429414 00426214*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*80429418 00426218*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8042941C 0042621C*/ PPC::Runtime::ASM::bl(fn_8042904C);
/*80429420 00426220*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429424 00426224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80429428 00426228*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042942C 0042622C*/ PPC::Runtime::ASM::blr();
}