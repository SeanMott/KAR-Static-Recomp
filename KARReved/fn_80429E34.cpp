//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80429E34(PPC::Runtime::GCContext* context)
{
/*80429E34 00426C34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80429E38 00426C38*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80429E3C 00426C3C*/ PPC::Runtime::ASM::b(.L_80429E50);
RUNTIME_PPC_JUMP_LABEL(.L_80429E40, 0x80429E40) //this is a jump label
/*80429E40 00426C40*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80429E44 00426C44*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80429E48 00426C48*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80429E4C 00426C4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80429E50, 0x80429E50) //this is a jump label
/*80429E50 00426C50*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80429E54 00426C54*/ PPC::Runtime::ASM::bne(.L_80429E40);
/*80429E58 00426C58*/ PPC::Runtime::ASM::blr();
}